#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//#include <windows.h> //comment out if on Linux
#include <math.h>
#include "pente.h"


// start screen creates the start screen
int start_screen()
{
   printf("\e[1;1H\e[2J"); //clear the screen and print 7 empty lines
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");

   //the following code adds letters row by row. it adds space, changes the color, prints the letters in the appropriate shape, changes the colors back, and continues. It does this 15 times. 

   // ROW 1
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("pppppppppppppppppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnnn          nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("tttttttttttttttttttt");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 2
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("pppppppppppppppppppp");
   printf("\033[0m");

   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnnnn         nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("tttttttttttttttttttt");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 3
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("pppppppppppppppppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
   
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnnnnn        nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("tttttttttttttttttttt");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 4
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp          ppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeee               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnnnnnn       nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeee               ");
   printf("\033[0m");

   printf("\n");

   // ROW 5
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp          ppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeee               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn nnnn      nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
 
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeee               ");
   printf("\033[0m");

   printf("\n");
   
   // ROW 6
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp          ppppp");
   printf("\033[0m");
   
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeee               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn  nnnn     nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeee               ");
   printf("\033[0m");

   printf("\n");

   // ROW 7
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("pppppppppppppppppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn   nnnn    nnnnn");
   printf("\033[0m");
 
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 8
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("pppppppppppppppppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn    nnnn   nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
   
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 9
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("pppppppppppppppppppp");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn     nnnn  nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
 
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 10
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeee               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn      nnnn nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeee               ");
   printf("\033[0m");

   printf("\n");

   // ROW 11
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeee               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn       nnnnnnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeee               ");
   printf("\033[0m");

   printf("\n");

   // ROW 12
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeee               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn        nnnnnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeee               ");
   printf("\033[0m");

   printf("\n");

   // ROW 13
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn         nnnnnnn");
   printf("\033[0m");

   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 14
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn          nnnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");

   // ROW 15
   for (int i=0; i<((SCREEN_LENGTH-131)/2); i++) //centers row depending on screen length
   {
      printf(" ");
   }

   printf("\033[0;34m");
   printf("ppppp               ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;31m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[1;36m");   
   printf("nnnnn           nnnnn");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;32m");   
   printf("        tttt        ");
   printf("\033[0m");
    
   printf("        ");
   printf("\033[0;33m");   
   printf("eeeeeeeeeeeeeeeeeeee");
   printf("\033[0m");

   printf("\n");



   printf("\n"); //print 15 empty lines to separate logo and player number stuff
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");

   //Let the user press enter before continuing
   char enter[2];

   for (int i=0; i<((SCREEN_LENGTH-11)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }

   printf("Press Enter"); //asks user to press enter
   if (fgets(enter, sizeof(enter), stdin) != NULL) //checks if there was an input, and stores input in enter
   {
      if (strcmp(enter, "\n") == 0) //if only the enter key was pressed, return 0
      {
         return 0;
      }
      else //if something besides enter key was pressed beforehand, return 1
      {
         return 1;
      }
   }
}


// Display the rules and ask for number of players **ADD COMMENTS**
int rules_screen(int str_left)
{
   printf("\e[1;1H\e[2J"); //clear the screen and print 7 empty lines
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");

   //objective
   for (int i=0; i<((SCREEN_LENGTH-9)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("\033[1;36m");
   printf("OBJECTIVE\n"); //print the Objective header
   printf("\033[0m");
   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-97)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("The goal of Pente is to be the first player to either capture five pairs of your opponent's stones,\n");

   for (int i=0; i<((SCREEN_LENGTH-83)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("or to place five of your own stones in a row horizontally, vertically, or diagonally.\n");

   printf("\n"); //print some extra space before the next section
   printf("\n");

   //gameplay
   for (int i=0; i<((SCREEN_LENGTH-9)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("\033[1;36m");
   printf("GAMEPLAY\n"); //print the Gameplay header
   printf("\033[0m");
   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("Players take turns placing one stone of their color on an empty space.\n");

   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-95)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("If, after placing a stone, both ends of a pair of stones (horizontally, vertically, or diagonally)\n");

   for (int i=0; i<((SCREEN_LENGTH-87)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("are closed by the newly placed stone, the closed stones are captured. Captured stones are\n");

   for (int i=0; i<((SCREEN_LENGTH-43)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("displayed as a 'J' and removed from the board.\n");

   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-61)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("Coordinates must be entered in the correct format (row column).\n");

   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-49)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("Enter 'q q' to quit the game (without apostrophes).\n");

   printf("\n"); //print extra space before next section
   printf("\n");

   //winning
   for (int i=0; i<((SCREEN_LENGTH-7)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("\033[1;36m");
   printf("WINNING\n"); //print the Winning header
   printf("\033[0m");
   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-95)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("The player who first fulfills the winning condition (five captures or five in a row) wins the game.\n");

   printf("\n"); //print extra space before next section
   printf("\n");

   //game modes
   for (int i=0; i<((SCREEN_LENGTH-9)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("\033[1;36m");
   printf("GAME MODES\n"); //print the Game Modes header
   printf("\033[0m");
   printf("\n");

   for (int i=0; i<((SCREEN_LENGTH-59)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("To play Single-Player against the computer, enter 1 player.\n");

   for (int i=0; i<((SCREEN_LENGTH-57)/2); i++) //centers words depending on screen length
   {
      printf(" ");
   }
   printf("Otherwise, enter the desired amount of players (up to 4).\n");

   printf("\n"); //print extra space before the next section
   printf("\n");

   //player number input
   int player_number = 0; //get a number of players from the user

   for (int i=0; i<((SCREEN_LENGTH-35)/2); i++) //centers user input depending on screen length
   {
      printf(" ");
   }

   if (str_left == 1) //if there is any characters left in stdin, store them in tmp so they don't mess up other inputs
   {
      char tmp;
      while ((tmp = getchar()) != EOF && tmp != '\n') { }
   }

   printf("Please Enter a Number of Players: "); //asks for a number of players and scans the number into player_number
   scanf(" %d", &player_number);

   while ((player_number < 1) || (player_number > 4)) //make sure number of players is between 1 and 4
   {
      char tmp;
      while ((tmp = getchar()) != EOF && tmp != '\n') { } //clear any excess characters from the previous input

      player_number = 0;
      for (int i=0; i<((SCREEN_LENGTH-35)/2); i++) //centers user input depending on screen length
      {
         printf(" ");
      }
      printf("Please Enter a Number of Players: "); //ask again 
      scanf(" %d", &player_number);
   }

   return player_number;
}


// Check if there if five in a row horizontally
cell_data_t checkHorizon(int board_size, cell_data_t board[board_size][board_size])
{
   cell_data_t winner = NOT_PLAYED;

   for (int i=0; i<board_size; i++)
   {
      for (int j=0; j<(board_size-4); j++) //check each space on the board besides the ends, where there can't be 5 in a row
      {
         if ((board[i][j] != NOT_PLAYED) && (board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]) && (board[i][j] == board[i][j+3]) && (board[i][j] == board[i][j+4]))
         {
            winner = board[i][j]; //make the winner the player with 5 in a row

            board[i][j] = PENTE_CHAIN; //make each of the 5 spaces a C to indicate they won
            board[i][j+1] = PENTE_CHAIN;
            board[i][j+2] = PENTE_CHAIN;
            board[i][j+3] = PENTE_CHAIN;
            board[i][j+4] = PENTE_CHAIN;

            return winner; //return the winner
         }
      }
   }

   return NOT_PLAYED; //return nothing if no one won
}


//check if anyone got 5 in a row vertically
cell_data_t checkVert(int board_size, cell_data_t board[board_size][board_size])
{
   cell_data_t winner = NOT_PLAYED;

   for (int i=0; i<(board_size-4); i++) //check every spot on the board except the bottom, where no one can have 5 in a row
   {
      for (int j=0; j<board_size; j++)
      {
         if ((board[i][j] != NOT_PLAYED) && (board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]) && (board[i][j] == board[i+4][j]))
         {
            winner = board[i][j]; //make the person with 5 in a row the winner

            board[i][j] = PENTE_CHAIN; //make each of the 5 spaces a C to indicate winning
            board[i+1][j] = PENTE_CHAIN;
            board[i+2][j] = PENTE_CHAIN;
            board[i+3][j] = PENTE_CHAIN;
            board[i+4][j] = PENTE_CHAIN;

            
            return winner; //return the winner
         }
      }
   }
   return NOT_PLAYED; //return nothing if there is no winner
}


// check if there is 5 in a row diagonally 
cell_data_t checkDiagUp(int board_size, cell_data_t board[board_size][board_size])
{
   cell_data_t winner = NOT_PLAYED;

   for (int i=4; i<(board_size); i++)
   {
      for (int j=0; j<(board_size-4); j++) //check the whole board except the top and side
      {
         if ((board[i][j] != NOT_PLAYED) && (board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]) && (board[i][j] == board[i-4][j+4]))
         {
            winner = board[i][j]; //make the person with 5 in a row the winner

            board[i][j] = PENTE_CHAIN; //set each of the 5 spaces to a C to indicate winning
            board[i-1][j+1] = PENTE_CHAIN;
            board[i-2][j+2] = PENTE_CHAIN;
            board[i-3][j+3] = PENTE_CHAIN;
            board[i-4][j+4] = PENTE_CHAIN;
            
            return winner; //return the winner
         }
      }
   }
   return NOT_PLAYED; //return nothing if no one won
}


// check if anyone won diagonally downward
cell_data_t checkDiagDown(int board_size, cell_data_t board[board_size][board_size])
{
   cell_data_t winner = NOT_PLAYED;

   for (int i=0; i<(board_size-4); i++)
   {
      for (int j=0; j<(board_size-4); j++) //check each space except the bottom and side
      {
         if ((board[i][j] != NOT_PLAYED) && (board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]) && (board[i][j] == board[i+4][j+4]))
         {
            winner = board[i][j]; //set the winner to the person with 5 in a row

            board[i][j] = PENTE_CHAIN; //make each of the spaces a C to indicate winning
            board[i+1][j+1] = PENTE_CHAIN;
            board[i+2][j+2] = PENTE_CHAIN;
            board[i+3][j+3] = PENTE_CHAIN;
            board[i+4][j+4] = PENTE_CHAIN;
            
            return winner; //return the winner
         }
      }
   }
   return NOT_PLAYED; //return nothing if no one won
}


// Check if anyone got a capture horizontally
cell_data_t checkCaptHorizon(int board_size, cell_data_t board[board_size][board_size], int i, int j)
{
   cell_data_t winner = NOT_PLAYED;

   /*check for a capture from the left end*/
   if (j<(board_size-2)) //don't check the right end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i][j+1] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i][j+1] != JUST_CAPTURED) && (board[i][j] != board[i][j+1]) && (board[i][j+1] == board[i][j+2]) && (board[i][j] == board[i][j+3]))
      {
         winner = board[i][j]; //make the winner the player with a capture

         board[i][j+1] = JUST_CAPTURED; //make each of the middle spaces a J to indicate they were captured
         board[i][j+2] = JUST_CAPTURED;

         return winner; //return the winner
      }
   }

   /*check for a capture from the right end*/
   if (j>2) //don't check the left end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i][j-1] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i][j-1] != JUST_CAPTURED) && (board[i][j] != board[i][j-1]) && (board[i][j-1] == board[i][j-2]) && (board[i][j] == board[i][j-3]))
      {
         winner = board[i][j]; //make the winner the player with a capture

         board[i][j-1] = JUST_CAPTURED; //make each of the middle spaces a J to indicate they were captured
         board[i][j-2] = JUST_CAPTURED;

         return winner; //return the winner
      }
   }

   return NOT_PLAYED; //return nothing if no one won
}


//check if anyone got a capture vertically
cell_data_t checkCaptVert(int board_size, cell_data_t board[board_size][board_size], int i, int j)
{
   cell_data_t winner = NOT_PLAYED;

   /*check for a capture from the top*/
   if (i<(board_size-2)) //don't check the bottom end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i+1][j] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i+1][j] != JUST_CAPTURED) && (board[i][j] != board[i+1][j]) && (board[i+1][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]))
      {
         winner = board[i][j]; //make the person with a capture the winner

         board[i+1][j] = JUST_CAPTURED; //make each of the 3 spaces a J to indicate a capture
         board[i+2][j] = JUST_CAPTURED;
            
         return winner; //return the winner
      }
   }

   /*check for a capture from the bottom*/
   if (i>2) //don't check the top end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i-1][j] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i-1][j] != JUST_CAPTURED) && (board[i][j] != board[i-1][j]) && (board[i-1][j] == board[i-2][j]) && (board[i][j] == board[i-3][j]))
      {
         winner = board[i][j]; //make the person with a capture the winner

         board[i-1][j] = JUST_CAPTURED; //make each of the 3 spaces a J to indicate a capture
         board[i-2][j] = JUST_CAPTURED;
            
         return winner; //return the winner
      }
   }

   return NOT_PLAYED; //return nothing if there is no winner
}


// check if anyone got a capture diagonally 
cell_data_t checkCaptDiagUp(int board_size, cell_data_t board[board_size][board_size], int i, int j)
{
   cell_data_t winner = NOT_PLAYED;

   /*check for a capture from the bottom left*/
   if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i-1][j+1] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i-1][j+1] != JUST_CAPTURED) && (board[i][j] != board[i-1][j+1]) && (board[i-1][j+1] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]))
      {
         winner = board[i][j]; //make the person with a capture the winner

         board[i-1][j+1] = JUST_CAPTURED; //set each of the 3 spaces a J to indicate a capture
         board[i-2][j+2] = JUST_CAPTURED;
            
         return winner; //return the winner
      }
   }

   /*check for a capture from the top right*/
   if ((i<(board_size-2)) && (j>2)) //don't check the bottom left end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i+1][j-1] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i+1][j-1] != JUST_CAPTURED) && (board[i][j] != board[i+1][j-1]) && (board[i+1][j-1] == board[i+2][j-2]) && (board[i][j] == board[i+3][j-3]))
      {
         winner = board[i][j]; //make the person with a capture the winner

         board[i+1][j-1] = JUST_CAPTURED; //set each of the 3 spaces a J to indicate a capture
         board[i+2][j-2] = JUST_CAPTURED;
            
         return winner; //return the winner
      }
   }

   return NOT_PLAYED; //return nothing if no one won
}


// check if anyone got a capture diagonally downward
cell_data_t checkCaptDiagDown(int board_size, cell_data_t board[board_size][board_size], int i, int j)
{
   cell_data_t winner = NOT_PLAYED;

   /*check for a capture from the top left*/
   if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i+1][j+1] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i+1][j+1] != JUST_CAPTURED) && (board[i][j] != board[i+1][j+1]) && (board[i+1][j+1] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]))
      {
         winner = board[i][j]; //set the winner to the person with a capture

         board[i+1][j+1] = JUST_CAPTURED; //make each of the spaces a J to indicate a capture
         board[i+2][j+2] = JUST_CAPTURED; 
            
         return winner; //return the winner
      }
   }

   /*check for a capture from the bottom right*/
   if ((i>2) && (j>2)) //don't check the top left end of the board
   {
      if ((board[i][j] != NOT_PLAYED) && (board[i-1][j-1] != NOT_PLAYED) && (board[i][j] != JUST_CAPTURED) && (board[i-1][j-1] != JUST_CAPTURED) && (board[i][j] != board[i-1][j-1]) && (board[i-1][j-1] == board[i-2][j-2]) && (board[i][j] == board[i-3][j-3]))
      {
         winner = board[i][j]; //set the winner to the person with a capture

         board[i-1][j-1] = JUST_CAPTURED; //make each of the spaces a J to indicate a capture
         board[i-2][j-2] = JUST_CAPTURED;
            
         return winner; //return the winner
      }
   }

   return NOT_PLAYED; //return nothing if no one won
}


// Evaluate gives a score to different board states
int Evaluate(int board_size, cell_data_t board[board_size][board_size])
{
   int evaluation = 0; //a variable for the evaluation score

   int fiverow_pts = 10000; //variables for the maximizer (AI)
   int fiveblock_pts = 10000;
   int capt_pts = 700;
   int fourrow_pts = 500;
   int fourblock_pts = 500;
   int threerow_pts = 400;
   int next_to_pts = 20;
   int middle_pts = 1;

   int min_fiverow_pts = 10000; //variables for the minimizer (Player)
   int min_fiveblock_pts = 10000;
   int min_capt_pts = 700;
   int min_fourrow_pts = 500;
   int min_fourblock_pts = 500;
   int min_threerow_pts = 400;
   int min_next_to_pts = 20;
   int min_middle_pts = 1;

   for (int i=0; i<board_size; i++) //loop through every spot on the board
   {
      for (int j=0; j<board_size; j++)
      {
         if (board[i][j] == PLAYER1) //check any AI spaces
         {
            //if space is next to an AI space
            if (i<(board_size-1)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]))
               {
                  evaluation += next_to_pts;
               }
            }
            if (j<(board_size-1)) //don't check the right end of the board
            {
               if (board[i][j] == board[i][j+1])
               {
                  evaluation += next_to_pts;
               }
            }
            if ((i<(board_size-1)) && (j<(board_size-1))) //don't check the bottom right end of the board
            {
               if (board[i][j] == board[i+1][j+1])
               {
                  evaluation += next_to_pts;
               }
            }
            if ((i<(board_size-1)) && (j>1)) //don't check the bottom left end of the board
            {
               if (board[i][j] == board[i+1][j-1])
               {
                  evaluation += next_to_pts;
               }
            }
            if ((i>1) && (j<(board_size-1))) //don't check the top right end of the board
            {
               if (board[i][j] == board[i-1][j+1])
               {
                  evaluation += next_to_pts;
               }
            }
            if ((i>1) && (j>1)) //don't check the top left end of the board
            {
               if (board[i][j] == board[i-1][j-1])
               {
                  evaluation += next_to_pts;
               }
            }
            if (i>1) //don't check the top end of the board
            {
               if (board[i][j] == board[i-1][j])
               {
                  evaluation += next_to_pts;
               }
            }
            if (j>1) //don't check the left end of the board
            {
               if (board[i][j] == board[i][j-1])
               {
                  evaluation += next_to_pts;
               }
            }

            //if there are 5 in a row
            if (j<(board_size-3)) //don't check the right end of the board
            {
               if ((board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]) && (board[i][j] == board[i][j+3]) && (board[i][j] == board[i][j+4]))
               {
                  evaluation += fiverow_pts;
               }
            }
            if (i<(board_size-3)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]) && (board[i][j] == board[i+4][j]))
               {
                  evaluation += fiverow_pts;
               }
            }
            if ((i>3) && (j<(board_size-3))) //don't check the top right end of the board
            {
               if ((board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]) && (board[i][j] == board[i-4][j+4]))
               {
                  evaluation += fiverow_pts;
               }
            }
            if ((i<(board_size-3)) && (j<(board_size-3))) //don't check the bottom right end of the board
            {
               if ((board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]) && (board[i][j] == board[i+4][j+4]))
               {
                  evaluation += fiverow_pts;
               }
            }

            //if AI blocks 5 in a row
            if (j<(board_size-3)) //don't check the right end of the board, check for xoooo
            {
               if ((board[i][j+1] == PLAYER2) && (board[i][j+2] == PLAYER2) && (board[i][j+3] == PLAYER2) && (board[i][j+4] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if (j>3) //don't check the left end of the board, check for oooox
            {
               if ((board[i][j-1] == PLAYER2) && (board[i][j-2] == PLAYER2) && (board[i][j-3] == PLAYER2) && (board[i][j-4] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((j<(board_size-2)) && (j>0)) // check for oxooo
            {
               if ((board[i][j-1] == PLAYER2) && (board[i][j+1] == PLAYER2) && (board[i][j+2] == PLAYER2) && (board[i][j+3] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((j<board_size) && (j>2)) // check for oooxo
            {
               if ((board[i][j-3] == PLAYER2) && (board[i][j-2] == PLAYER2) && (board[i][j-1] == PLAYER2) && (board[i][j+1] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((j<(board_size-1)) && (j>1)) //check for ooxoo
            {
               if ((board[i][j-2] == PLAYER2) && (board[i][j-1] == PLAYER2) && (board[i][j+1] == PLAYER2) && (board[i][j+2] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if (i<(board_size-3)) //don't check the bottom end of the board, check for xoooo (vertical, left side is top)
            {
               if ((board[i+1][j] == PLAYER2) && (board[i+2][j] == PLAYER2) && (board[i+3][j] == PLAYER2) && (board[i+4][j] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if (i>3) //don't check the top end of the board, check for oooox (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER2) && (board[i-2][j] == PLAYER2) && (board[i-3][j] == PLAYER2) && (board[i-4][j] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-2)) && (i>0)) // check for oxooo (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER2) && (board[i+1][j] == PLAYER2) && (board[i+2][j] == PLAYER2) && (board[i+3][j] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<board_size) && (i>2)) // check for oooxo (vertical, left side is top)
            {
               if ((board[i-3][j] == PLAYER2) && (board[i-2][j] == PLAYER2) && (board[i-1][j] == PLAYER2) && (board[i+1][j] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>1)) //check for ooxoo (vertical, left side is top)
            {
               if ((board[i-2][j] == PLAYER2) && (board[i-1][j] == PLAYER2) && (board[i+1][j] == PLAYER2) && (board[i+2][j] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i>3) && (j<(board_size-3))) //don't check the top right end of the board, check for xoooo
            {
               if ((board[i-1][j+1] == PLAYER2) && (board[i-2][j+2] == PLAYER2) && (board[i-3][j+3] == PLAYER2) && (board[i-4][j+4] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-3)) && (j>3)) //don't check the bottom left end of the board, check for oooox
            {
               if ((board[i+1][j-1] == PLAYER2) && (board[i+2][j-2] == PLAYER2) && (board[i+3][j-3] == PLAYER2) && (board[i+4][j-4] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i>2) && (i<board_size) && (j<(board_size-2)) && (j>0)) // check for oxooo
            {
               if ((board[i+1][j-1] == PLAYER2) && (board[i-1][j+1] == PLAYER2) && (board[i-2][j+2] == PLAYER2) && (board[i-3][j+3] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-2)) && (i>0) && (j<board_size) && (j>2)) //check for oooxo
            {
               if ((board[i+3][j-3] == PLAYER2) && (board[i+2][j-2] == PLAYER2) && (board[i+1][j-1] == PLAYER2) && (board[i-1][j+1] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>1) && (j<(board_size-1)) && (j>1)) // check for ooxoo
            {
               if ((board[i+2][j-2] == PLAYER2) && (board[i+1][j-1] == PLAYER2) && (board[i-1][j+1] == PLAYER2) && (board[i-2][j+3] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-3)) && (j<(board_size-3))) //don't check the bottom right end of the board, check for xoooo
            {
               if ((board[i+1][j+1] == PLAYER2) && (board[i+2][j+2] == PLAYER2) && (board[i+3][j+3] == PLAYER2) && (board[i+4][j+4] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i>3) && (j>3)) //don't check the top left end of the board, check for oooox
            {
               if ((board[i-1][j-1] == PLAYER2) && (board[i-2][j-2] == PLAYER2) && (board[i-3][j-3] == PLAYER2) && (board[i-4][j-4] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-2)) && (i>0) && (j<(board_size-2)) && (j>0)) // check for oxooo
            {
               if ((board[i-1][j-1] == PLAYER2) && (board[i+1][j+1] == PLAYER2) && (board[i+2][j+2] == PLAYER2) && (board[i+3][j+3] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<board_size) && (i>2) && (j<board_size) && (j>2)) // check for oooxo
            {
               if ((board[i-3][j-3] == PLAYER2) && (board[i-2][j-2] == PLAYER2) && (board[i-1][j-1] == PLAYER2) && (board[i+1][j+1] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>1) && (j<(board_size-1)) && (j>1)) // check for ooxoo
            {
               if ((board[i-2][j-2] == PLAYER2) && (board[i-1][j-1] == PLAYER2) && (board[i+1][j+1] == PLAYER2) && (board[i+2][j+2] == PLAYER2))
               {
                  evaluation += fiveblock_pts;
               }
            }

            //if AI blocks 4 in a row
            if (j<(board_size-2)) //don't check the right end of the board, check for xooo
            {
               if ((board[i][j+1] == PLAYER2) && (board[i][j+2] == PLAYER2) && (board[i][j+3] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if (j>2) //don't check the left end of the board, check for ooox
            {
               if ((board[i][j-1] == PLAYER2) && (board[i][j-2] == PLAYER2) && (board[i][j-3] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((j>0) && (j<(board_size-1))) //check for oxoo
            {
               if ((board[i][j-1] == PLAYER2) && (board[i][j+1] == PLAYER2) && (board[i][j+2] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((j>1) && (j<board_size)) //check for ooxo
            {
               if ((board[i][j-2] == PLAYER2) && (board[i][j-1] == PLAYER2) && (board[i][j+1] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if (i<(board_size-2)) //don't check the bottom end of the board, check for xooo (vertical, left side is top)
            {
               if ((board[i+1][j] == PLAYER2) && (board[i+2][j] == PLAYER2) && (board[i+3][j] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if (i>2) //don't check the top end of the board, check for ooox (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER2) && (board[i-2][j] == PLAYER2) && (board[i-3][j] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i>0) && (i<(board_size-1))) //check for oxoo (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER2) && (board[i+1][j] == PLAYER2) && (board[i+2][j] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i>1) && (i<board_size)) //check for ooxo (vertical, left side is top)
            {
               if ((board[i-2][j] == PLAYER2) && (board[i-1][j] == PLAYER2) && (board[i+1][j] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board, check for xooo
            {
               if ((board[i-1][j+1] == PLAYER2) && (board[i-2][j+2] == PLAYER2) && (board[i-3][j+3] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i<(board_size-2)) && (j>2)) //don't check the bottom left end of the board, check for ooox
            {
               if ((board[i+1][j-1] == PLAYER2) && (board[i+2][j-2] == PLAYER2) && (board[i+3][j-3] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i>1) && (i<board_size) && (j<(board_size-1)) && (j>0)) // check for oxoo
            {
               if ((board[i+1][j-1] == PLAYER2) && (board[i-1][j+1] == PLAYER2) && (board[i-2][j+2] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>0) && (j<board_size) && (j>1)) // check for ooxo
            {
               if ((board[i+2][j-2] == PLAYER2) && (board[i+1][j-1] == PLAYER2) && (board[i-1][j+1] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board, check for xooo
            {
               if ((board[i+1][j+1] == PLAYER2) && (board[i+2][j+2] == PLAYER2) && (board[i+3][j+3] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i>2) && (j>2)) //don't check the top left end of the board, check for ooox
            {
               if ((board[i-1][j-1] == PLAYER2) && (board[i-2][j-2] == PLAYER2) && (board[i-3][j-3] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i>0) && (i<(board_size-1)) && (j<board_size) && (j>1)) // check for oxoo
            {
               if ((board[i-1][j-1] == PLAYER2) && (board[i+1][j+1] == PLAYER2) && (board[i+2][j+2] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }
            if ((i<board_size) && (i>1) && (j<board_size) && (j>1)) // check for ooxo
            {
               if ((board[i-2][j-2] == PLAYER2) && (board[i-1][j-1] == PLAYER2) && (board[i+1][j+1] == PLAYER2))
               {
                  evaluation += fourblock_pts;
               }
            }

            //if space is close to the middle
            if ((abs((board_size/2)-i)<=4) || (abs((board_size/2)-j)<=4)) //if within four spaces of the middle
            {
               evaluation += middle_pts;
            }

            //if space is a capture
            if (j<(board_size-2)) //don't check the right end of the board
            {
               if ((board[i][j+1] != NOT_PLAYED) && (board[i][j+1] != JUST_CAPTURED) && (board[i][j] != board[i][j+1]) && (board[i][j+1] == board[i][j+2]) && (board[i][j] == board[i][j+3]))
               {
                  evaluation += capt_pts;
               }
            }
            if (j>2) //don't check the left end of the board
            {
               if ((board[i][j-1] != NOT_PLAYED) && (board[i][j-1] != JUST_CAPTURED) && (board[i][j] != board[i][j-1]) && (board[i][j-1] == board[i][j-2]) && (board[i][j] == board[i][j-3]))
               {
                  evaluation += capt_pts;
               }
            }
            if (i<(board_size-2)) //don't check the bottom end of the board
            {
               if ((board[i+1][j] != NOT_PLAYED) && (board[i+1][j] != JUST_CAPTURED) && (board[i][j] != board[i+1][j]) && (board[i+1][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]))
               {
                  evaluation += capt_pts;
               }
            }
            if (i>2) //don't check the top end of the board
            {
               if ((board[i-1][j] != NOT_PLAYED) && (board[i-1][j] != JUST_CAPTURED) && (board[i][j] != board[i-1][j]) && (board[i-1][j] == board[i-2][j]) && (board[i][j] == board[i-3][j]))
               {
                  evaluation += capt_pts;
               }
            }
            if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board
            {
               if ((board[i-1][j+1] != NOT_PLAYED) && (board[i-1][j+1] != JUST_CAPTURED) && (board[i][j] != board[i-1][j+1]) && (board[i-1][j+1] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]))
               {
                  evaluation += capt_pts;
               }
            }
            if ((i<(board_size-2)) && (j>2)) //don't check the bottom left end of the board
            {
               if ((board[i+1][j-1] != NOT_PLAYED) && (board[i+1][j-1] != JUST_CAPTURED) && (board[i][j] != board[i+1][j-1]) && (board[i+1][j-1] == board[i+2][j-2]) && (board[i][j] == board[i+3][j-3]))
               {
                  evaluation += capt_pts;
               }
            }
            if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board
            {
               if ((board[i+1][j+1] != NOT_PLAYED) && (board[i+1][j+1] != JUST_CAPTURED) && (board[i][j] != board[i+1][j+1]) && (board[i+1][j+1] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]))
               {
                  evaluation += capt_pts;
               }
            }
            if ((i>2) && (j>2)) //don't check the top left end of the board
            {
               if ((board[i-1][j-1] != NOT_PLAYED) && (board[i-1][j-1] != JUST_CAPTURED) && (board[i][j] != board[i-1][j-1]) && (board[i-1][j-1] == board[i-2][j-2]) && (board[i][j] == board[i-3][j-3]))
               {
                  evaluation += capt_pts;
               }
            }

            //if space is three in a row
            if (j<(board_size-1)) //don't check the right end of the board
            {
               if ((board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]))
               {
                  evaluation += threerow_pts;
               }
            }
            if (i<(board_size-1)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]))
               {
                  evaluation += threerow_pts;
               }
            }
            if ((i>1) && (j<(board_size-1))) //don't check the top right end of the board
            {
               if ((board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]))
               {
                  evaluation += threerow_pts;
               }
            }
            if ((i<(board_size-1)) && (j<(board_size-1))) //don't check the bottom right end of the board
            {
               if ((board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]))
               {
                  evaluation += threerow_pts;
               }
            }

            //if space is four in a row
            if (j<(board_size-2)) //don't check the right end of the board
            {
               if ((board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]) && (board[i][j] == board[i][j+3]))
               {
                  evaluation += fourrow_pts;
               }
            }
            if (i<(board_size-2)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]))
               {
                  evaluation += fourrow_pts;
               }
            }
            if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board
            {
               if ((board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]))
               {
                  evaluation += fourrow_pts;
               }
            }
            if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board
            {
               if ((board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]))
               {
                  evaluation += fourrow_pts;
               }
            }
         }

         if (board[i][j] == PLAYER2) //check the space if it belongs to the player
         {
            //if space is next to a Player space
            if (i<(board_size-1)) //don't check the bottom end of the board
            {
               if (board[i][j] == board[i+1][j])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if (j<(board_size-1)) //don't check the right end of the board
            {
               if (board[i][j] == board[i][j+1])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if ((i<(board_size-1)) && (j<(board_size-1))) //don't check the bottom right end of the board
            {
               if (board[i][j] == board[i+1][j+1])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if ((i<(board_size-1)) && (j>1)) //don't check the bottom left end of the board
            {
               if (board[i][j] == board[i+1][j-1])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if ((i>1) && (j<(board_size-1))) //don't check the top right end of the board
            {
               if (board[i][j] == board[i-1][j+1])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if ((i>1) && (j>1)) //don't check the top left end of the board
            {
               if (board[i][j] == board[i-1][j-1])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if (i>1) //don't check the top end of the board
            {
               if (board[i][j] == board[i-1][j])
               {
                  evaluation -= min_next_to_pts;
               }
            }
            if (j>1) //don't check the left end of the board
            {
               if (board[i][j] == board[i][j-1])
               {
                  evaluation -= min_next_to_pts;
               }
            }

            //if there are 5 in a row
            if (j<(board_size-3)) //don't check the right end of the board
            {
               if ((board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]) && (board[i][j] == board[i][j+3]) && (board[i][j] == board[i][j+4]))
               {
                  evaluation -= min_fiverow_pts;
               }
            }
            if (i<(board_size-3)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]) && (board[i][j] == board[i+4][j]))
               {
                  evaluation -= min_fiverow_pts;
               }
            }
            if ((i>3) && (j<(board_size-3))) //don't check the top right end of the board
            {
               if ((board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]) && (board[i][j] == board[i-4][j+4]))
               {
                  evaluation -= min_fiverow_pts;
               }
            }
            if ((i<(board_size-3)) && (j<(board_size-3))) //don't check the bottom right end of the board
            {
               if ((board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]) && (board[i][j] == board[i+4][j+4]))
               {
                  evaluation -= min_fiverow_pts;
               }
            }

            //if Player blocks 5 in a row
            if (j<(board_size-3)) //don't check the right end of the board, check for xoooo
            {
               if ((board[i][j+1] == PLAYER1) && (board[i][j+2] == PLAYER1) && (board[i][j+3] == PLAYER1) && (board[i][j+4] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if (j>3) //don't check the left end of the board, check for oooox
            {
               if ((board[i][j-1] == PLAYER1) && (board[i][j-2] == PLAYER1) && (board[i][j-3] == PLAYER1) && (board[i][j-4] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((j<(board_size-2)) && (j>0)) // check for oxooo
            {
               if ((board[i][j-1] == PLAYER1) && (board[i][j+1] == PLAYER1) && (board[i][j+2] == PLAYER1) && (board[i][j+3] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((j<board_size) && (j>2)) // check for oooxo
            {
               if ((board[i][j-3] == PLAYER1) && (board[i][j-2] == PLAYER1) && (board[i][j-1] == PLAYER1) && (board[i][j+1] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((j<(board_size-1)) && (j>1)) //check for ooxoo
            {
               if ((board[i][j-2] == PLAYER1) && (board[i][j-1] == PLAYER1) && (board[i][j+1] == PLAYER1) && (board[i][j+2] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if (i<(board_size-3)) //don't check the bottom end of the board, check for xoooo (vertical, left side is top)
            {
               if ((board[i+1][j] == PLAYER1) && (board[i+2][j] == PLAYER1) && (board[i+3][j] == PLAYER1) && (board[i+4][j] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if (i>3) //don't check the top end of the board, check for oooox (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER1) && (board[i-2][j] == PLAYER1) && (board[i-3][j] == PLAYER1) && (board[i-4][j] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-2)) && (i>0)) // check for oxooo (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER1) && (board[i+1][j] == PLAYER1) && (board[i+2][j] == PLAYER1) && (board[i+3][j] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<board_size) && (i>2)) // check for oooxo (vertical, left side is top)
            {
               if ((board[i-3][j] == PLAYER1) && (board[i-2][j] == PLAYER1) && (board[i-1][j] == PLAYER1) && (board[i+1][j] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>1)) //check for ooxoo (vertical, left side is top)
            {
               if ((board[i-2][j] == PLAYER1) && (board[i-1][j] == PLAYER1) && (board[i+1][j] == PLAYER1) && (board[i+2][j] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i>3) && (j<(board_size-3))) //don't check the top right end of the board, check for xoooo
            {
               if ((board[i-1][j+1] == PLAYER1) && (board[i-2][j+2] == PLAYER1) && (board[i-3][j+3] == PLAYER1) && (board[i-4][j+4] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-3)) && (j>3)) //don't check the bottom left end of the board, check for oooox
            {
               if ((board[i+1][j-1] == PLAYER1) && (board[i+2][j-2] == PLAYER1) && (board[i+3][j-3] == PLAYER1) && (board[i+4][j-4] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i>2) && (i<board_size) && (j<(board_size-2)) && (j>0)) // check for oxooo
            {
               if ((board[i+1][j-1] == PLAYER1) && (board[i-1][j+1] == PLAYER1) && (board[i-2][j+2] == PLAYER1) && (board[i-3][j+3] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-2)) && (i>0) && (j<board_size) && (j>2)) //check for oooxo
            {
               if ((board[i+3][j-3] == PLAYER1) && (board[i+2][j-2] == PLAYER1) && (board[i+1][j-1] == PLAYER1) && (board[i-1][j+1] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>1) && (j<(board_size-1)) && (j>1)) // check for ooxoo
            {
               if ((board[i+2][j-2] == PLAYER1) && (board[i+1][j-1] == PLAYER1) && (board[i-1][j+1] == PLAYER1) && (board[i-2][j+3] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-3)) && (j<(board_size-3))) //don't check the bottom right end of the board, check for xoooo
            {
               if ((board[i+1][j+1] == PLAYER1) && (board[i+2][j+2] == PLAYER1) && (board[i+3][j+3] == PLAYER1) && (board[i+4][j+4] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i>3) && (j>3)) //don't check the top left end of the board, check for oooox
            {
               if ((board[i-1][j-1] == PLAYER1) && (board[i-2][j-2] == PLAYER1) && (board[i-3][j-3] == PLAYER1) && (board[i-4][j-4] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-2)) && (i>0) && (j<(board_size-2)) && (j>0)) // check for oxooo
            {
               if ((board[i-1][j-1] == PLAYER1) && (board[i+1][j+1] == PLAYER1) && (board[i+2][j+2] == PLAYER1) && (board[i+3][j+3] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<board_size) && (i>2) && (j<board_size) && (j>2)) // check for oooxo
            {
               if ((board[i-3][j-3] == PLAYER1) && (board[i-2][j-2] == PLAYER1) && (board[i-1][j-1] == PLAYER1) && (board[i+1][j+1] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>1) && (j<(board_size-1)) && (j>1)) // check for ooxoo
            {
               if ((board[i-2][j-2] == PLAYER1) && (board[i-1][j-1] == PLAYER1) && (board[i+1][j+1] == PLAYER1) && (board[i+2][j+2] == PLAYER1))
               {
                  evaluation -= min_fiveblock_pts;
               }
            }

            //if Player blocks 4 in a row
            if (j<(board_size-2)) //don't check the right end of the board, check for xooo
            {
               if ((board[i][j+1] == PLAYER1) && (board[i][j+2] == PLAYER1) && (board[i][j+3] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if (j>2) //don't check the left end of the board, check for ooox
            {
               if ((board[i][j-1] == PLAYER1) && (board[i][j-2] == PLAYER1) && (board[i][j-3] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((j>0) && (j<(board_size-1))) //check for oxoo
            {
               if ((board[i][j-1] == PLAYER1) && (board[i][j+1] == PLAYER1) && (board[i][j+2] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((j>1) && (j<board_size)) //check for ooxo
            {
               if ((board[i][j-2] == PLAYER1) && (board[i][j-1] == PLAYER1) && (board[i][j+1] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if (i<(board_size-2)) //don't check the bottom end of the board, check for xooo (vertical, left side is top)
            {
               if ((board[i+1][j] == PLAYER1) && (board[i+2][j] == PLAYER1) && (board[i+3][j] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if (i>2) //don't check the top end of the board, check for ooox (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER1) && (board[i-2][j] == PLAYER1) && (board[i-3][j] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i>0) && (i<(board_size-1))) //check for oxoo (vertical, left side is top)
            {
               if ((board[i-1][j] == PLAYER1) && (board[i+1][j] == PLAYER1) && (board[i+2][j] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i>1) && (i<board_size)) //check for ooxo (vertical, left side is top)
            {
               if ((board[i-2][j] == PLAYER1) && (board[i-1][j] == PLAYER1) && (board[i+1][j] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board, check for xooo
            {
               if ((board[i-1][j+1] == PLAYER1) && (board[i-2][j+2] == PLAYER1) && (board[i-3][j+3] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i<(board_size-2)) && (j>2)) //don't check the bottom left end of the board, check for ooox
            {
               if ((board[i+1][j-1] == PLAYER1) && (board[i+2][j-2] == PLAYER1) && (board[i+3][j-3] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i>1) && (i<board_size) && (j<(board_size-1)) && (j>0)) // check for oxoo
            {
               if ((board[i+1][j-1] == PLAYER1) && (board[i-1][j+1] == PLAYER1) && (board[i-2][j+2] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i<(board_size-1)) && (i>0) && (j<board_size) && (j>1)) // check for ooxo
            {
               if ((board[i+2][j-2] == PLAYER1) && (board[i+1][j-1] == PLAYER1) && (board[i-1][j+1] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board, check for xooo
            {
               if ((board[i+1][j+1] == PLAYER1) && (board[i+2][j+2] == PLAYER1) && (board[i+3][j+3] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i>2) && (j>2)) //don't check the top left end of the board, check for ooox
            {
               if ((board[i-1][j-1] == PLAYER1) && (board[i-2][j-2] == PLAYER1) && (board[i-3][j-3] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i>0) && (i<(board_size-1)) && (j<board_size) && (j>1)) // check for oxoo
            {
               if ((board[i-1][j-1] == PLAYER1) && (board[i+1][j+1] == PLAYER1) && (board[i+2][j+2] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }
            if ((i<board_size) && (i>1) && (j<board_size) && (j>1)) // check for ooxo
            {
               if ((board[i-2][j-2] == PLAYER1) && (board[i-1][j-1] == PLAYER1) && (board[i+1][j+1] == PLAYER1))
               {
                  evaluation -= min_fourblock_pts;
               }
            }

            //if space is close to the middle
            if ((abs((board_size/2)-i)<=4) || (abs((board_size/2)-j)<=4)) //check if within four spaces of the middle
            {
               evaluation -= min_middle_pts;
            }

            //if space is a capture
            if (j<(board_size-2)) //don't check the right end of the board
            {
               if ((board[i][j+1] != NOT_PLAYED) && (board[i][j+1] != JUST_CAPTURED) && (board[i][j] != board[i][j+1]) && (board[i][j+1] == board[i][j+2]) && (board[i][j] == board[i][j+3]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if (j>2) //don't check the left end of the board
            {
               if ((board[i][j-1] != NOT_PLAYED) && (board[i][j-1] != JUST_CAPTURED) && (board[i][j] != board[i][j-1]) && (board[i][j-1] == board[i][j-2]) && (board[i][j] == board[i][j-3]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if (i<(board_size-2)) //don't check the bottom end of the board
            {
               if ((board[i+1][j] != NOT_PLAYED) && (board[i+1][j] != JUST_CAPTURED) && (board[i][j] != board[i+1][j]) && (board[i+1][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if (i>2) //don't check the top end of the board
            {
               if ((board[i-1][j] != NOT_PLAYED) && (board[i-1][j] != JUST_CAPTURED) && (board[i][j] != board[i-1][j]) && (board[i-1][j] == board[i-2][j]) && (board[i][j] == board[i-3][j]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board
            {
               if ((board[i-1][j+1] != NOT_PLAYED) && (board[i-1][j+1] != JUST_CAPTURED) && (board[i][j] != board[i-1][j+1]) && (board[i-1][j+1] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if ((i<(board_size-2)) && (j>2)) //don't check the bottom left end of the board
            {
               if ((board[i+1][j-1] != NOT_PLAYED) && (board[i+1][j-1] != JUST_CAPTURED) && (board[i][j] != board[i+1][j-1]) && (board[i+1][j-1] == board[i+2][j-2]) && (board[i][j] == board[i+3][j-3]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board
            {
               if ((board[i+1][j+1] != NOT_PLAYED) && (board[i+1][j+1] != JUST_CAPTURED) && (board[i][j] != board[i+1][j+1]) && (board[i+1][j+1] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]))
               {
                  evaluation -= min_capt_pts;
               }
            }
            if ((i>2) && (j>2)) //don't check the top left end of the board
            {
               if ((board[i-1][j-1] != NOT_PLAYED) && (board[i-1][j-1] != JUST_CAPTURED) && (board[i][j] != board[i-1][j-1]) && (board[i-1][j-1] == board[i-2][j-2]) && (board[i][j] == board[i-3][j-3]))
               {
                  evaluation -= min_capt_pts;
               }
            }

            //if space is three in a row
            if (j<(board_size-1)) //don't check the right end of the board
            {
               if ((board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]))
               {
                  evaluation -= min_threerow_pts;
               }
            }
            if (i<(board_size-1)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]))
               {
                  evaluation -= min_threerow_pts;
               }
            }
            if ((i>1) && (j<(board_size-1))) //don't check the top right end of the board
            {
               if ((board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]))
               {
                  evaluation -= min_threerow_pts;
               }
            }
            if ((i<(board_size-1)) && (j<(board_size-1))) //don't check the bottom right end of the board
            {
               if ((board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]))
               {
                  evaluation -= min_threerow_pts;
               }
            }

            //if space is four in a row
            if (j<(board_size-2)) //don't check the right end of the board
            {
               if ((board[i][j] == board[i][j+1]) && (board[i][j] == board[i][j+2]) && (board[i][j] == board[i][j+3]))
               {
                  evaluation -= min_fourrow_pts;
               }
            }
            if (i<(board_size-2)) //don't check the bottom end of the board
            {
               if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]) && (board[i][j] == board[i+3][j]))
               {
                  evaluation -= min_fourrow_pts;
               }
            }
            if ((i>2) && (j<(board_size-2))) //don't check the top right end of the board
            {
               if ((board[i][j] == board[i-1][j+1]) && (board[i][j] == board[i-2][j+2]) && (board[i][j] == board[i-3][j+3]))
               {
                  evaluation -= min_fourrow_pts;
               }
            }
            if ((i<(board_size-2)) && (j<(board_size-2))) //don't check the bottom right end of the board
            {
               if ((board[i][j] == board[i+1][j+1]) && (board[i][j] == board[i+2][j+2]) && (board[i][j] == board[i+3][j+3]))
               {
                  evaluation -= min_fourrow_pts;
               }
            }
         }
      }
   }

   return evaluation;
}


// Minimax is a recursive function that tells the AI what move to play
int Minimax(int depth, bool is_maximizing, int board_size, cell_data_t board[board_size][board_size])
{
   int score = Evaluate(board_size, board); //evaluate the current board and store it in score

   if (is_maximizing == true) //when the maximizer is playing (AI)
   {
      int best = -10000; //start with a very low score

      for (int i=0; i<board_size; i++) //check every spot
      {
         for (int j=0; j<board_size; j++)
         {
            if ((board[i][j] == NOT_PLAYED) || (board[i][j] == JUST_CAPTURED)) //if the spot is available to play on
            {
               if (depth <= 0) //if the depth has hit zero, stop the function and return the best score
               {
                  return best;
               }
               cell_data_t tempCell = board[i][j]; //store the board spot state in a temporary variable
               board[i][j] = PLAYER1; //play the AI at that spot
               best = fmax(best, Minimax(depth-1, false, board_size, board)); //run minimax again and use the highest score that it returns
               board[i][j] = tempCell; //reset the board spot to what it should to be

               if (score > best) //if the score is higher than the best, replace the best with the current score
               {
                  best = score;
               }
            }
         }
      }

      //printf("MaxBest: %d\n", best);

      return best; //return the best score possible
   }

   else //if minimizing (player)
   {
      int best = 10000; //start at the maximum score

      for (int i=0; i<board_size; i++) //check every spot on the board
      {
         for (int j=0; j<board_size; j++)
         {
            if ((board[i][j] == NOT_PLAYED) || (board[i][j] == JUST_CAPTURED)) //if the spot is playable
            {
               if (depth <= 0) //if the depth is at 0, stop and return the best score
               {
                  return best;
               }
               cell_data_t tempCell = board[i][j]; //store the board spot state in a temporary variable
               board[i][j] = PLAYER2; //play the player at the board spot
               best = fmin(best, Minimax(depth-1, true, board_size, board)); //run minimax again and take the minimum of the scores
               board[i][j] = tempCell; //return the board spot to what it should be

               if (score < best) //if the board state is worse than the best, use that instead
               {
                  best = score;
               }
            }
         }
      }

      //printf("MinBest: %d\n", best);

      return best; //return the best score possible
   }
}


// Finds the best move for the AI
void FindBestMove(int board_size, cell_data_t board[board_size][board_size],int *best_i, int *best_j)
{
   int best = -1001; //the best move possible starts at a low number
   *best_i = 0; //the i location of the best move
   *best_j = 0; //the j location of the best move

   for (int i=0; i<board_size; i++)
   {
      for (int j=0; j<board_size; j++)
      {
         if ((board[i][j] == NOT_PLAYED) || (board[i][j] == JUST_CAPTURED)) //check if the spot is open to play on
         {
            cell_data_t tempCell = board[i][j]; //store the board spot in a temporary variable
            board[i][j] = PLAYER1; //make the AI play in the board spot
            int move = Minimax(2, true, board_size, board); //run minimax with the ai having played there, starting with maximizing
            board[i][j] = tempCell; //reset the board spot back to what it should be

            if (move > best) //if the move found is better than the current best move, set that to the best move
            {
               *best_i = i;
               //printf("best_i: %d\n", best_i); //FOR TESTING
               *best_j = j;
               //printf("best_j: %d\n", best_j); //FOR TESTING
               best = move;
            }
         }
      }
   }

   //printf("%d\n", best); //FOR TESTING
}


/* InitializeBoard initializes the board with NOT_PLAYED */
void InitializeBoard(int board_size, cell_data_t board[board_size][board_size])
{
   for (int i=0; i<board_size; i++) //loop through every row of the array
   {
      for (int j=0; j<board_size; j++) //loop through every row of the array
      {
         board[i][j] = NOT_PLAYED; //set each element to NOT_PLAYED
      }
   }
}


/* InitializePlayers initializes the player stats */
void InitializePlayers(int num_players, player_state_t players[num_players])
{
   for (int i=0; i<num_players; i++) //loop through each player
   {
      players[i].num_captures = 0; 
      players[i].five_in_a_row = false;
   }
}


/* PrintBoard prints the board to the screen. */
void PrintBoard(int board_size, cell_data_t board[board_size][board_size]) 
{
   printf("\e[1;1H\e[2J"); //clears the screen

   for (int i=0; i<((SCREEN_LENGTH-((board_size*5)+4))/2); i++) //centers the board on the screen depending on screen length
   {
      printf(" ");
   }

   printf("   "); //prints empty space in the top left corner
   char column = 'a'; //starts the columns at a

   for (int i=0; i<board_size; i++) //prints the column headers at the top with correct spacing
   {
      printf("  %c  ", column);
      column += 1;
   }

   printf("   "); //adds space in the top right corner
   printf("\n");
   printf("\n");

   int row = 0; //starts the row headers at 0

   for (int i=0; i<board_size; i++) //loops through each row of the board
   {
      for (int i=0; i<((SCREEN_LENGTH-((board_size*5)+4))/2); i++) //centers the board on the screen depending on screen length
      {
         printf(" ");
      }

      if (row <10) //if the row header is one character, print it with two spaces
      {
         printf("%d  ", row);
      }
      else //if not, print with one space
      {
         printf("%d ", row);
      }

      for (int j=0; j<board_size; j++)
      {
         printf("  "); //adds space before each point on the board

         if (board[i][j] == NOT_PLAYED) //if the space isn't played, put a period
         {
            printf(".");
         }

         else if (board[i][j] == PLAYER1) //if the space belongs to player1, print a 
         {
            printf("\033[0;34m"); //switch the color to blue
            printf("o");
            printf("\033[0m"); //clear the color
         }

         else if (board[i][j] == PLAYER2) //if the space belongs to player2, print a
         {
            printf("\033[0;31m"); //switch the color to red
            printf("o");
            printf("\033[0m"); //clear the color
         }

         else if (board[i][j] == PLAYER3) //if the space belongs to player3, print a
         {
            printf("\033[0;32m"); //switch the color to green
            printf("o");
            printf("\033[0m"); //clear the color
         }

         else if (board[i][j] == PLAYER4) //if the space belongs to player4, print a
         {
            printf("\033[0;33m"); //switch the color to yellow
            printf("o");
            printf("\033[0m"); //clear the color
         }

         else if (board[i][j] == JUST_CAPTURED) //if the space was just captured, print a J
         {
            printf("\033[1;36m"); //switch the color to bold cyan
            printf("J");
            printf("\033[0m"); //clear the color
         }

         else if (board[i][j] == PENTE_CHAIN) //if the space is part of a pente chain, print a C
         {
            printf("\033[1;36m"); //switch the color to bold cyan
            printf("C");
            printf("\033[0m"); //clear the color
         }

         printf("  "); //adds space after each point on the board
      }

      if (row < 10) //if row is single digit, print with two spaces
      {
         printf("  %d", row);
      }
      else //else print with one space
      {
         printf(" %d", row);
      }

      printf("\n");
      printf("\n");
      row += 1; //increase the row header by 1 each time
   }
   
   for (int i=0; i<((SCREEN_LENGTH-((board_size*5)+4))/2); i++) //centers the board on the screen depending on screen length
   {
      printf(" ");
   }

   printf("   "); //print space in the bottom left corner
   column = 'a'; //restart the columns at a

   for (int i=0; i<board_size; i++) //print the column headers on the bottom 
   {
      printf("  %c  ", column);
      column += 1;
   }

   printf("   "); //print space in the bottom right corner
   printf("\n");
   printf("\n");
}


/* PrintStats prints the players current statistics to the screen */
void PrintStats(int num_players, player_state_t players[num_players]) 
{
   switch (num_players)
   {
      case 2: //if there are 2 players:

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("\033[0;34m");
         printf("Player 1:"); //print player 1 in blue
         printf("\033[0m");
         printf("                                          "); //print 42 spaces

         printf("\033[0;31m"); //print player 2 in red
         printf("Player 2:\n");
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        "); //add an indent before the info
         printf("\033[0;34m");
         printf("%d captures", players[0].num_captures); //print player 1's captures in blue
         printf("\033[0m");
         printf("                                         "); //print 41 spaces
         printf("\033[0;31m");
         printf("%d captures\n", players[1].num_captures); //print player 2's captures in red
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        ");
         if (players[0].five_in_a_row == true) //print player 1's five-in-a-row status in blue
         {
            printf("\033[0;34m");
            printf("Has five in a row");
            printf("\033[0m");
            printf("                                  "); //print 34 spaces
         }
         else
         {
            printf("\033[0;34m");
            printf("Does not have five in a row");
            printf("\033[0m");
            printf("                        "); //print 24 spaces
         }

         if (players[1].five_in_a_row == true) ///print player 2's five-in-a-row status in red
         {
            printf("\033[0;31m");
            printf("Has five in a row\n");
            printf("\033[0m");
         }
         else
         {
            printf("\033[0;31m");
            printf("Does not have five in a row\n");
            printf("\033[0m");
         }

         break;

      case 3: //this does the same thing for players 1 and 2 as case 2, except adds a third player

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("\033[0;34m");
         printf("Player 1:");
         printf("\033[0m");
         printf("                                          "); //print 42 spaces

         printf("\033[0;31m");
         printf("Player 2:\n");
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        ");
         printf("\033[0;34m");
         printf("%d captures", players[0].num_captures);
         printf("\033[0m");
         printf("                                         "); //print 41 spaces
         printf("\033[0;31m");
         printf("%d captures\n", players[1].num_captures);
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }
            
         printf("        ");
         if (players[0].five_in_a_row == true)
         {
            printf("\033[0;34m");
            printf("Has five in a row");
            printf("\033[0m");
            printf("                                  "); //print 34 spaces
         }
         else
         {
            printf("\033[0;34m");
            printf("Does not have five in a row");
            printf("\033[0m");
            printf("                        "); //print 24 spaces
         }

         if (players[1].five_in_a_row == true)
         {
            printf("\033[0;31m");
            printf("Has five in a row\n");
            printf("\033[0m");
         }
         else
         {
            printf("\033[0;31m");
            printf("Does not have five in a row\n");
            printf("\033[0m");
         }

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("\033[0;32m");
         printf("Player 3:\n"); //print player 3 in green

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        "); //indent the next info
         printf("%d captures\n", players[2].num_captures); //prints player 3's captures

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        ");
         if (players[2].five_in_a_row == true) //print player 3's five-in-a-row status in green
         {
            printf("\033[0;32m");
            printf("Has five in a row\n");
            printf("\033[0m");
         }
         else
         {
            printf("\033[0;32m");
            printf("Does not have five in a row\n");
            printf("\033[0m");
         }

         break;

      case 4: //this does the same thing for player 1, 2, and 3 as case 3, but with a 4th player

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("\033[0;34m");
         printf("Player 1:");
         printf("\033[0m");
         printf("                                          "); //print 42 spaces

         printf("\033[0;31m");
         printf("Player 2:\n");
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        ");
         printf("\033[0;34m");
         printf("%d captures", players[0].num_captures);
         printf("\033[0m");
         printf("                                         "); //print 41 spaces
         printf("\033[0;31m");
         printf("%d captures\n", players[1].num_captures);
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }
            
         printf("        ");
         if (players[0].five_in_a_row == true)
         {
            printf("\033[0;34m");
            printf("Has five in a row");
            printf("\033[0m");
            printf("                                  "); //print 34 spaces
         }
         else
         {
            printf("\033[0;34m");
            printf("Does not have five in a row");
            printf("\033[0m");
            printf("                        "); //print 24 spaces
         }

         if (players[1].five_in_a_row == true)
         {
            printf("\033[0;31m");
            printf("Has five in a row\n");
            printf("\033[0m");
         }
         else
         {
            printf("\033[0;31m");
            printf("Does not have five in a row\n");
            printf("\033[0m");
         }

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("\033[0;32m");
         printf("Player 3:"); //print player 3 in green
         printf("\033[0m");
         printf("                                          "); //print 42 spaces

         printf("\033[0;33m");
         printf("Player 4:\n"); //print player 4 in yellow
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }

         printf("        "); //indent the next info
         printf("\033[0;32m");
         printf("%d captures", players[2].num_captures); //print player 3's captures in green
         printf("\033[0m");
         printf("                                         "); //print 41 spaces
         printf("\033[0;33m");
         printf("%d captures\n", players[3].num_captures); //print player 4's captures in green
         printf("\033[0m");

         for (int i=0; i<((SCREEN_LENGTH-99)/2); i++) //centers the stats on the screen depending on screen length
         {
            printf(" ");
         }
            
         printf("        ");
         if (players[2].five_in_a_row == true) //print player 3's five-in-a-row status in green
         {
            printf("\033[0;32m");
            printf("Has five in a row");
            printf("\033[0m");
            printf("                                  "); //print 34 spaces
         }
         else
         {
            printf("\033[0;32m");
            printf("Does not have five in a row");
            printf("\033[0m");
            printf("                        "); //print 24 spaces
         }

         if (players[3].five_in_a_row == true) //print player 4's five-in-a-row status in yellow
         {
            printf("\033[0;33m");
            printf("Has five in a row\n");
            printf("\033[0m");
         }
         else
         {
            printf("\033[0;33m");
            printf("Does not have five in a row\n");
            printf("\033[0m");
         }

         break;
   }
}


// PrintAiStats prints the AI and Player stats to the screen
void PrintAiStats(int num_players, player_state_t players[num_players], int board_size, cell_data_t board[board_size][board_size])
{
   for (int i=0; i<((SCREEN_LENGTH-((board_size*5)+4))/2); i++) //centers the stats on the screen depending on screen length
   {
      printf(" ");
   }

   // **This code is meant for a board size of 11, if that changes, it needs to be changed as well**

   printf("\033[0;34m");
   printf("AI:"); //print ai in blue
   printf("\033[0m");
   printf("                            "); //print 28 spaces

   printf("\033[0;31m"); //print player 1 in red
   printf("Player:\n");
   printf("\033[0m");

   for (int i=0; i<((SCREEN_LENGTH-((board_size*5)+4))/2); i++) //centers the stats on the screen depending on screen length
   {
      printf(" ");
   }

   printf("  "); //add an indent before the info
   printf("\033[0;34m");
   printf("%d captures", players[0].num_captures); //print player 1's captures in blue
   printf("\033[0m");
   printf("                         "); //print 25 spaces
   printf("\033[0;31m");
   printf("%d captures\n", players[1].num_captures); //print player 2's captures in red
   printf("\033[0m");

   for (int i=0; i<((SCREEN_LENGTH-((board_size*5)+4))/2); i++) //centers the stats on the screen depending on screen length
   {
      printf(" ");
   }
            
   printf("  ");
   if (players[0].five_in_a_row == true) //print player 1's five-in-a-row status in blue
   {
      printf("\033[0;34m");
      printf("Has five in a row");
      printf("\033[0m");
      printf("                  "); //print 18 spaces
   }
   else
   {
      printf("\033[0;34m");
      printf("Does not have five in a row");
      printf("\033[0m");
      printf("        "); //print 8 spaces
   }

   if (players[1].five_in_a_row == true) ///print player 2's five-in-a-row status in red
   {
      printf("\033[0;31m");
      printf("Has five in a row\n");
      printf("\033[0m");
   }
   else
   {
      printf("\033[0;31m");
      printf("Does not have five in a row\n");
      printf("\033[0m");
   }
}


// Prints the words *Womp Womp* on the screen using ASCII characters
void WompWomp()
{
   printf("\n");
   printf("\n");

   printf("\033[1;36m"); //change the color to bold cyan

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf(" __      __                        __      __\n");

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf("/  \\    /  \\____   _____ ______   /  \\    /  \\____   _____ ______\n");

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers the message on the screen depending on screen length
   {
   printf(" ");
   }
   printf("\\   \\/\\/   /  _ \\ /     \\____  \\  \\   \\/\\/   /  _ \\ /     \\____  \\\n");

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf(" \\        (  <_> )  Y Y  \\  |_> >  \\        (  <_> )  Y Y  \\  |_> >\n");

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf("  \\__/\\  / \\____/|__|_|  /   __/    \\__/\\  / \\____/|__|_|  /   __/\n");

   for (int i=0; i<((SCREEN_LENGTH-67)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf("       \\/              \\/|__|            \\/              \\/|__|\n");

   printf("\033[0m"); //change the color back to the default
}


// Prints the word *Yippee!* on the screen using ASCII characters
void Yippee()
{
   printf("\n");
   printf("\n");

   printf("\033[1;36m"); //change the color to bold cyan

   for (int i=0; i<((SCREEN_LENGTH-31)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf(" _ _  _                      _\n");

   for (int i=0; i<((SCREEN_LENGTH-31)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf("| | |<_> ___  ___  ___  ___ | |\n");

   for (int i=0; i<((SCREEN_LENGTH-31)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf("\\   /| || . \\| . \\/ ._>/ ._>|_/\n");

   for (int i=0; i<((SCREEN_LENGTH-31)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf(" |_| |_||  _/|  _/\\___.\\___.<_>\n");

   for (int i=0; i<((SCREEN_LENGTH-31)/2); i++) //centers the message on the screen depending on screen length
   {
      printf(" ");
   }
   printf("        |_|  |_|\n");

   printf("\033[0m");
}


/* NextTurn takes user coordinates and updates the board */
int NextTurn(int board_size, cell_data_t board[board_size][board_size], int player_number, cell_data_t *capt_check)
{
   char x_str[10]; //start the columns at a
   char y = 'a'; //start the row at 0
   int x = 0;
   int result = 0;

   printf("\n   Player %d: Enter Coordinates in the form [row column] - (for example: 0 a): ", player_number); //ask for initial coordinates
   scanf(" %s %c", x_str, &y);
   result = process_str_as_int(x_str, &x); //turn the x string into an integer (or the PLAYER_QUIT integer)

   if (result == PLAYER_QUIT) //if the x string was turned into the PLAYER_QUIT integer, quit the game
   {
      return PLAYER_QUIT;
   }

   while ((y > ('a'+(board_size-1))) || (y < 'a') || (x > (board_size-1)) || (x < 0)) //if coordinates aren't on the board, ask again
   {
      printf("   Player %d: Enter Coordinates in the form [row column] - (for example: 0 a): ", player_number);
      scanf(" %s %c", x_str, &y);
      result = process_str_as_int(x_str, &x);
   }

   while ((board[x][y-'a'] != NOT_PLAYED) && (board[x][y-'a'] != JUST_CAPTURED))  //if coordinates aren't available, ask again
   {
      printf("   Player %d: Enter Coordinates in the form [row column] - (for example: 0 a): ", player_number);
      scanf(" %s %c", x_str, &y);
      result = process_str_as_int(x_str, &x);
   }

   switch (player_number) //reassign the space on the board with the player who picked it
   {
      case 1:
         board[x][y-'a'] = PLAYER1;
         break;
      case 2:
         board[x][y-'a'] = PLAYER2;
         break;
      case 3:
         board[x][y-'a'] = PLAYER3;
         break;
      case 4:
         board[x][y-'a'] = PLAYER4;
         break;
   }

   for (int i=0; i<board_size; i++) //clear any spaces that were just captured last turn
   {
      for (int j=0; j<board_size; j++)
      {
         if (board[i][j] == JUST_CAPTURED)
         {
            board[i][j] = NOT_PLAYED;
         }
      }
   }

   *capt_check = checkCaptHorizon(board_size, board, x, y-'a'); //check if anyone captured horizontally
         
   if (*capt_check == NOT_PLAYED) //if not, check if anyone captured any other way
   {
      *capt_check = checkCaptVert(board_size, board, x, y-'a');

      if (*capt_check == NOT_PLAYED)
      {
         *capt_check = checkCaptDiagUp(board_size, board, x, y-'a');

         if (*capt_check == NOT_PLAYED)
         {
            *capt_check = checkCaptDiagDown(board_size, board, x, y-'a');
         }
      }
   }

   return 0;
}


// Takes the next turn in the AI game
int NextTurnAi(int board_size, cell_data_t board[board_size][board_size], int player_number, cell_data_t *capt_check)
{
   char x_str[10]; //start the columns at a
   char y = 'a'; //start the row at 0
   int x = 0;
   int result = 0;

   int best_i = 0; //the i value of the best spot to play
   int best_j = 0; //the j value of the best spot to play

   if (player_number == 1) //if the player is the AI
   {
      FindBestMove(board_size, board, &best_i, &best_j); //find the best move available currently
      if ((board[best_i][best_j] == NOT_PLAYED) || (board[best_i][best_j] == JUST_CAPTURED)) //if the best move is available
      {
         board[best_i][best_j] = PLAYER1; //play at the best move
      }
      else //if not, play at the first available spot
      {
         for (int i=0; i<board_size; i++)
         {
            for (int j=0; j<board_size; j++)
            {
               if ((board[i][j] == NOT_PLAYED) || (board[i][j] == JUST_CAPTURED))
               {
                  board[i][j] = PLAYER1;
                  break;
               }
            }
         }
      }
   }

   else
   {
      printf("\n     Player: Enter Coordinates in the form [row column] - (for example: 0 a): "); //ask for initial coordinates
      scanf(" %s %c", x_str, &y);
      result = process_str_as_int(x_str, &x); //turn the x string into an integer (or the PLAYER_QUIT integer)

      if (result == PLAYER_QUIT) //if the x string was turned into the PLAYER_QUIT integer, quit the game
      {
         return PLAYER_QUIT;
      }

      while ((y > ('a'+(board_size-1))) || (y < 'a') || (x > (board_size-1)) || (x < 0)) //if coordinates aren't on the board, ask again
      {
         printf("     Player: Enter Coordinates in the form [row column] - (for example: 0 a): ");
         scanf(" %s %c", x_str, &y);
         result = process_str_as_int(x_str, &x);
      }

      while ((board[x][y-'a'] != NOT_PLAYED) && (board[x][y-'a'] != JUST_CAPTURED))  //if coordinates aren't available, ask again
      {
         printf("     Player: Enter Coordinates in the form [row column] - (for example: 0 a): ");
         scanf(" %s %c", x_str, &y);
         result = process_str_as_int(x_str, &x);
      }

      board[x][y-'a'] = PLAYER2; //play the player at the board spot
   }

   for (int i=0; i<board_size; i++) //clear any spaces that were just captured last turn
   {
      for (int j=0; j<board_size; j++)
      {
         if (board[i][j] == JUST_CAPTURED)
         {
            board[i][j] = NOT_PLAYED;
         }
      }
   }

   if (player_number == 2);
   {
      *capt_check = checkCaptHorizon(board_size, board, x, y-'a'); //check if the player captured horizontally
         
      if (*capt_check == NOT_PLAYED) //if not, check if the player captured any other way
      {
         *capt_check = checkCaptVert(board_size, board, x, y-'a');

         if (*capt_check == NOT_PLAYED)
         {
            *capt_check = checkCaptDiagUp(board_size, board, x, y-'a');

            if (*capt_check == NOT_PLAYED)
            {
               *capt_check = checkCaptDiagDown(board_size, board, x, y-'a');
            }
         }
      }
   }

   if (player_number == 1)
   {
      *capt_check = checkCaptHorizon(board_size, board, best_i, best_j); //check if the AI captured horizontally
         
      if (*capt_check == NOT_PLAYED) //if not, check if the AI captured any other way
      {
         *capt_check = checkCaptVert(board_size, board, best_i, best_j);

         if (*capt_check == NOT_PLAYED)
         {
            *capt_check = checkCaptDiagUp(board_size, board, best_i, best_j);

            if (*capt_check == NOT_PLAYED)
            {
               *capt_check = checkCaptDiagDown(board_size, board, best_i, best_j);
            }
         }
      }
   }

   return 0;
}


// Play Pente runs the other functions in order for a player-only game
int PlayPente(int num_players, int board_size) 
{
   cell_data_t board[board_size][board_size]; //declare a board array of enums
   player_state_t players[num_players]; //create a player array of structs

   InitializeBoard(board_size, board); //initialize each part of the board to NOT_PLAYED
   InitializePlayers(num_players, players); //initialize each player's stats

   board[board_size/2][board_size/2] = PLAYER1; //set the center of the board as the first player's move

   PrintBoard(board_size, board); //print the empty board
   PrintStats(num_players, players); //print each player's stats

   int game_in_play = 0; 
   int first_move = 0;
   cell_data_t win_check = NOT_PLAYED; //variable to check for a win
   cell_data_t capt_check = NOT_PLAYED; //variable to check for a capture

   while (game_in_play == 0) //keep taking turns until someone wins or quits
   {
      for (int i=0; i<num_players; i++)
      {
         if (first_move == 0) //skip the first player's first turn, because it is played in the center
         {
            first_move += 1;
            continue;
         }

         game_in_play = NextTurn(board_size, board, i+1, &capt_check); //take user coordinates and update the board

         win_check = checkHorizon(board_size, board); //check if anyone won horizontally
         
         if (win_check == NOT_PLAYED) //if not, check if anyone won any other way
         {
            win_check = checkVert(board_size, board);

            if (win_check == NOT_PLAYED)
            {
               win_check = checkDiagUp(board_size, board);

               if (win_check == NOT_PLAYED)
               {
                  win_check = checkDiagDown(board_size, board);
               }
            }
         }

         switch (win_check) //if someone won, change the stats for that player and reprint
         {
            case NOT_PLAYED:
               break;
            
            case PLAYER1:
               players[0].five_in_a_row = true;
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               return 1; //exit Play Pente and return the winner
               break;
            
            case PLAYER2:
               players[1].five_in_a_row = true;
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               return 2; //exit Play Pente and return the winner
               break;

            case PLAYER3:
               players[2].five_in_a_row = true;
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               return 3; //exit Play Pente and return the winner
               break;

            case PLAYER4:
               players[3].five_in_a_row = true;
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               return 4; //exit Play Pente and return the winner
               break;
         }

         switch (capt_check) //if someone won, change the stats for that player and reprint
         {
            case NOT_PLAYED:
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               break;
            
            case PLAYER1:
               players[0].num_captures += 1; //add one to the number of captures
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               capt_check = NOT_PLAYED;
               if (players[0].num_captures == 5) //if the player has 5 captures,
               {
                  return 1; //return the winner
               }
               break;
            
            case PLAYER2:
               players[1].num_captures += 1; //add one to the number of captures
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               capt_check = NOT_PLAYED;
               if (players[1].num_captures == 5) //if the player has 5 captures,
               {
                  return 2; //return the winner
               }
               break;

            case PLAYER3:
               players[2].num_captures += 1; //add one to the number of captures
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               capt_check = NOT_PLAYED;
               if (players[2].num_captures == 5) //if the player has 5 captures,
               {
                  return 3; //return the winner
               }
               break;

            case PLAYER4:
               players[3].num_captures += 1; //add one to the number of captures
               PrintBoard(board_size, board);
               PrintStats(num_players, players); //print the updated stats
               capt_check = NOT_PLAYED;
               if (players[3].num_captures == 5) //if the player has 5 captures,
               {
                  return 4; //return the winner
               }
               break;
         }

         if (game_in_play == PLAYER_QUIT) //if the turn has a quit, quit the game
         {
            return PLAYER_QUIT;
         }

         int temp = 0; //store the amount of unplayed spaces in a temporary variable 
         for (int i=0; i<board_size; i++)
         {
            for (int j=0; j<board_size; j++)
            {
               if ((board[i][j] == NOT_PLAYED) || (board[i][j] == JUST_CAPTURED)) //if the space is unplayed, add 1 to the temporary variable
               {
                  temp += 1;
               }
            }
         }
         if (temp == 0) //if there are no unplayed spaces, return a tie
         {
            return TIE;
         }
      }
   }

   return 0;
}


// PlayAiPente runs the other functions in order for an AI game
int PlayAiPente(int num_players, int board_size)
{
   cell_data_t board[board_size][board_size]; //declare a board array of enums
   player_state_t players[num_players]; //create a player array of structs

   InitializeBoard(board_size, board); //initialize each part of the board to NOT_PLAYED
   InitializePlayers(num_players, players); //initialize each player's stats

   board[board_size/2][board_size/2] = PLAYER1; //set the center of the board as the first player's move

   PrintBoard(board_size, board); //print the empty board
   PrintAiStats(num_players, players, board_size, board); //print each player's stats

   int game_in_play = 0; 
   int first_move = 0;
   cell_data_t win_check = NOT_PLAYED; //variable to check for a win
   cell_data_t capt_check = NOT_PLAYED; //variable to check for a capture

   while (game_in_play == 0) //keep taking turns until someone wins or quits
   {
      for (int i=0; i<num_players; i++)
      {
         if (first_move == 0) //skip the first player's first turn, because it is played in the center
         {
            first_move += 1;
            continue;
         }

         game_in_play = NextTurnAi(board_size, board, i+1, &capt_check); //take user coordinates and update the board

         win_check = checkHorizon(board_size, board); //check if anyone won horizontally
         
         if (win_check == NOT_PLAYED) //if not, check if anyone won any other way
         {
            win_check = checkVert(board_size, board);

            if (win_check == NOT_PLAYED)
            {
               win_check = checkDiagUp(board_size, board);

               if (win_check == NOT_PLAYED)
               {
                  win_check = checkDiagDown(board_size, board);
               }
            }
         }

         switch (win_check) //if someone won, change the stats for that player and reprint
         {
            case NOT_PLAYED:
               break;
            
            case PLAYER1:
               players[0].five_in_a_row = true;
               PrintBoard(board_size, board);
               PrintAiStats(num_players, players, board_size, board); //print the updated stats
               WompWomp();
               return 1; //exit Play Pente and return the winner
               break;
               
            case PLAYER2:
               players[1].five_in_a_row = true;
               PrintBoard(board_size, board);
               PrintAiStats(num_players, players, board_size, board); //print the updated stats
               Yippee();
               return 2; //exit Play Pente and return the winner
               break;
         }

         switch (capt_check) //if someone won, change the stats for that player and reprint
         {
            case NOT_PLAYED:
               PrintBoard(board_size, board);
               PrintAiStats(num_players, players, board_size, board); //print the updated stats
               break;
            
            case PLAYER1:
               players[0].num_captures += 1; //add one to the number of captures
               PrintBoard(board_size, board);
               PrintAiStats(num_players, players, board_size, board); //print the updated stats
               capt_check = NOT_PLAYED;
               if (players[0].num_captures == 5) //if the player has 5 captures,
               {
                  WompWomp();
                  return 1; //return the winner
               }
               break;

            case PLAYER2:
               players[1].num_captures += 1; //add one to the number of captures
               PrintBoard(board_size, board);
               PrintAiStats(num_players, players, board_size, board); //print the updated stats
               capt_check = NOT_PLAYED;
               if (players[1].num_captures == 5) //if the player has 5 captures,
               {
                  Yippee();
                  return 2; //return the winner
               }
               break;
         }

         if (game_in_play == PLAYER_QUIT) //if the turn has a quit, quit the game
         {
            return PLAYER_QUIT;
         }

         int temp = 0; //store the amount of unplayed spaces in a temporary variable
         for (int i=0; i<board_size; i++)
         {
            for (int j=0; j<board_size; j++)
            {
               if ((board[i][j] == NOT_PLAYED) || (board[i][j] == JUST_CAPTURED)) //if the space is unplayed, add 1 to the temporary variable
               {
                  temp += 1;
               }
            }
         }
         if (temp == 0) //if there are no unplayed spaces, return a tie
         {
            return TIE;
         }
      }
   }

   return 0;
}


// process a string as an integer
int process_str_as_int(char *str, int *val) 
{
   int result = 0;
   int len = strlen(str);
   char QUIT_CHAR = 'q';

   for (int i = 0; i < len; i++) {
      if (i == 0 && i == len-1 && str[0] == QUIT_CHAR)
      {
         result = PLAYER_QUIT;
         *val = -1;
         break;
      }
      if (!isdigit(str[i])) 
      {
         *val = -1;
         break;
      }
      if (i == len-1)  // last loop
      {
         *val = atoi(str);
      }
   }
   return result;
}




