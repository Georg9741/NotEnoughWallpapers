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
Profiles_StrokeWidth_Above=960
Profiles_StrokeWidth_Limits=(#Profiles_StrokeWidth#<#Profiles_StrokeWidth_Under#?#Profiles_StrokeWidth_Under#:(#Profiles_StrokeWidth#>#Profiles_StrokeWidth_Above#?#Profiles_StrokeWidth_Above#:#Profiles_StrokeWidth#))

; Background Frame Width Limits
Background_StrokeWidth_Under=0
Background_StrokeWidth_Above=960
Background_StrokeWidth_Limits=(#Background_StrokeWidth#<#Background_StrokeWidth_Under#?#Background_StrokeWidth_Under#:(#Background_StrokeWidth#>#Background_StrokeWidth_Above#?#Background_StrokeWidth_Above#:#Background_StrokeWidth#))

; Profiles Gap Limits
Profiles_Gap_Under=0
Profiles_Gap_Above=960
Profiles_Gap_Limits=(#Profiles_Gap#<#Profiles_Gap_Under#?#Profiles_Gap_Under#:(#Profiles_Gap#>#Profiles_Gap_Above#?#Profiles_Gap_Above#:#Profiles_Gap#))

; Background Frame Padding Limits
Background_Padding_Under=0
Background_Padding_Above=960
Background_PaddingTop_Limits=(#Background_PaddingTop#<#Background_Padding_Under#?#Background_Padding_Under#:(#Background_PaddingTop#>#Background_Padding_Above#?#Background_Padding_Above#:#Background_PaddingTop#))
Background_PaddingBottom_Limits=(#Background_PaddingBottom#<#Background_Padding_Under#?#Background_Padding_Under#:(#Background_PaddingBottom#>#Background_Padding_Above#?#Background_Padding_Above#:#Background_PaddingBottom#))
Background_PaddingRight_Limits=(#Background_PaddingRight#<#Background_Padding_Under#?#Background_Padding_Under#:(#Background_PaddingRight#>#Background_Padding_Above#?#Background_Padding_Above#:#Background_PaddingRight#))
Background_PaddingLeft_Limits=(#Background_PaddingLeft#<#Background_Padding_Under#?#Background_Padding_Under#:(#Background_PaddingLeft#>#Background_Padding_Above#?#Background_Padding_Above#:#Background_PaddingLeft#))

; Profile Corners Limits
Profiles_Corners_Under=0
Profiles_Corners_Above=960
Profiles_Corners_Limits=(#Profiles_Corners#<#Profiles_Corners_Under#?#Profiles_Corners_Under#:(#Profiles_Corners#>#Profiles_Corners_Above#?#Profiles_Corners_Above#:#Profiles_Corners#))

; Background Corners Limits
Background_Corners_Under=0
Background_Corners_Above=960
Background_Corners_Limits=(#Background_Corners#<#Background_Corners_Under#?#Background_Corners_Under#:(#Background_Corners#>#Background_Corners_Above#?#Background_Corners_Above#:#Background_Corners#))

;    - - - - - - - -
;   - - -Colors - - -
;    - - - - - - - -

; Background Fill Opacity Limits
Background_FillOpacity_Under=2
Background_FillOpacity_Above=255
Background_FillOpacity_Limits=(#Background_FillOpacity#<#Background_FillOpacity_Under#?#Background_FillOpacity_Under#:(#Background_FillOpacity#>#Background_FillOpacity_Above#?#Background_FillOpacity_Above#:#Background_FillOpacity#))

; Profiles Frame Opacity Limits
Profiles_StrokeOpacity_Under=2
Profiles_StrokeOpacity_Above=255
Profiles_StrokeOpacity_Limits=(#Profiles_StrokeOpacity#<#Profiles_StrokeOpacity_Under#?#Profiles_StrokeOpacity_Under#:(#Profiles_StrokeOpacity#>#Profiles_StrokeOpacity_Above#?#Profiles_StrokeOpacity_Above#:#Profiles_StrokeOpacity#))

; Background Frame Opacity Limits
Background_StrokeOpacity_Under=2
Background_StrokeOpacity_Above=255
Background_StrokeOpacity_Limits=(#Background_StrokeOpacity#<#Background_StrokeOpacity_Under#?#Background_StrokeOpacity_Under#:(#Background_StrokeOpacity#>#Background_StrokeOpacity_Above#?#Background_StrokeOpacity_Above#:#Background_StrokeOpacity#))

; Profiles OnHover Opacity Limits
Profiles_OnHoverOpacity_Under=2
Profiles_OnHoverOpacity_Above=255
Profiles_OnHoverOpacity_Limits=(#Profiles_OnHoverOpacity#<#Profiles_OnHoverOpacity_Under#?#Profiles_OnHoverOpacity_Under#:(#Profiles_OnHoverOpacity#>#Profiles_OnHoverOpacity_Above#?#Profiles_OnHoverOpacity_Above#:#Profiles_OnHoverOpacity#))