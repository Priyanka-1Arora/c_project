void initialize1(char board[3][3]){
	int count=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			board[i][j]=(char)(65+count);
			count+=1;
		}
	}
}
void initialize2(char board[4][4]){
	int count=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			board[i][j]=(char)(65+count);
			count+=1;
		}
	}
}
void initialize3(char board[5][5]){
	int count=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			board[i][j]=(char)(65+count);
			count+=1;
		}
	}
}
