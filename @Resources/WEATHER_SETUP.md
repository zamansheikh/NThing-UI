# Weather Widget Setup Instructions

## Overview
The weather widgets have been updated to use OpenWeatherMap API with support for:
- Default location: Mymensingh, Bangladesh
- Automatic location detection (optional)
- Real-time weather data
- Proper icon mapping

## Setup Steps

### 1. Get OpenWeatherMap API Key
1. Visit: https://openweathermap.org/api
2. Sign up for a free account
3. Generate an API key (it may take a few minutes to activate)

### 2. Configure the Weather Widget
1. Open the file: `@Resources\WeatherComJSONVariables.inc`
2. Replace `your_api_key_here` with your actual API key
3. The default location is already set to Mymensingh, Bangladesh

### 3. Location Options

#### Option A: Use Default Location (Mymensingh, Bangladesh)
- No changes needed, it's already configured

#### Option B: Set Custom Location
Edit `WeatherComJSONVariables.inc` and change:
```ini
Latitude=YOUR_LATITUDE
Longitude=YOUR_LONGITUDE
LocationName=Your City, Country
```

#### Option C: Enable Automatic Location Detection
The widget includes IP-based location detection. It will automatically use your current location based on your IP address.

### 4. Units and Language
In `WeatherComJSONVariables.inc`:
- Units: `metric` (Celsius), `imperial` (Fahrenheit), `kelvin`
- Language: `en` (English), `bn` (Bengali), etc.

## Weather Icons
The widget uses the Nothing-style weather icons located in `@Resources\Images\Nothing\`:
- Icons are automatically mapped based on weather conditions
- Supports both day and night variations
- Icons are color-tinted based on theme (light/dark)

## Available Weather Widgets
1. **Weather 1**: Large format with prominent temperature display
2. **Weather 2**: Compact format with circular icon background

Both widgets have light and dark theme variants.

## Features
- Real-time weather data
- Temperature display in Celsius/Fahrenheit
- Weather condition descriptions
- Visual weather icons
- Location display
- Automatic updates every 10 minutes
- Error handling for connection issues

## Troubleshooting
1. **No weather data**: Check your API key and internet connection
2. **Wrong location**: Verify coordinates in the variables file
3. **Missing icons**: Ensure weather icons exist in `@Resources\Images\Nothing\`
4. **Update issues**: Check the update rate setting (default: 10 minutes)

## File Structure
```
@Resources/
├── WeatherComJSONVariables.inc   (API configuration)
├── WeatherComJSONMeasures.inc    (Weather data measures)
├── WVariables.inc                (Display variables)
└── Images/Nothing/               (Weather icons)
    ├── 0.png - 47.png
    └── Weather icon mappings
```
