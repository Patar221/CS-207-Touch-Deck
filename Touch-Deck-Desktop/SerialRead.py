import serial
import re
import webbrowser
import subprocess
import keyboard

def openBrwoser(url):
    webbrowser.open(url)

def openFile(path):
    subprocess.call(path)

def sendKey(keys):
  keyboard.send(keys)

def typeText(text):
    keyboard.write(text)

ser = serial.Serial('COM5', 9600)

while True:
    line = ser.readline().decode('utf-8')
    touchDeckCommands = re.findall(r'(?<=touchDeck\()(.*?)(?=\))', line)

    for button in touchDeckCommands:
        match button:
            case '1':
                print(button)
                openBrwoser("https://www.youtube.com/watch?v=dQw4w9WgXcQ")
            case '2':
                openFile(['C:\Program Files (x86)\Steam\steam.exe'])
            case '3':
                print(button)
            case '4':
                print(button)
            case '5':
                print(button)
            case '6':
                print(button)
            case '7':
                typeText('Hello')
            case '8':
                print(button)
            case '9':
                print(button)
            case '10':
                print(button)
            case '11':
                print(button)
            case '12':
                print(button)
            case '13':
                sendKey('shift+F11')
            case '14':
                sendKey('shift+F12')
            case '15':
                print(button)
            case '16':
                print(button)
            case '17':
                print(button)
            case '18':
                print(button)
            case _:
                print("No Command Found")