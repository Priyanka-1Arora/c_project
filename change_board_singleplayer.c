#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int change_board_computer1(char symbol,char board[3][3],char* name){
	char choice;
	if(!strcmp(name,"Computer")){
label5:
		int randomNumber=rand()%9+1;
		choice=(char)(randomNumber+65);
		printf("\nComputer choice is %c\n",choice);
	}
	else{
		printf("\n\t\t\t%s,Enter alphabet from (A-I) to fill your choice:",name);
		char d;
		scanf(" %c",&choice);
	}
	if((choice=='A' || choice=='a') && board[0][0]=='A'){
		board[0][0]=symbol;
	}
	else if((choice=='B' || choice=='b') && board[0][1]=='B'){
		board[0][1]=symbol;
	}
	else if((choice=='C' || choice=='c') && board[0][2]=='C'){
		board[0][2]=symbol;
	}
	else if((choice=='D' || choice=='d') && board[1][0]=='D'){
		board[1][0]=symbol;
	}
	else if((choice=='E' || choice=='e') && board[1][1]=='E'){
		board[1][1]=symbol;
	}
	else if((choice=='F' || choice=='f') && board[1][2]=='F'){
		board[1][2]=symbol;
	}
	else if((choice=='G' || choice=='g') && board[2][0]=='G'){
		board[2][0]=symbol;
	}
	else if((choice=='H' || choice=='h') && board[2][1]=='H'){
		board[2][1]=symbol;
	}
	else if((choice=='I' || choice=='i') && board[2][2]=='I'){
		board[2][2]=symbol;
	}
	else{
		if(!strcmp(name,"Computer")){
			goto label5;
		}
		else{
			printf("\nWrong Input\n");
		}
		return -1;
	} 
	return 0;
}


int change_board_computer2(char symbol,char board[4][4],char* name){
	char choice;
	if(!strcmp(name,"Computer")){
label4:
		int randomNumber=rand()%16+1;
		choice=(char)(randomNumber+65);
		printf("\nComputer choice is %c\n",choice);
	}
	else{
		printf("\n\t\t\t%s,Enter alphabet from (A-I) to fill your choice:",name);
		char d;
		scanf(" %c",&choice);
	}
	if((choice=='A' || choice=='a') && board[0][0]=='A'){
		board[0][0]=symbol;
	}
	else if((choice=='B' || choice=='b') && board[0][1]=='B'){
		board[0][1]=symbol;
	}
	else if((choice=='C' || choice=='c') && board[0][2]=='C'){
		board[0][2]=symbol;
	}
	else if((choice=='D' || choice=='d') && board[0][3]=='D'){
		board[0][3]=symbol;
	}
	else if((choice=='E' || choice=='e') && board[1][0]=='E'){
		board[1][0]=symbol;
	}
	else if((choice=='F' || choice=='f') && board[1][1]=='F'){
		board[1][1]=symbol;
	}
	else if((choice=='G' || choice=='g') && board[1][2]=='G'){
		board[1][2]=symbol;
	}
	else if((choice=='H' || choice=='h') && board[1][3]=='H'){
		board[1][3]=symbol;
	}
	else if((choice=='I' || choice=='i') && board[2][0]=='I'){
		board[2][0]=symbol;
	}
	else if((choice=='J' || choice=='j') && board[2][1]=='J'){
		board[2][1]=symbol;
	}
	else if((choice=='K' || choice=='k') && board[2][2]=='K'){
		board[2][2]=symbol;
	}
	else if((choice=='L' || choice=='l') && board[2][3]=='L'){
		board[2][3]=symbol;
	}
	else if((choice=='M' || choice=='m') && board[3][0]=='M'){
		board[3][0]=symbol;
	}
	else if((choice=='N' || choice=='n') && board[3][1]=='N'){
		board[3][1]=symbol;
	}
	else if((choice=='O' || choice=='o') && board[3][2]=='O'){
		board[3][2]=symbol;
	}
	else if((choice=='P' || choice=='p') && board[3][3]=='P'){
		board[3][3]=symbol;
	}
	else{
		if(!strcmp(name,"Computer")){
			goto label4;
		}
		else{
			printf("\nWrong Input\n");
		}
		return -1;
	} 
	return 0;
}


int change_board_computer3(char symbol,char board[5][5],char* name){
	char choice;
	if(!strcmp(name,"Computer")){
label6:
		int randomNumber=rand()%25+1;
		choice=(char)(randomNumber+65);
		printf("\nComputer choice is %c\n",choice);
	}
	else{
		printf("\n\t\t\t%s,Enter alphabet from (A-I) to fill your choice:",name);
		char d;
		scanf(" %c",&choice);
	}
	if((choice=='A' || choice=='a') && board[0][0]=='A'){
		board[0][0]=symbol;
	}
	else if((choice=='B' || choice=='b') && board[0][1]=='B'){
		board[0][1]=symbol;
	}
	else if((choice=='C' || choice=='c') && board[0][2]=='C'){
		board[0][2]=symbol;
	}
	else if((choice=='D' || choice=='d') && board[0][3]=='D'){
		board[0][3]=symbol;
	}
	else if((choice=='E' || choice=='e') && board[0][4]=='E'){
		board[0][4]=symbol;
	}
	else if((choice=='F' || choice=='f') && board[1][0]=='F'){
		board[1][0]=symbol;
	}
	else if((choice=='G' || choice=='g') && board[1][1]=='G'){
		board[1][1]=symbol;
	}
	else if((choice=='H' || choice=='h') && board[1][2]=='H'){
		board[1][2]=symbol;
	}
	else if((choice=='I' || choice=='i') && board[1][3]=='I'){
		board[1][3]=symbol;
	}
	else if((choice=='J' || choice=='j') && board[1][4]=='J'){
		board[1][4]=symbol;
	}
	else if((choice=='K' || choice=='k') && board[2][0]=='K'){
		board[2][0]=symbol;
	}
	else if((choice=='L' || choice=='l') && board[2][1]=='L'){
		board[2][1]=symbol;
	}
	else if((choice=='M' || choice=='m') && board[2][2]=='M'){
		board[2][2]=symbol;
	}
	else if((choice=='N' || choice=='n') && board[2][3]=='N'){
		board[2][3]=symbol;
	}
	else if((choice=='O' || choice=='o') && board[2][4]=='O'){
		board[2][4]=symbol;
	}
	else if((choice=='P' || choice=='p') && board[3][0]=='P'){
		board[3][0]=symbol;
	}
	else if((choice=='Q' || choice=='q') && board[3][1]=='Q'){
		board[3][1]=symbol;
	}
	else if((choice=='R' || choice=='r') && board[3][2]=='R'){
		board[3][2]=symbol;
	}
	else if((choice=='S' || choice=='s') && board[3][3]=='S'){
		board[3][3]=symbol;
	}
	else if((choice=='T' || choice=='t') && board[3][4]=='T'){
		board[3][4]=symbol;
	}
	else if((choice=='U' || choice=='u') && board[4][0]=='U'){
		board[4][0]=symbol;
	}
	else if((choice=='V' || choice=='v') && board[4][1]=='V'){
		board[4][1]=symbol;
	}
	else if((choice=='W' || choice=='w') && board[4][2]=='W'){
		board[4][2]=symbol;
	}
	else if((choice=='X' || choice=='x') && board[4][3]=='X'){
		board[4][3]=symbol;
	}
	else if((choice=='Y' || choice=='y') && board[4][4]=='Y'){
		board[4][4]=symbol;
	}
	else{
		if(!strcmp(name,"Computer")){
			goto label6;
		}
		else{
			printf("\nWrong Input\n");
		}
		return -1;
	} 
	return 0;
}

