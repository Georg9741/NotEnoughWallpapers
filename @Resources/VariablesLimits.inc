[Variables]

;    - - - - - - -
;   - - -Main - - -
;    - - - - - - -

; Profile Count Limits
Profiles_Count_Under=1
Profiles_Count_Above=64
 Profiles_Count_Limits=(#Profiles_Count#<#Profiles_Count_Under#?#Profiles_Count_Under#:(#Profiles_Count#>#Profiles_Count_Above#?#Profiles_Count_Above#:#Profiles_Count#))

; Rows and Columns
Profiles_Grid_Under=1
Profiles_Grid_Above=50
 Profiles_GridColumns_Limits=(#Profiles_GridColumns#<#Profiles_Grid_Under#?#Profiles_Grid_Under#:(#Profiles_GridColumns#>#Profiles_Grid_Above#?#Profiles_Grid_Above#:#Profiles_GridColumns#))
 Profiles_GridRows_Limits=(#Profiles_GridRows#<#Profiles_Grid_Under#?#Profiles_Grid_Under#:(#Profiles_GridRows#>#Profiles_Grid_Above#?#Profiles_Grid_Above#:#Profiles_GridRows#))

;    - - - - - - -
;   - - -Shape- - -
;    - - - - - - -

; Profiles Icon Size Limits
Profiles_IconSize_Under=32
Profiles_IconSize_Above=512
 Profiles_IconSize_Limits=(#Profiles_IconSize#<#Profiles_IconSize_Under#?#Profiles_IconSize_Under#:(#Profiles_IconSize#>#Profiles_IconSize_Above#?#Profiles_IconSize_Above#:#Profiles_IconSize#))

; Profiles Frame Width Limits
Profiles_StrokeWidth_Under=0
Profiles_StrokeWidth_Above=0
 Profiles_StrokeWidth_Limits=#Profiles_StrokeWidth#

; Background Frame Width
Background_StrokeWidth_Under=0
Background_StrokeWidth_Above=0
 Background_StrokeWidth_Limits=#Background_StrokeWidth#

; Profiles Gap Limits
Profiles_Gap_Under=0
Profiles_Gap_Above=0
Profiles_Gap_Limits=#Profiles_Gap#

; Background Frame Padding Limits
Background_Padding_Under=0
Background_Padding_Above=0
 Background_PaddingTop_Limits=#Background_PaddingTop#
 Background_PaddingBottom_Limits=#Background_PaddingBottom#
 Background_PaddingRight_Limits=#Background_PaddingRight#
 Background_PaddingLeft_Limits=#Background_PaddingLeft#

; Profile Corners Limits
Profiles_Corners_Under=0
Profiles_Corners_Above=0
 Profiles_Corners_Limits=#Profiles_Corners#

; Background Corners Limits
Background_Corners_Under=0
Background_Corners_Above=0
 Background_Corners_Limits=#Background_Corners#