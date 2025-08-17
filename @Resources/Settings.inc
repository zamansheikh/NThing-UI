
;---------- Phy Battery Widget Settings file ----------

;---------- please only change values after the "=" ----------

;---------- else the skin wont work properly ----------

;---------- there is an explanation for every setting ----------

;---------- or you can just change it and see what happens ----------

;---------- most importantly read the comments carefully to understand ---------

;---------- REFRESH THE SKIN AFTER CHANGING ANY SETTING (DUH) ----------


[Variables]

Size=2.0
; Size of the overall skin //// default= 2.0

Thickness=0.94
; the Thickness size of the round percentage circle /// default = 1.00
; IMPORTANT NOTE alter the value only by very small margins (e.g 1.04 - 0.97)
; otherwise it would get too big or too small
; going over "1.2" or under "0.9" would break the skin in some cases


OnlyPercent=0
; 1: will show only the percentage text inside the circle and hides everything else
; 0: adds the second section that shows the lightning bolt when charging and the
; estimated time till battery dies

CircleColorOn=50,100,255
; controls the color of the circle when on AC power or charging

CircleColorOff=240,56,120
; controls the color of the circle when on battery or not charging

BorderColorOn=50,100,255
; controls the color of the circle when on AC power or charging

BorderColorOff=240,56,120
; controls the color of the circle when on battery or not charging
;IMPORTANT if you want to hide the border you can set it the same color
;as circle color during both states (AC power or discharging)
;otherwise use same color in BorderColor on/off to keep it visible at all time

PercentColorOn=255,255,255
; controls the color of the percentage text inside the circle when on AC power
;or charging

PercentColorOff=255,255,255
; controls the color of the percentage text inside the circle when on battery
;or  not charging

BackgroundColor=110, 110, 110, 75
; controls the color of the background Circle (the gray one)
; IMPORTANT NOTE if you want to hide it just read the the comment above this

iconColor=0,0,255,255
; controls the Lightning bolt icon color
; IMPORTANT NOTE you can change the icon by going to the skin folder
; /Resources/Images/bolt.png 
; it needs to be in PNG format and use same name file(bolt.png) otherwise it 
; wont work

timeRemColor=255,255,255,255
; controls the color of the text that shows the time remaining till the battery
; dies
; NOTE the number is taken from windows, the skin doesnt calculate anything
; NOTE@2 sometimes windows takes like 10 seconds till it generates the estimated 
; time so it would show (wait..) on the skin till it gets the number

PercentTextsize=24
;controls the text size of the percentage value inside the circle \\\ default:26

RemTextsize=12
;controls the text size of the remaing battery value inside the circle \\\ 
;default:12

font=Century Gothic
; sets the font of the Percentage Text 
; make sure the font is installed in your system
; and make sure you use the font name of the font (open the font file to get
; the name)

iconsize=36
; controls the size of the lightning bolt icon or wahtever icon is set in the
; images folder

BatRemainingMsg=wait..
; controls the message that appears when the battery remaing time is still 
; being calculated or still not recieved from windows or if your windows
; or battery is broken and you dont have an estimated battery left
; you can leave it blank if you dont want anything shown
