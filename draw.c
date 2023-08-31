#include <stdio.h>
void draw1(char board[3][3]){
	printf("\t\t\t %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
	printf("\n\t\t\t---|---|---");
	printf("\n\t\t\t %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
	printf("\n\t\t\t---|---|---");
	printf("\n\t\t\t %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
	printf("\n");
}
void draw2(char board[4][4]){
	printf("\t\t\t %c | %c | %c | %c ",board[0][0],board[0][1],board[0][2],board[0][3]);
	printf("\n\t\t\t---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c ",board[1][0],board[1][1],board[1][2],board[1][3]);
	printf("\n\t\t\t---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c ",board[2][0],board[2][1],board[2][2],board[2][3]);
	printf("\n\t\t\t---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c ",board[3][0],board[3][1],board[3][2],board[3][3]);
	printf("\n");
}
void draw3(char board[5][5]){
	printf("\t\t\t %c | %c | %c | %c | %c ",board[0][0],board[0][1],board[0][2],board[0][3],board[0][4]);
	printf("\n\t\t\t---|---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c | %c ",board[1][0],board[1][1],board[1][2],board[1][3],board[1][4]);
	printf("\n\t\t\t---|---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c | %c ",board[2][0],board[2][1],board[2][2],board[2][3],board[2][4]);
	printf("\n\t\t\t---|---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c | %c ",board[3][0],board[3][1],board[3][2],board[3][3],board[3][4]);
	printf("\n\t\t\t---|---|---|---|---");
	printf("\n\t\t\t %c | %c | %c | %c | %c ",board[4][0],board[4][1],board[4][2],board[4][3],board[4][4]);
	printf("\n");
}
