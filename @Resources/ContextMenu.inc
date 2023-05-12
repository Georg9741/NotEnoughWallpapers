[Rainmeter]
ContextTitle=[#Context[#ContextType]Title]
ContextAction=[#Context[#ContextType]Action]
ContextTitle2=[#Context[#ContextType]Title2]
ContextAction2=[#Context[#ContextType]Action2]
ContextTitle3=[#Context[#ContextType]Title3]
ContextAction3=[#Context[#ContextType]Action3]
ContextTitle4=[#Context[#ContextType]Title4]
ContextAction4=[#Context[#ContextType]Action4]
ContextTitle5=[#Context[#ContextType]Title5]
ContextAction5=[#Context[#ContextType]Action5]
ContextTitle6=[#Context[#ContextType]Title6]
ContextAction6=[#Context[#ContextType]Action6]
ContextTitle7=[#Context[#ContextType]Title7]
ContextAction7=[#Context[#ContextType]Action7]
ContextTitle8=[#Context[#ContextType]Title8]
ContextAction8=[#Context[#ContextType]Action8]
ContextTitle9=[#Context[#ContextType]Title9]
ContextAction9=[#Context[#ContextType]Action9]
ContextTitle10=[#Context[#ContextType]Title10]
ContextAction10=[#Context[#ContextType]Action10]
ContextTitle11=[#Context[#ContextType]Title11]
ContextAction11=[#Context[#ContextType]Action11]
ContextTitle12=[#Context[#ContextType]Title12]
ContextAction12=[#Context[#ContextType]Action12]
ContextTitle13=[#Context[#ContextType]Title13]
ContextAction13=[#Context[#ContextType]Action13]
ContextTitle14=[#Context[#ContextType]Title14]
ContextAction14=[#Context[#ContextType]Action14]
ContextTitle15=[#Context[#ContextType]Title15]
ContextAction15=[#Context[#ContextType]Action15]
ContextTitle16=[#Context[#ContextType]Title16]
ContextAction16=[#Context[#ContextType]Action16]

; Context Menu for each Profile
[ContextMenuProfilesScript]
Measure=Script
ScriptFile="#@#Scripts\ContextMenuProfiles.lua"
Number=#Profiles_Count_Limits#
IncFile="#@#ContextMenuProfiles.inc"

;    - - - - - - - - - - -
;   - - -Context Menus- - -
;    - - - - - - - - - - -

[Variables]
; Standard Context Menu
ContextStandardTitle="#ROOTCONFIG#"
ContextStandardAction=["#ROOTCONFIGPATH#"]
ContextStandardTitle2=-
ContextStandardTitle3=[\x26ED] Settings
ContextStandardAction3=[!ActivateConfig "#ROOTCONFIG#\Settings"]
ContextStandardTitle4=-
ContextStandardTitle5=[#ContextDesktopIcons[#ToggleDesktopIcons]]
ContextStandardAction5=[!WriteKeyValue Variables ToggleDesktopIcons (1-#ToggleDesktopIcons#) "#@#ContextMenu.inc"][#ToggleDesktopIcons[#ToggleDesktopIcons]][!Refresh]
ContextStandardTitle6=-
ContextStandardTitle7=[#ContextDraggable[#ToggleDraggable]]
ContextStandardAction7=[!WriteKeyValue Variables ToggleDraggable (1-#ToggleDraggable#) "#@#ContextMenu.inc"][!Draggable #ToggleDraggable#][!Refresh]
ContextStandardTitle8=-
ContextStandardTitle9=Open Wallpaper Engine
ContextStandardAction9=["#WEPath#"]
ContextStandardTitle10=-
ContextStandardTitle11=Default Skin Menu[\x0009][\x23F5]
ContextStandardAction11=[!SkinMenu]
ContextStandardTitle12=

; Profiles Context Menu
@Include="#@#ContextMenuProfiles.inc"

;    - - - - - - - -
;   - - -Toggles- - -
;    - - - - - - - -

; Toggle Desktop Icons
ToggleDesktopIcons0=["#WEPath#" -control showIcons]
ToggleDesktopIcons1=["#WEPath#" -control hideIcons]
ContextDesktopIcons0=[\x25cb] Show Desktop Icons
ContextDesktopIcons1=[\x25c9] Show Desktop Icons
ToggleDesktopIcons=1

; Toggle Draggable
ContextDraggable0=[\x25cb] Lock Skin
ContextDraggable1=[\x25c9] Lock Skin
ToggleDraggable=0
