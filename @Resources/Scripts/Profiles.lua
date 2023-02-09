function Initialize()
  local num = SELF:GetNumberOption("Number")
  local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
  local t = {}

  for n=1,num do
    table.insert(t, '['..-n..']')
    table.insert(t, 'Meter=Shape')
    table.insert(t, 'MeterStyle=ProfilesStyle')
    table.insert(t, '[Container'..n..']')
    table.insert(t, 'Meter=Shape')
    table.insert(t, 'MeterStyle=ContainerStyle')
    table.insert(t, '[NoImage'..n..']')
    table.insert(t, 'Meter=Shape')
    table.insert(t, 'MeterStyle=NoImageStyle')
    table.insert(t, 'Container=Container'..n..'')
    table.insert(t, '['..n..']')
    table.insert(t, 'Meter=Image')
    table.insert(t, 'MeterStyle=ImageStyle')
    table.insert(t, '[OnHover'..n..']')
    table.insert(t, 'Meter=Shape')
    table.insert(t, 'MeterStyle=OnHoverStyle')
  end

  file:write(table.concat(t, "\n"))
  file:close()
end