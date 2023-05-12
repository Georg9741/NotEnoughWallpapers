function Initialize()
  local num = SELF:GetNumberOption("Number")
  local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
  local t = {}

  table.insert(t, '[Variables]')
  table.insert(t, '; Default Wallpaper Engine Profiles')
  for n=1,num do
    table.insert(t, 'Profile'..n..'=profile'..n..'')
  end
  table.insert(t, '; Default Rainmeter Layouts')
  for n=1,num do
    table.insert(t, 'Layout'..n..'=profile'..n..'')
  end

  file:write(table.concat(t, "\n"))
  file:close()
end