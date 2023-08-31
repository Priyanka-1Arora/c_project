int check_win1(char board[3][3]){

	//TO CHECK HORICONTALLY
	if(board[0][0]==board[0][1] && board[0][1]==board[0][2]){
		return 1;
	}
	else if(board[1][0]==board[1][1] && board[1][1]==board[1][2]){
		return 1;
	}
	else if(board[2][0]==board[2][1] && board[2][1]==board[2][2]){
		return 1;
	}
	
	//TO CHECK VERTICALLY
	else if(board[0][0]==board[1][0] && board[1][0]==board[2][0]){
		return 1;
	}
	else if(board[0][1]==board[1][1] && board[1][1]==board[2][1]){
		return 1;
	}
	else if(board[0][2]==board[1][2] && board[1][2]==board[2][2]){
		return 1;
	}
	
	//TO CHECK DIAGONALLY
	else if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
		return 1;
	}
	else if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
		return 1;
	}
	
	//TO CHECK FOR TIE
	else if(board[0][0]!='A' && board[0][1]!='B' && board[0][2]!='C' && board[1][0]!='D' 		&& board[1][1]!='E' && board[1][2]!='F' && board[2][0]!='G' && board[2][1]!='H' && 
	board[2][2]!='I' ) {
		return 0;
	}
	return -1;
}


int check_win2(char board[4][4]){

	//TO CHECK HORIZONTALLY
	if(board[0][0]==board[0][1] && board[0][1]==board[0][2] && board[0][2]==board[0][3]){
		return 1;
	}
	else if(board[1][0]==board[1][1] && board[1][1]==board[1][2] && board[1][2]==board[1][3]){
		return 1;
	}
	else if(board[2][0]==board[2][1] && board[2][1]==board[2][2] && board[2][2]==board[2][3]){
		return 1;
	}
	else if(board[3][0]==board[3][1] && board[3][1]==board[3][2] && board[3][2]==board[3][3]){
		return 1;
	}
	
	//TO CHECK VERTICALLY
	else if(board[0][0]==board[1][0] && board[1][0]==board[2][0] && board[2][0]==board[3][0]){
		return 1;
	}
	else if(board[0][1]==board[1][1] && board[1][1]==board[2][1] && board[2][1]==board[3][1]){
		return 1;
	}
	else if(board[0][2]==board[1][2] && board[1][2]==board[2][2] && board[2][2]==board[3][2]){
		return 1;
	}
	else if(board[0][3]==board[1][3] && board[1][3]==board[2][3] && board[2][3]==board[3][3]){
		return 1;
	}
	
	//TO CHECK DIAGONALLY
	else if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[2][2]== board[3][3]){
		return 1;
	}
	else if(board[0][3]==board[1][2] && board[1][2]==board[2][1] && board[2][1]==board[0][3]){
		return 1;
	}
	
	//TO CHECK FOR TIE
	else if(board[0][0]!='A' && board[0][1]!='B' && board[0][2]!='C' && board[0][3]!='D' 		&& board[1][0]!='E' && board[1][1]!='F' && board[1][2]!='G' && board[1][3]!='H' && 
	board[2][0]!='I' && board[2][1]!='J'&& board[2][2]!='K'&& board[2][3]!='L'
	&& board[3][0]!='M'&& board[3][1]!='N'&& board[3][2]!='O'&& board[3][3]!='P') {
		return 0;
	}
	return -1;
}


int check_win3(char board[5][5]){

	//TO CHECK HORIZONTALLY
	if(board[0][0]==board[0][1] && board[0][1]==board[0][2] && board[0][2]==board[0][3] && board[0][3]==board[0][4]){
		return 1;
	}
	else if(board[1][0]==board[1][1] && board[1][1]==board[1][2] && board[1][2]==board[1][3] && board[1][3]==board[1][4]){
		return 1;
	}
	else if(board[2][0]==board[2][1] && board[2][1]==board[2][2] && board[2][2]==board[2][3] && board[2][3]==board[2][4]){
		return 1;
	}
	else if(board[3][0]==board[3][1] && board[3][1]==board[3][2] && board[3][2]==board[3][3] && board[3][3]==board[3][4]){
		return 1;
	}
	else if(board[4][0]==board[4][1] && board[4][1]==board[4][2] && board[4][2]==board[4][3] && board[4][3]==board[4][4]){
		return 1;
	}
	
	//TO CHECK VERTICALLY
	else if(board[0][0]==board[1][0] && board[1][0]==board[2][0] && board[2][0]==board[3][0] && board[3][0]==board[4][0]){
		return 1;
	}
	else if(board[0][1]==board[1][1] && board[1][1]==board[2][1] && board[2][1]==board[3][1] && board[3][1]==board[4][1]){
		return 1;
	}
	else if(board[0][2]==board[1][2] && board[1][2]==board[2][2] && board[2][2]==board[3][2] && board[3][2]==board[4][2]){
		return 1;
	}
	else if(board[0][3]==board[1][3] && board[1][3]==board[2][3] && board[2][3]==board[3][3] && board[3][3]==board[4][3]){
		return 1;
	}
	else if(board[0][4]==board[1][4] && board[1][4]==board[2][4] && board[2][4]==board[3][4] && board[3][4]==board[4][4]){
		return 1;
	}
	
	//TO CHECK DIAGONALLY
	else if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[2][2]== board[3][3] && board[3][3]==board[4][4]){
		return 1;
	}
	else if(board[0][4]==board[1][3] && board[1][3]==board[2][2] && board[2][2]==board[3][1] && board[3][1]==board[4][0]){
		return 1;
	}
	
	//TO CHECK FOR TIE
	else if(board[0][0]!='A' && board[0][1]!='B' && board[0][2]!='C' && board[0][3]!='D' 		&& board[0][4]!='E' && board[1][0]!='F' && board[1][1]!='G' && board[1][2]!='H' && 
	board[1][3]!='I' && board[1][4]!='J'&& board[2][0]!='K'&& board[2][1]!='L'
	&& board[2][2]!='M'&& board[2][3]!='N'&& board[2][4]!='O'&& board[3][0]!='P'
	&& board[3][1]!='Q' && board[3][2]!='R' && board[3][3]!='S' && board[3][4]!='T'
	&& board[4][0]!='U' && board[4][1]!='V' && board[4][2]!='W' && board[4][3]!='X'
	&& board[4][4]!='Y') {
		return 0;
	}
	
	//THERE IS NO TIE OR NOT A WINNER
	return -1;
}
