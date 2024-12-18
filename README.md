 Weather App

## Setup Instructions

### Prerequisites
1. Install XcodeGen using Homebrew:
```bash
brew install xcodegen
```

### Installation

Generate the Xcode project:

```bash
xcodegen generate
```
### Configuration
To use the weather functions:

Add your API KEY in the project.yaml:

```yaml
debug:
    WEATHER_API_KEY: "add key"
release:
    WEATHER_API_KEY: "add key"
```

Re-generate the Xcode project:

```bash
xcodegen generate


```
Demo
<img src="https://github.com/ZsomborRajki/weather/blob/main/demo.gif" width="400"/>
<img src="https://github.com/ZsomborRajki/weather/blob/main/screen.png" width="400"/>

```
