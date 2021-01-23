# Base64URL 
## Description
Takes a base64 URL and opens it in default web browser.

## Usage
```
base64URL <base64>
```

## Installlation 

### Install GCC

 - [Windows](https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j)

 - MacOS
  ```
  brew install gcc
  ```

 - Linux - You already know :)

### Build
- Open a terminal in the downloaded folder and run `make`. This will build you program into an exicutable file.

### BOOM done

## Install it as a service (MacOS Only)
1. Open up Automator 
2. Create a new Quick Action
3. Change workflow to text
4. Search "Run Shell Script" and add it
5. Paste the following changing DIR to the directory  you build you exicutable
```
#! /bin/sh
cd DIR
./base64URL "$1"
```
