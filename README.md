# Pente

## About
This program was written for a final project. It is meant to be similar to the game Pente, which is a game where players try to place five pieces in a row and capture each others' pieces. 

## How to Play
Start by downloading the three pente files, as well as the Makefile. 

Next, in order for the game to work properly on your computer, you must change a few lines of the code first. 
- in pente.c, the "windows.h" header must be commented out if you are using a linux or mac os.
- in pente.h, the SCREEN_LENGTH must be set to the appropriate length, depending on your screen. The length can be figured out by counting how many characters wide your desired command terminal is on your screen.

Once those two settings are changed, you can compile using the Makefile, and play the game to your heart's content!

## Credits
I would like to thank my professor, Prof. Mikels, for teaching me C as well as providing the starter code for the game. Some parts of this code were written by her (although most was changed by me). 
