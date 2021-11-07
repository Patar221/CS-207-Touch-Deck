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
                subprocess.call(['C:\Program Files (x86)\Steam\steam.exe'])
            case '3':
                print(command)
            case '4':
                print(command)
            case '5':
                print(command)
            case '6':
                print(command)
            case '7':
                print(command)
            case '8':
                print(command)
            case '9':
                print(command)
            case '10':
                print(command)
            case '11':
                print(command)
            case '12':
                print(command)
            case '13':
                print(command)
            case '14':
                print(command)
            case '15':
                print(command)
            case '16':
                print(command)
            case '17':
                print(command)
            case '18':
                print(command)
            case _:
                print("No Command Found")