import serial
import re
import webbrowser
import subprocess
import keyboard
import json

# Functions for each command option
def openBrowser(url):
    webbrowser.open(url)

def openFile(path):
    subprocess.call(path)

def sendKey(keys):
    keyboard.send(keys)

def typeText(text):
    keyboard.write(text)

def typeTextAndSend(text):
    keyboard.write(text)
    keyboard.send('enter')

# Open serial connection to Arduino
ser = serial.Serial('COM5', 9600)

# Load JSON config
with open('config.json') as f:
  config = json.load(f)

# Infinite loop to read input from Arduino
while True:
    line = ser.readline().decode('utf-8')
    touchDeckCommands = re.findall(r'(?<=touchDeck\()(.*?)(?=\))', line)

    for button in touchDeckCommands:
        # Load command information from json
        command = config[button]['command']
        arg = config[button]['argument']

        # Call the command loaded from the json file
        eval(command + f"('{arg}')")
