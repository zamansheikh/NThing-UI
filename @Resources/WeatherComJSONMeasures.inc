; Weather Measures using OpenWeatherMap API
; This file contains all the weather data measures

; Auto Location Detection (optional)
[MeasureIPLocation]
Measure=WebParser
URL=http://ip-api.com/json/
RegExp=(?siU)"lat":(.*?),"lon":(.*?),"city":"(.*?)","country":"(.*?)"
UpdateRate=#UpdateRate#
DynamicVariables=1
OnConnectErrorAction=[!Log "Failed to get location from IP" Error]

[MeasureLatitude]
Measure=WebParser
URL=[MeasureIPLocation]
StringIndex=1
DynamicVariables=1

[MeasureLongitude]
Measure=WebParser
URL=[MeasureIPLocation]
StringIndex=2
DynamicVariables=1

[MeasureAutoCity]
Measure=WebParser
URL=[MeasureIPLocation]
StringIndex=3
DynamicVariables=1

[MeasureAutoCountry]
Measure=WebParser
URL=[MeasureIPLocation]
StringIndex=4
DynamicVariables=1

; Weather Data from OpenWeatherMap
[MeasureWeatherRSS]
Measure=WebParser
URL=https://api.openweathermap.org/data/2.5/weather?lat=#Latitude#&lon=#Longitude#&appid=#APIKey#&units=#Units#&lang=#Lang#
RegExp=(?siU)"main".*?"temp":(.*?),"feels_like":(.*?),"temp_min":(.*?),"temp_max":(.*?),"pressure":(.*?),"humidity":(.*?).*?"weather".*?"id":(.*?),"main":"(.*?)","description":"(.*?)","icon":"(.*?)".*?"visibility":(.*?).*?"wind".*?"speed":(.*?),"deg":(.*?).*?"name":"(.*?)"
UpdateRate=#UpdateRate#
DynamicVariables=1
OnConnectErrorAction=[!Log "Failed to connect to OpenWeatherMap API. Check your API key and internet connection." Error]

; Current Temperature
[@CurrentTemperature]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=1
DynamicVariables=1

; Feels Like Temperature
[@FeelsLike]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=2
DynamicVariables=1

; Minimum Temperature
[@TempMin]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=3
DynamicVariables=1

; Maximum Temperature
[@TempMax]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=4
DynamicVariables=1

; Pressure
[@Pressure]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=5
DynamicVariables=1

; Humidity
[@Humidity]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=6
DynamicVariables=1

; Weather ID for icon mapping
[@WeatherID]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=7
DynamicVariables=1

; Weather Main Description
[@WeatherMain]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=8
DynamicVariables=1

; Detailed Weather Description
[@CurrentConditions]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=9
DynamicVariables=1

; Weather Icon Code from API
[@WeatherIcon]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=10
DynamicVariables=1

; Visibility
[@Visibility]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=11
DynamicVariables=1

; Wind Speed
[@WindSpeed]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=12
DynamicVariables=1

; Wind Direction
[@WindDirection]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=13
DynamicVariables=1

; Location Name
[@LocationName]
Measure=WebParser
URL=[MeasureWeatherRSS]
StringIndex=14
DynamicVariables=1

; Current Time
[@CurrentObservationTime]
Measure=Time
Format=%H:%M
DynamicVariables=1

; Timezone
[@LocationTimezoneAbbreviation]
Measure=Time
Format=%Z
DynamicVariables=1

; Icon mapping based on weather conditions
[@CurrentIcon]
Measure=Calc
Formula=[@WeatherID]
IfCondition=([@WeatherID] >= 200) && ([@WeatherID] <= 232)
IfTrueAction=[!SetVariable CurrentIconFile "4.png"]
IfCondition2=([@WeatherID] >= 300) && ([@WeatherID] <= 321)
IfTrueAction2=[!SetVariable CurrentIconFile "9.png"]
IfCondition3=([@WeatherID] >= 500) && ([@WeatherID] <= 531)
IfTrueAction3=[!SetVariable CurrentIconFile "11.png"]
IfCondition4=([@WeatherID] >= 600) && ([@WeatherID] <= 622)
IfTrueAction4=[!SetVariable CurrentIconFile "16.png"]
IfCondition5=([@WeatherID] >= 701) && ([@WeatherID] <= 781)
IfTrueAction5=[!SetVariable CurrentIconFile "20.png"]
IfCondition6=[@WeatherID] = 800
IfTrueAction6=[!SetVariable CurrentIconFile "32.png"]
IfCondition7=([@WeatherID] >= 801) && ([@WeatherID] <= 804)
IfTrueAction7=[!SetVariable CurrentIconFile "26.png"]
IfConditionMode=1
DynamicVariables=1
