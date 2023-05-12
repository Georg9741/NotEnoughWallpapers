-- setup data structure and some constants, set initial rgb value
function Initialize()

    dofile(SKIN:MakePathAbsolute('Extra\\Scripts\\HSBLib.lua'))
    colors = {}
    SetRGB(SKIN:GetVariable('BaseColor'))
    SetAlpha(SKIN:GetVariable('BaseOpacity'))

end

function SetAlpha(...)

    colors.cur_alpha = arg[1]

    SKIN:Bang('!Update')

end

function InputRGB(inp)
    if string.match(inp, '^(%d+),(%d+),(%d+)$') then
        local r, g, b = inp:match('^(%d+),(%d+),(%d+)$')
        r, g, b = tonumber(r), tonumber(g), tonumber(b)
        if r <= 255 and g <= 255 and b <= 255 then
            SetRGB(inp)
        end
    end
end

function InputHEX(inp)
    if string.match(inp, '^(%x+)$') then
        SetHEX(inp)
    end
end

function Update() end

-- return the specified color from the colors table
function GetColor(key) return colors[key] or 0 end

-- set slider properties based on current color
function SetSliders()

    -- HSB
    colors.slider_hue_0 = string.format('%s,%s,%s', HSBtoRGB((0/6), colors.cur_sat, colors.cur_bri))
    colors.slider_hue_60 = string.format('%s,%s,%s', HSBtoRGB((1/6), colors.cur_sat, colors.cur_bri))
    colors.slider_hue_120 = string.format('%s,%s,%s', HSBtoRGB((2/6), colors.cur_sat, colors.cur_bri))
    colors.slider_hue_180 = string.format('%s,%s,%s', HSBtoRGB((3/6), colors.cur_sat, colors.cur_bri))
    colors.slider_hue_240 = string.format('%s,%s,%s', HSBtoRGB((4/6), colors.cur_sat, colors.cur_bri))
    colors.slider_hue_300 = string.format('%s,%s,%s', HSBtoRGB((5/6), colors.cur_sat, colors.cur_bri))
    colors.slider_hue_360 = string.format('%s,%s,%s', HSBtoRGB((6/6), colors.cur_sat, colors.cur_bri))
    colors.slider_sat_left = string.format('%s,%s,%s', HSBtoRGB(colors.cur_hue, 0, colors.cur_bri))
    colors.slider_sat_right = string.format('%s,%s,%s', HSBtoRGB(colors.cur_hue, 1, colors.cur_bri))
    colors.slider_bri_left = string.format('%s,%s,%s', HSBtoRGB(colors.cur_hue, colors.cur_sat, 0))
    colors.slider_bri_right = string.format('%s,%s,%s', HSBtoRGB(colors.cur_hue, colors.cur_sat, 1))
    -- RGB
    colors.slider_r_left = string.format('%s,%s,%s', 0, colors.cur_g, colors.cur_b)
    colors.slider_r_right = string.format('%s,%s,%s', 255, colors.cur_g, colors.cur_b)
    colors.slider_g_left = string.format('%s,%s,%s', colors.cur_r, 0, colors.cur_b)
    colors.slider_g_right = string.format('%s,%s,%s', colors.cur_r, 255, colors.cur_b)
    colors.slider_b_left = string.format('%s,%s,%s', colors.cur_r, colors.cur_g, 0)
    colors.slider_b_right = string.format('%s,%s,%s', colors.cur_r, colors.cur_g, 255)
    -- Display
	colors.disp_hue = string.format('%.0f', Round((colors.cur_hue * 360), 0))
	colors.disp_sat = string.format('%.0f', Round((colors.cur_sat * 100), 0))
    colors.disp_bri = string.format('%.0f', Round((colors.cur_bri * 100), 0))
    colors.disp_hsb = string.format('%s,%s,%s', colors.disp_hue, colors.disp_sat, colors.disp_bri)

end

-- set rgb to the given string, or set the given rgb property to the given value
function SetRGB(...)

    if arg.n == 1 then
        colors.cur_rgb = arg[1]
        colors.cur_r, colors.cur_g, colors.cur_b = string.match(colors.cur_rgb, '(%d+),(%d+),(%d+)')
    else
        colors['cur_' .. arg[1]] = arg[3] and arg[2] or Round(Clamp((SKIN:ParseFormula(arg[2]) * 255),0,255),0)
        colors.cur_rgb = string.format('%s,%s,%s', colors.cur_r, colors.cur_g, colors.cur_b)
    end

    colors.cur_hue, colors.cur_sat, colors.cur_bri = RGBtoHSB(colors.cur_rgb)
    colors.cur_hsb = string.format('%s,%s,%s', colors.cur_hue, colors.cur_sat, colors.cur_bri)
    colors.cur_hex = RGBtoHEX(colors.cur_r, colors.cur_g, colors.cur_b)

    SetSliders()
    SKIN:Bang('!Update')

end

-- set hsb to the given string, or set the given hsb property to the given value
function SetHSB(...)

    if arg.n == 1 then
        colors.cur_hsb = arg[1]
    else
        colors['cur_' .. arg[1]] = Clamp(SKIN:ParseFormula(arg[2]),0,1)
        colors.cur_hsb = string.format('%s,%s,%s', colors.cur_hue, colors.cur_sat, colors.cur_bri)
    end

    colors.cur_rgb = string.format('%s,%s,%s', HSBtoRGB(colors.cur_hue, colors.cur_sat, colors.cur_bri))
    colors.cur_r, colors.cur_g, colors.cur_b = string.match(colors.cur_rgb, '(%d+),(%d+),(%d+)')
    colors.cur_hex = RGBtoHEX(colors.cur_r, colors.cur_g, colors.cur_b)

    SetSliders()
    SKIN:Bang('!Update')

end

-- set hex value from RGB
function SetHEX(value)

    SetRGB(string.format('%s,%s,%s', HEXtoRGB(value)))

end

-- change an rgb property by the given delta
function ChangeRGB(key, delta)

    SetRGB(key, Clamp(colors['cur_' .. key] + delta, 0, 255), true)

end

-- change an hsb property by the given delta
function ChangeHSB(key, delta)

    SetHSB(key, Clamp(colors['cur_' .. key] + delta, 0, 1))

end
