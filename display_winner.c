#include <stdio.h>
void display_winner(int count,int score,char* player1_name,char*player2_name){
	if(score==0){
		printf("\n\t\t\tTHAT'S A TIE !!!!! \n");
	}
	else if(score==1 && count%2==0){
		printf("\n Congratulations %s !! You won the game\n",player1_name);
	}
	else{
		printf("\n Congratulations %s !! You won the game\n",player2_name);
	}
}
