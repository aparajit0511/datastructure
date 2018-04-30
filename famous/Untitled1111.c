#include<stdio.h>
#include<stdbool.h>
#define n 4

int rat(int board[n][n],int *moves,int x,int y);
bool istrue(int board[n][n],int x,int y);
int main()
{
	//int n=4;
	
	int board[n][n]={{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
	
	int* moves;
	
	*moves=rat(board,moves,0,0);
	
	printf("%d ",*moves);
	
	return 0;
}

int rat(int board[n][n],int *moves,int x,int y)
{
		printf("%d  ",*moves);
	
	while(1)
	{
			printf("%d ",*moves);
		if(board[x][y]==board[n-1][n-1])
		return *moves;
		
		if(board[x+1][y]==0 && istrue(board,x+1,y)==true)
		{
			*moves=*moves+1;
				*moves=rat(board,moves,x,y+1);
		}
	
		else if(board[x][y+1] && istrue(board,x,y+1)==true)
		{
			*moves=*moves+1;
				*moves=rat(board,moves,x+1,y);
		}
	
		else if(board[x+1][y]==1 && istrue(board,x+1,y)==true)
		{
			x=x+1;
			*moves=*moves+1;
		}
		else if(board[x][y+1]==1 && istrue(board,x,y+1)==true)
		{
			y=y+1;
			*moves=*moves+1;
		}
	}
}

bool istrue(int board[n][n],int x,int y)
{
	if(x>=0 && x<n && y>=0 && y<n)
	return true;
	else
	return false;
}
