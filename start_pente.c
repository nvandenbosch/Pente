#include <stdio.h>
#include "pente.h"

int main()
{
   int winner_number = 0;
   int player_number = 0;

   int str_left = 0;

   str_left = start_screen(); //display the start screen, and if there are any characters left in stdin, update the variable str_left

   player_number = rules_screen(str_left); //display the rules, and get the number of players

   if (player_number == 1) //if there is only one player, play against the computer
   {
      winner_number = PlayAiPente(player_number+1, 11);

      if ( winner_number != PLAYER_QUIT) //if the player wins, print the winner
      {
         if ( winner_number != TIE) //if there isn't a tie
         {
            if (winner_number == 1) //if the AI wins, say the player lost
            {
               printf("\n");
               for (int i=0; i<((SCREEN_LENGTH-9)/2); i++) //centers the message on the screen depending on screen length
               {
                  printf(" ");
               }
               printf("You Lose!\n");
            }
         
            else //else, say the player won
            {
               printf("\n");
               for (int i=0; i<((SCREEN_LENGTH-8)/2); i++) //centers the message on the screen depending on screen length
               {
                  printf(" ");
               }
               printf("You Win!\n");
            }
         }

         else //if there is a tie
         {
            printf("\n");
            for (int i=0; i<((SCREEN_LENGTH-9)/2); i++) //centers the message on the screen depending on screen length
            {
               printf(" ");
            }
            printf("\nTie Game!\n");
         }
      }

      else //if the player quits, give a quit message
      {
         printf("\n");
         for (int i=0; i<((SCREEN_LENGTH-23)/2); i++) //centers the message on the screen depending on screen length
         {
            printf(" ");
         }
         printf("Game Over - Player quit\n");
      }
   }

   else //else play normally
   {
      winner_number = PlayPente(player_number, 19);

      if ( winner_number != PLAYER_QUIT) //if the player wins, print the winner
      {
         if ( winner_number != TIE) //if there is not a tie
         {
            printf("\n");
            for (int i=0; i<((SCREEN_LENGTH-29)/2); i++) //centers the message on the screen depending on screen length
            {
               printf(" ");
            }
            printf("The winning player is Player %d!\n", winner_number);
         }

         else //if there is a tie
         {
            printf("\n");
            for (int i=0; i<((SCREEN_LENGTH-9)/2); i++) //centers the message on the screen depending on screen length
            {
               printf(" ");
            }
            printf("Tie Game!\n");
         }
      }

      else //if the player quits, give a quit message
      {
         printf("\n");
         for (int i=0; i<((SCREEN_LENGTH-23)/2); i++) //centers the message on the screen depending on screen length
         {
            printf(" ");
         }
         printf("Game Over - Player quit\n");
      }
   }

   return 0;
} 

