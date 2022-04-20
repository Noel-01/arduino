# -*- coding: utf-8 -*-
"""
Created on Wed Apr 20 23:45:05 2022

@author: Noel
"""

import serial

mot = 0;

serialArduino = serial.Serial("COM7",  9600)


def showMenu():
    print('''******************
* MENU DE OPCIONES *
********************
*                  *
* M >> SERVO       *
* X >> SALIR       *
*                  *
********************\n''')
    
    
    
while True:
        
    showMenu()
        
    option = input('Que opcion desea: ').upper()
         
    if option=='M':
        mot = int(input("Introduce un valor entre 1 y 180: "))    
        print("Se envió el valor de {} para el motor... \n".format(mot))
        cad = str(mot)
        serialArduino.write(cad.encode('ascii'))
    elif option=='X':
        print("Saliendo del sistema...\n")
        break     
    else:
        print("Opcion no valida...\n")

