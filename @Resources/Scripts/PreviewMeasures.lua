function Initialize()
  local num = SELF:GetNumberOption("Number")
  local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
  local t = {}

  for n=1,num do
    table.insert(t, '[PreviewImageMeasure'..n..']')
    table.insert(t, 'Measure=Plugin')
    table.insert(t, 'Plugin=FileView')
    table.insert(t, 'Type=FilePath')
    table.insert(t, 'Path="#Folder'..n..'#"')
    table.insert(t, 'Extensions="jpg;png;gif"')
    table.insert(t, 'ShowDotDot=0')
    table.insert(t, 'ShowFolder=0')
    table.insert(t, 'OnUpdateAction=[!Redraw]')
  end

  file:write(table.concat(t, "\n"))
  file:close()
end