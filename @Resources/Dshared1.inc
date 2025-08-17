[Rainmeter]
ContextTitle=Edit variables...
ContextAction=["#CONFIGEDITOR#" "#@#Bvariables.inc"]
MiddleMouseUpAction=!Refresh
Group=MD3 Windows

; ===== STYLES

[Long]
Shape=Rectangle 0,65,(#IconSize#*4.5),(#IconSize#*2.5),18 | StrokeWidth 0 

[Long2]
Shape=Rectangle 0,40,(#IconSize#*9.5),(#IconSize#*3.3),18 | StrokeWidth 0 


[Bar]
W=[#CURRENTSECTION#Container:W]
H=[#CURRENTSECTION#Container:H]
Container=#CURRENTSECTION#Container
SolidColor=303038
BarColor=F2201F
BarOrientation=HORIZONTAL
DynamicVariables=1
Flip=0

[Start]
X=9
Y=9

[Next]
X=9
Y=9







