#include <stdio.h>
#include <stdlib.h>
#include "tictactoe.h"
#include <ctype.h>
#include <string.h>
void rules(){
	printf("\n\t\t\t\t\tRULES\n\n");
	printf("1.Each player will be entering number to put his choice\n(@ or #) in the desired position\n");
	printf("2.Player who gets a combination of three/four/five\n(depending on the board) either horizontally or diagonally \nor vertically wins the game\n");
	printf("\t\t\t\t\tHOPE YOU ENJOY THIS GAME!!!!\n\n");
	return;
}
int main(){
	printf("\t\t\t\t\tTIC TAC TOE\n\n");
	printf("Type 1 to know the rules of the game\n");
	printf("Type 2 to play the game\n");
	printf("Type 3 to exit\n");
	int t;
	printf("\t\t\tEnter your number:");
	scanf("%d",&t);
label1:
	if(t==1){
		rules();
		printf("Now if you want to play the game type 2\n");
		printf("If you want to exit type 3\n");
		printf("\t\t\tEnter the number:");
		scanf("%d",&t);
		printf("\n");
		goto label1;
	}
	else if(t==2){
		
		//To DECIDE MODE OF PLAYING
		int mode;
		printf("\nChoose Mode of playing:");
		printf("\nType 1 for singleplayer");
		printf("\nType 2 for multiplayer");
		printf("\n\t\t\tEnter your choice:");
		scanf("%d",&mode);
		
		//TO DECIDE DIFFICULTY LEVEL
		printf("\nDecide your difficulty level:");
		printf("\nType 1 for easy");
		printf("\nType 2 for medium");
		printf("\nType 3 for difficult\n");
		int difficulty;
		printf("\t\t\tEnter your difficulty level:");
		scanf("%d",&difficulty);
		printf("\n");
		
		if(mode==1){
			//TO GET PLAYER NAMES
			char player1_name[30];
			char computer_name[30]="Computer";
			printf("\t\t\tEnter player name:");
			scanf("%s",player1_name);
			printf("\n\t\t\tSecond player name is Computer");
			
			//TO DECIDE PLAYER SYMBOLS
			char player1_choice;
			char computer_choice;
			
label3:
			printf("\n\n\t\t\tPlayer 1(%s), enter your choice(@ or #)",player1_name);
			scanf("%c",&player1_choice);
			player1_choice=getchar();
			
			//TO CHECK IF INPUT SYMBOL IS CORRECT OR NOT
			while(player1_choice!='@' &&  player1_choice!='#'){
				printf("\nEnter a correct symbol\n");
				
				//TAKING INPUT AGAIN
				printf("Enter your choice(@ or #)");
				scanf("%c",&player1_choice);
			}
			
			
			if(player1_choice == '@'){
				computer_choice='#';
				printf("\nTherefore,computer's choice is %c\n\n",computer_choice);
			}
			else{
				computer_choice='@';
				printf("\nTherefore,computer's choice is %c\n\n",computer_choice);
			}
			char board[3][3];
			char board1[4][4];
			char board2[5][5];
			int score=-1;
			int count=1;
			
			//TO PLAY GAME BASED ON DIFFICULTY
			if(difficulty==1){
				//TO SET THE BOARD(3*3)
				initialize1(board);
				do{
					//TO SHOW THE BOARD
					draw1(board);
				
					//TO DECIDE WHICH PLAYER TURN AND HIS SYMBOL
					char symbol=(count%2)?player1_choice:computer_choice;
					char* name=(count%2)?player1_name:computer_name;
					
					//TO MAKE DESIRED CHANGES ON BOARD BASED ON INPUT
					int check_correct_alphabet=change_board_computer1(symbol,board,name);
					
					// IF INPUT IS WRONG PLAYER WHO HAVE GIVEN WRONG INPUT WILL PLAY AGAIN SO COUNT DECREASED BY ONE
					if(check_correct_alphabet==-1){
						count-=1;
					}
					count+=1;
				
					//TO CHECK IF A PLAYER HAS WON OR TIE
					score=check_win1(board);
				}while(score==-1);
				
				draw1(board);
			
				//TO DISPLAY WHO HAVE WON THE GAME
				display_winner(count,score,player1_name,computer_name);
				
				
				printf("\nIf you again want to play game type 2");
				printf("\nIf you want to quit type 3");
				printf("\nEnter number:");
				scanf("%d",&t);
				goto label1; 
				
			}
			
			else if(difficulty==2){
				//TO SET THE BOARD(4*4)
				initialize2(board1);
				do{
					//TO SHOW THE BOARD
					draw2(board1);
				
					//TO DECIDE WHICH PLAYER TURN AND HIS SYMBOL
					char symbol=(count%2)?player1_choice:computer_choice;
					char* name=(count%2)?player1_name:computer_name;
				
					//TO MAKE DESIRED CHANGES ON BOARD BASED ON INPUT
					int check_correct_alphabet=change_board_computer2(symbol,board1,name);
				
					// IF INPUT IS WRONG PLAYER WHO HAVE GIVEN WRONG INPUT WILL PLAY AGAIN SO COUNT DECREASED BY ONE
					if(check_correct_alphabet==-1){
						count-=1;
					}
					count+=1;
				
					//TO CHECK IF A PLAYER HAS WON OR TIE
					score=check_win2(board1);
				}while(score==-1);
				draw2(board1);
			
				//TO DISPLAY WHO HAVE WON THE GAME
				display_winner(count,score,player1_name,computer_name);
			
			
				printf("\nIf you again want to play game type 2");
				printf("\nIf you want to quit type 3");
				printf("\nEnter number:");
				scanf("%d",&t);
				goto label1; 
			}
			
			else if(difficulty==3){
				//TO SET THE BOARD(5*5)
				initialize3(board2);
				do{
					//TO SHOW THE BOARD
					draw3(board2);
				
					//TO DECIDE WHICH PLAYER TURN AND HIS SYMBOL
					char symbol=(count%2)?player1_choice:computer_choice;
					char* name=(count%2)?player1_name:computer_name;
				
					//TO MAKE DESIRED CHANGES ON BOARD BASED ON INPUT
					int check_correct_alphabet=change_board_computer3(symbol,board2,name);
				
					// IF INPUT IS WRONG PLAYER WHO HAVE GIVEN WRONG INPUT WILL PLAY AGAIN SO COUNT DECREASED BY ONE
					if(check_correct_alphabet==-1){
						count-=1;
					}
					count+=1;
				
					//TO CHECK IF A PLAYER HAS WON OR TIE
					score=check_win3(board2);
				}while(score==-1);
				draw3(board2);
			
				//TO DIPLAY WHO HAVE WON THE GAME
				display_winner(count,score,player1_name,computer_name);
			
			
				printf("\nIf you again want to play game type 2");
				printf("\nIf you want to quit type 3");
				printf("\nEnter number:");
				scanf("%d",&t);
				goto label1; 
			}
			
			// IF DIFFICULTY INPUT IS NOT CORRECT
			else{
				printf("\nWrong Input");
				printf("\n-----------------------------------------------------------------------------------");
			}
			
		}
		
		else if(mode==2){
		
			//TO GET PLAYER NAMES
			char player1_name[30];
			char player2_name[30];
			printf("\t\t\tEnter the name of first player:");
			scanf("%s",player1_name);
			char player1_lower[strlen(player1_name)+1];
			char player2_lower[30];
			
			
			printf("\t\t\tEnter the name of second player:");
			scanf("%s",player2_name);
			
			
			//TO MAKE SURE BOTH PLAYER NAMES ARE NOT SAME
			for(int i=0;i<strlen(player1_name);i++){
				player1_lower[i]=tolower(player1_name[i]);
			}
			player1_lower[strlen(player1_name)]='\0';
			for(int i=0;i<strlen(player2_name);i++){
				player2_lower[i]=tolower(player2_name[i]);
			}
			player2_lower[strlen(player2_name)]='\0';
			
			
			//IF PLAYER NAMES ARE SAME AGAIN TAKE THE INPUT
			while((!strcmp(player1_lower,player2_lower))){
			
				printf("\nBoth player names are same.Enter a different name\n");
			
				printf("\t\t\tEnter the name of second player:");
				scanf("%s",player2_name);
				
				//TO MAKE SURE BOTH PLAYER NAMES ARE NOT SAME
				for(int i=0;i<strlen(player1_name);i++){
					player1_lower[i]=tolower(player1_name[i]);
				}
				player1_lower[strlen(player1_name)]='\0';
				for(int i=0;i<strlen(player2_name);i++){
					player2_lower[i]=tolower(player2_name[i]);
				}
				player2_lower[strlen(player2_name)]='\0';
				
			}
			printf("\n");
			
			//TO DECIDE PLAYER SYMBOLS
			char player1_choice;
			char player2_choice;
			
			printf("\t\t\t%s Enter your choice(@ or #)",player1_name);
			scanf("%c",&player1_choice);
			player1_choice=getchar();
			
			//TO CHECK IF INPUT SYMBOL IS CORRECT OR NOT
			while(player1_choice!='@' &&  player1_choice!='#'){
				printf("\nEnter a correct symbol\n");
				
				//TAKING INPUT AGAIN
				printf("Enter your choice(@ or #)");
				scanf("%c",&player1_choice);
			}
			if(player1_choice == '@'){
				player2_choice='#';
				printf("\nTherefore,%s choice is %c\n\n",player2_name,player2_choice);
			}
			else{
				player2_choice='@';
				printf("\nTherefore,%s choice is %c\n\n",player2_name,player2_choice);
			}
			
			
			char board[3][3];
			char board1[4][4];
			char board2[5][5];
			int score=-1;
			int count=1;
			
			//TO PLAY GAME BASED ON DIFFICULTY LEVEL
			if(difficulty==1){
				//TO SET THE BOARD(3*3)
				initialize1(board);
				do{
					//TO SHOW THE BOARD
					draw1(board);
				
					//TO DECIDE WHICH PLAYER TURN AND HIS SYMBOL
					char symbol=(count%2)?player1_choice:player2_choice;
					char* name=(count%2)?player1_name:player2_name;
				
					//TO MAKE DESIRED CHANGES ON BOARD BASED ON INPUT
					int check_correct_alphabet=change_board1(symbol,board,name);
				
					// IF INPUT IS WRONG PLAYER WHO HAVE GIVEN WRONG INPUT WILL PLAY AGAIN SO COUNT DECREASED BY ONE
					if(check_correct_alphabet==-1){
						count-=1;
					}
					count+=1;
				
					//TO CHECK IF A PLAYER HAS WON OR TIE
					score=check_win1(board);
				}while(score==-1);
				draw1(board);
			
				//TO DIPLAY WHO HAVE WON THE GAME
				display_winner(count,score,player1_name,player2_name);
			
			
				printf("\nIf you again want to play game type 2");
				printf("\nIf you want to quit type 3");
				printf("\nEnter number:");
				scanf("%d",&t);
				goto label1; 
			}
			
			else if(difficulty==2){
				//TO SET THE BOARD(4*4)
				initialize2(board1);
				do{
					//TO SHOW THE BOARD
					draw2(board1);
				
					//TO DECIDE WHICH PLAYER TURN AND HIS SYMBOL
					char symbol=(count%2)?player1_choice:player2_choice;
					char* name=(count%2)?player1_name:player2_name;
				
					//TO MAKE DESIRED CHANGES ON BOARD BASED ON INPUT
					int check_correct_alphabet=change_board2(symbol,board1,name);
				
					// IF INPUT IS WRONG PLAYER WHO HAVE GIVEN WRONG INPUT WILL PLAY AGAIN SO COUNT DECREASED BY ONE
					if(check_correct_alphabet==-1){
						count-=1;
					}
					count+=1;
				
					//TO CHECK IF A PLAYER HAS WON OR TIE
					score=check_win2(board1);
				}while(score==-1);
				draw2(board1);
			
				//TO DIPLAY WHO HAVE WON THE GAME
				display_winner(count,score,player1_name,player2_name);
			
			
				printf("\nIf you again want to play game type 2");
				printf("\nIf you want to quit type 3");
				printf("\nEnter number:");
				scanf("%d",&t);
				goto label1; 
			}
			
			else if(difficulty==3){
				//TO SET THE BOARD(5*5)
				initialize3(board2);
				do{
					//TO SHOW THE BOARD
					draw3(board2);
				
					//TO DECIDE WHICH PLAYER TURN AND HIS SYMBOL
					char symbol=(count%2)?player1_choice:player2_choice;
					char* name=(count%2)?player1_name:player2_name;
				
					//TO MAKE DESIRED CHANGES ON BOARD BASED ON INPUT
					int check_correct_alphabet=change_board3(symbol,board2,name);
				
					// IF INPUT IS WRONG PLAYER WHO HAVE GIVEN WRONG INPUT WILL PLAY AGAIN SO COUNT DECREASED BY ONE
					if(check_correct_alphabet==-1){
						count-=1;
					}
					count+=1;
				
					//TO CHECK IF A PLAYER HAS WON OR TIE
					score=check_win3(board2);
				}while(score==-1);
				draw3(board2);
			
				//TO DIPLAY WHO HAVE WON THE GAME
				display_winner(count,score,player1_name,player2_name);
			
			
				printf("\nIf you again want to play game type 2");
				printf("\nIf you want to quit type 3");
				printf("\nEnter number:");
				scanf("%d",&t);
				goto label1; 
			}
			
			//IF DIFFICULTY INPUT IS NOT CORRECT 
			else{
				printf("\nWrong Input");
				printf("\n-----------------------------------------------------------------------------------");
			}	
		}
		
		// IF MODE IS NOT CORRECT
		else{
			printf("\nWrong Input");
		printf("\n-----------------------------------------------------------------------------------");
		}
	}
	
	
	//IF THE PERSON WANTS TO QUIT
	else if(t==3){
			printf("\n------------------------------------------------------------------------------------\n");
	}
	
	
	//IF PERSON GIVES INPUT OTHER THAN 1,2 OR 3
	else{
		printf("\nWrong Input");
		printf("\n-----------------------------------------------------------------------------------");
	}
}
