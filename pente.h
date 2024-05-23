#ifndef __PENTE_H__
#define __PENTE_H__

#include <stdbool.h>

/* ****************************************************
 * Pente.h defines functions that allow a callers to 
 * create a Pente Board and Play a Game
 * ****************************************************/

// The value to return from PlayPente if any player quits the game.
// You must not change this value.
#define PLAYER_QUIT (1000)
#define TIE (1100)

// The character length of the screen being played on
// **THE NUMBERS USED HERE MAY BE DIFFERENT THAN WHAT WORKS ON YOUR SCREEN**
// **THESE ARE JUST WHAT WORKED FOR ME**
// for Windows 11 laptop, it is 155
// for Ubuntu desktop, it is 205
#define SCREEN_LENGTH (155)
//#define SCREEN_LENGTH (205)


// This can be edited, but need to have something defined as this name
// (cell_data_t) that the board is made of
enum cellState { NOT_PLAYED, PLAYER1, PLAYER2, PLAYER3, PLAYER4, JUST_CAPTURED, PENTE_CHAIN } typedef cell_data_t;


// This can be edited, but need to have something defined as this name 
// (player_state_t) to represent a player
struct playerState {
   int  num_captures;
   bool five_in_a_row;
} typedef player_state_t;




/********************************************************************************
 * PlayPente
 * purpose:
 *    Plays the game Pente, initiates players taking turns and judging if there 
 *    is a winner or not. 
 *    This function will build over time.
 *
 * inputs:
 *    int num_players: The number of players in this game
 *                     Must be 1 or 2 at the beginning may be 3 or 4 also later
 *    int board_size:  The size of the board being used, in game play it will be
 *                     19, but may use smaller for testing purposes.
 *
 * returns int:
 *    PLAYER_QUIT if a player stopped the game by quitting
 *    Player Number if a player won (1, 2, 3, or 4)
 *    <0 if there was an unrecoverable error
 *
 *******************************************************************************/
int PlayPente(int num_players, int board_size);



/********************************************************************************
 * PrintBoard
 * purpose:
 *    Here initially for testing purposes.
 *    Likely really only to be called by PlayPente or a similar function.
 *    Prints the board to the terminal screen representing the current player 
 *    moves on the board.
 *
 * inputs:
 *    int board_size:     The size of the board being used, in game play it will be
 *                        19, but may use smaller for testing purposes.
 *    cell_data_t board:  The internal representation of the board itself
 *                        cell_data_t must also be defined in this file and be well
 *                        documented for graders.
 *
 * returns void: Just prints the board
 *
 *******************************************************************************/
void PrintBoard(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * PrintStats
 * purpose:
 *    Here initially for testing purposes
 *    Likely really only to be called by PlayPente or a similar function
 *    Prints the player statistics to the screen. It must print the number of 
 *    captures each player has, but may print more.
 *
 * inputs:
 *    int num_players:         The number of players in this game (typically 2)
 *    player_state_t *players: The internal representation of player state
 *                             player_state_t must also be defined in this file and
 *                             be well documented for graders
 *
 * returns void: Just player status to the screen
 *
 *******************************************************************************/
void PrintStats(int num_players, player_state_t players[num_players]);



/********************************************************************************
 * InitializeBoard
 * purpose:
 *    Here initially for testing purposes.
 *    Likely really only to be called by PlayPente or a similar function.
 *    Initializes each space on the board to NOT_PLAYED. 
 *
 * inputs:
 *    int board_size:     The size of the board being used, in game play it will be
 *                        19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:  The internal representation of the board itself
 *                        cell_data_t must also be defined in this file and be well
 *                        documented for graders.
 *
 * returns void
 *
 *******************************************************************************/
void InitializeBoard(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * InitializePlayers
 * purpose:
 *    Here initially for testing purposes.
 *    Likely really only to be called by PlayPente or a similar function.
 *    Initializes each player's stats.
 *
 * inputs:
 *    int num_players:     The amount of players playing the game, will most likely
 *                         be 2 or 4. 
 *
 *    player_state_t players:  Player array containing player stats. 
 *
 * returns void
 *
 *******************************************************************************/
void InitializePlayers(int num_players, player_state_t players[num_players]);



/********************************************************************************
 * NextTurn
 * purpose:
 *    Here initially for testing purposes.
 *    Likely really only to be called by PlayPente or a similar function.
 *    Takes user-input coordinates and updates the board. 
 *
 * inputs:
 *    int board_size:     The size of the board being used, in game play it will be
 *                        19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 *    int player_number:  The player number who is taking the turn, which will be 
 *                        taken from the loop in PlayPente().
 *
 *    cell_data_t *capt_check: updates whether there is a capture or not
 *
 * returns int: PLAYER_QUIT if player has quit, otherwise 0
 *
 *******************************************************************************/
int NextTurn(int board_size, cell_data_t board[board_size][board_size], int player_number, cell_data_t *capt_check);



/*************************************************************************
 * process_str_as_int
 * 
 * Purpose: I found I wanted this helper function to convert a string to
 *          a number (if it is).
 *          It is simply here if you need it. Not required to be used.
 *          You may edit it or delete it.
 * inputs: 
 *    char *str:     string that is expected to be a number
 *    int *val:      integer that the converted string will be returned in
 *                   if it is in fact an integer
 * returns:
 *     0 if all goes well
 *    -1 if couldn't conver the string to an integer
 *     PLAYER_QUIT if this value is the QUIT_CHAR indicating that the 
 *                 player wants to quit.
 *************************************************************************/
int process_str_as_int(char *str, int *val);



/********************************************************************************
 * CheckVert
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a vertical 5-in-a-row
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 * returns cell_data_t: number of player with 5 in a row (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkVert(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * CheckHorizon
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a horizontal 5-in-a-row
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 * returns cell_data_t: number of player with 5 in a row (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkHorizon(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * CheckDiagUp
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a Right-and-Up 5-in-a-row
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 * returns cell_data_t: number of player with 5 in a row (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkDiagUp(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * CheckDiagDown
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a Right-and-Down 5-in-a-row
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 * returns cell_data_t: number of player with 5 in a row (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkDiagDown(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * CheckCaptVert
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a vertical capture
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 *    int i:               the row of the board we are checking
 *
 *    int j:               the column of the board we are checking
 *
 * returns cell_data_t: number of player with capture (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkCaptVert(int board_size, cell_data_t board[board_size][board_size], int i, int j);



/********************************************************************************
 * CheckCaptHorizon
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a horizontal capture
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 *    int i:               the row of the board we are checking
 *
 *    int j:               the column of the board we are checking
 *
 * returns cell_data_t: number of player with capture (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkCaptHorizon(int board_size, cell_data_t board[board_size][board_size], int i, int j);



/********************************************************************************
 * CheckCaptDiagUp
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a Right-and-Up capture
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 *    int i:               the row of the board we are checking
 *
 *    int j:               the column of the board we are checking
 *
 * returns cell_data_t: number of player with capture (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkCaptDiagUp(int board_size, cell_data_t board[board_size][board_size], int i, int j);



/********************************************************************************
 * CheckCaptDiagDown
 * purpose:
 *    Likely really only to be called by Next Turn or similar function
 *    Takes updated board and checks for a Right-and-Down capture
 *
 * inputs:
 *    int board_size:      The size of the board being used, in game play it will be
 *                         19, but may use smaller for testing purposes.
 *
 *    cell_data_t board:   The internal representation of the board itself
 *                         cell_data_t must also be defined in this file and be well
 *                         documented for graders.
 *
 *    int i:               the row of the board we are checking
 *
 *    int j:               the column of the board we are checking
 *
 * returns cell_data_t: number of player with capture (or NOT_PLAYED if none).
 *
 *******************************************************************************/
cell_data_t checkCaptDiagDown(int board_size, cell_data_t board[board_size][board_size], int i, int j);



/********************************************************************************
 * start_screen
 * purpose:
 *    Starts the game and displays title 
 *
 * inputs: none
 *
 * returns int: whether there is string left or not
 *
 *******************************************************************************/
int start_screen();



/********************************************************************************
 * PlayAiPente
 * purpose:
 *    Plays the game Pente, initiates player taking turns against AI and judging 
 *    if the player won or not. 
 *
 * inputs:
 *    int num_players: The number of players in this game, must be 1
 *
 *    int board_size:  The size of the board being used, in game play it will be
 *                     19, but may use smaller for testing purposes.
 *
 * returns int:
 *    PLAYER_QUIT if a player stopped the game by quitting
 *    Player Number if a player won (1)
 *    <0 if there was an unrecoverable error
 *
 *******************************************************************************/
int PlayAiPente(int num_players, int board_size);



/********************************************************************************
 * PrintAiStats
 * purpose:
 *    Here initially for testing purposes
 *    Likely really only to be called by PlayPente or a similar function
 *    Prints the player and AI statistics to the screen. It must print the number 
 *    of captures each player has, but may print more.
 *
 * inputs:
 *    int num_players:         The number of players in this game (2)
 *    player_state_t players:  The internal representation of player state
 *                             player_state_t must also be defined in this file and
 *                             be well documented for graders
 *    int board_size:          size of the board being used
 *    cell_data_t board:       board being used
 *
 * returns void: Just player status to the screen
 *
 *******************************************************************************/
void PrintAiStats(int num_players, player_state_t players[num_players], int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * Minimax
 * purpose:
 *    Likely really only to be called by PlayAiPente or a similar function
 *    Determines best move for the Ai. 
 *
 * inputs:
 *    int depth:               The number of times the function will call itself
 *    bool is_maximizing:      determines whether the current function call is 
 *                             the AI's turn (maximizing) or the player's turn
 *    int board_size:          the size of the board
 *    cell_data_t board:       the current board being played on
 *
 * returns int: the score of the best move
 *
 *******************************************************************************/
int Minimax(int depth, bool is_maximizing, int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * Evaluate
 * purpose:
 *    determines a score for different board states
 *
 * inputs: 
 *    int board_size:        the size of the board
 *    cell_data_t board:     the board being played on
 *
 * returns int: score of the current board state
 *
 *******************************************************************************/
int Evaluate(int board_size, cell_data_t board[board_size][board_size]);



/********************************************************************************
 * FindBestMove
 * purpose:
 *    determines a score for different board states
 *
 * inputs: 
 *    int board_size:            size of the board
 *    cell_data_t board:         the board
 *    int *best_i:               the i value of the best move
 *    int *best_j:               the j value of the best move
 *
 * returns int: score of the current board state
 *
 *******************************************************************************/
void FindBestMove(int board_size, cell_data_t board[board_size][board_size], int *best_i, int *best_j);



/********************************************************************************
 * rules_screen
 * purpose:
 *    displays rules, and gets user input on number of players
 *
 * inputs: int str_left:  whether there is input left or not
 *
 * returns int: number of players (between 1 and 4)
 *
 *******************************************************************************/
int rules_screen(int str_left);



/********************************************************************************
 * WompWomp
 * purpose:
 *    prints the words *womp womp* to the screen using ASCII Characters
 *
 * inputs: none
 *
 * returns void
 *
 *******************************************************************************/
void WompWomp();



/********************************************************************************
 * Yippee
 * purpose:
 *    prints the word *Yippee!* to the screen using ASCII Characters
 *
 * inputs: none
 *
 * returns void
 *
 *******************************************************************************/
void Yippee();

#endif //  __PENTE_H__
