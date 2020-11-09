#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <conio.h>

const int num_rows=7;
const int num_cols=8;
int *ptrglob,x=0;
												
static int board[num_rows][num_cols] =  {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0}};
void structure(int value,int player){
	int counti=0,countj=0,target=7;
												
	upper:
	if(player!=0&&value!=0){                 
		for(counti=1;counti<num_rows+1;counti++){
			for(countj=1;countj<num_cols;countj++){
				
				if(counti==target&&countj==value){       
					if(board[counti][countj]==0){    
						board[counti][countj]=player;    
					}else
					{
						if(board[counti][countj]!=0){    
							target = target-1;
							counti = counti-1;
							goto upper;
							
						}
					}
			}
			}
	}
}
	
		
} 
void display(int value,int player){

										    	
	x=0;
	structure(value,player);                 
	int counti=0,countj=0;
	printf("     1\t      2\t       3\t4\t 5\t  6\t   7\n");      
		for(counti=1;counti<num_rows+1;counti++){
			printf("%d",counti);                                  
			for(countj=1;countj<num_cols;countj++){
				if(board[counti][countj]==0){                  
					printf("(       )");                          
				}else{             
					if((board[counti][countj])==1){
						printf("(   x   )");
					}
					if((board[counti][countj])==2){
						printf("(   0   )");
					}
				}
			}
			printf("\n");
		}
		int d=0,f=0;
		for(d=0;d<=num_rows;d++){
			for(f=0;f<=num_cols;f++){
				if((board[1][f]==1)&&(board[2][f]==1)&&(board[3][f]==1)&&(board[4][f]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}
				
				 if((board[2][f]==1)&&(board[3][f]==1)&&(board[4][f]==1)&&(board[5][f]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}
				else if((board[3][f]==1)&&(board[4][f]==1)&&(board[5][f]==1)&&(board[6][f]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}
				else if((board[4][f]==1)&&(board[5][f]==1)&&(board[6][f]==1)&&(board[7][f]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}


				else if((board[1][f]==2)&&(board[1][f]==2)&&(board[1][f]==2)&&(board[1][f]==2)){
					printf("computer won\n");
					x=1;
					break;
				}
				else if((board[2][f]==2)&&(board[3][f]==2)&&(board[4][f]==2)&&(board[5][f]==2)){
					printf("computer won\n");
					x=1;
					break;
				}
				else if((board[3][f]==2)&&(board[4][f]==2)&&(board[5][f]==2)&&(board[6][f]==2)){
					printf("computer won\n");
					x=1;
					break;
				}
				else if((board[4][f]==2)&&(board[5][f]==2)&&(board[6][f]==2)&&(board[7][f]==2)){
					printf("computer won\n");
					x=1;
					break;
				}

				if((board[d][1]==1)&&(board[d][2]==1)&&(board[d][3]==1)&&(board[d][4]==1)){
					printf("player 1 won\n");
					x=1;
					break;
					
				}
				else if((board[d][2]==1)&&(board[d][3]==1)&&(board[d][4]==1)&&(board[d][5]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}
				else if((board[d][3]==1)&&(board[d][4]==1)&&(board[d][5]==1)&&(board[d][6]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}
				else if((board[d][4]==1)&&(board[d][5]==1)&&(board[d][6]==1)&&(board[d][7]==1)){
					printf("player 1 won\n");
					x=1;
					break;
				}

				else if((board[d][1]==2)&&(board[d][2]==2)&&(board[d][3]==2)&&(board[d][4]==2)){
					printf("player 2 won\n");
					x=1;
					break;
				}
				else if((board[d][2]==2)&&(board[d][3]==2)&&(board[d][4]==2)&&(board[d][5]==2)){
					printf("player 2 won\n");
					x=1;
					break;
				}
				else if((board[d][3]==2)&&(board[d][4]==2)&&(board[d][5]==2)&&(board[d][6]==2)){
					printf("player 2 won\n");
					x=1;
					break;
				}
				else if((board[d][4]==2)&&(board[d][5]==2)&&(board[d][6]==2)&&(board[d][7]==2)){
					printf("player 2 won\n");
					x=1;
					break;

				}
				
			
		}
			printf("\n");
			if(x==1){
				break;
			}
			
		}
}
	
int main(){
	
	int counti=0,countj=0;
	
		printf("     1\t      2\t       3\t4\t 5\t  6\t   7\n");
		for(counti=1;counti<=num_rows;counti++){
			printf("%d",counti);
			for(countj=1;countj<=num_cols-1;countj++){
				printf("(       )");
			}
			printf("\n");
		}
		printf("X for player1 and 0 for player2\n");
	int value=0,player=1,temp=1;
	do{
		if(x==1){
			break;
		}
		if(player==3){
			player=1;
		}
		if(player==1||player==2){
			
			printf("Player %d: ",player);
			scanf("%d",&temp);
		}
		if(temp>0&&temp<8){
			value=temp;
		}else{
			printf("Enter a valid number\n");
			player=player-1;
			value=0;
		}
		if(value!=0){
			system("CLS");
			printf("\n\n");
			display(value,player);
		}
		
		player = player +1;
	}while(temp!=-1);
	
	system("pause");
	return 0;
}