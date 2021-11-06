import serial
import re
import webbrowser
import subprocess

ser = serial.Serial('COM5', 9600)

while True:
    line = ser.readline().decode('utf-8')
    touchDeckCommands = re.findall(r'(?<=touchDeck\()(.*?)(?=\))', line)

    for command in touchDeckCommands:
        match command:
            case '1':
                print(command)
                webbrowser.open("https://www.youtube.com/watch?v=dQw4w9WgXcQ")
            case '2':
                print(command)
                subprocess.call(['C:\Program Files (x86)\Steam\steam.exe'])
            case _:
                print("No Command Found")