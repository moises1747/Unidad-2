#include <stdio.h>
#include <string.h>

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

int main()
{
	int mapa[15][15]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {1,0,3,4,5,6,0,3,4,5,6,6,5,0,1},
					  {1,0,4,0,0,5,0,4,0,0,0,0,4,0,1},
				      {1,0,5,0,3,4,0,5,0,3,0,4,3,4,1},
				      {1,0,6,0,0,0,0,6,0,4,0,0,0,0,1},
				      {1,0,0,3,4,0,4,3,0,5,4,3,4,5,1},
					  {1,3,0,0,5,0,0,0,0,6,0,0,0,0,1},
					  {1,0,0,0,0,6,0,5,4,3,0,3,4,5,1},
				      {1,0,4,5,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,5,0,6,3,4,5,6,5,4,3,0,5,1},
				      {1,0,6,0,5,0,0,0,0,0,2,4,0,0,1},
				      {1,0,5,0,4,0,6,5,4,3,4,5,6,0,1},
				      {1,0,0,0,0,0,0,0,3,0,0,0,0,0,1},
				      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  };
	int i,j,x,fp,cp;
	char tecla;
	printf("\n\t\t   LABERINTO");
	fp=1;cp=1;
	mapa[fp][cp]=10;
	tecla=0;
	for(i=0;i<15;i++)
	{
		printf("\n\t\t");
		for(j=0;j<15;j++)
		{
			if(mapa[i][j]==0)
			{
				printf(" ");
			}
			if(mapa[i][j]==1)
			{
				printf("@");
			}
			if(mapa[i][j]==10)
			{
				printf("\1");
			}
			if(mapa[i][j]==2)
			{
				printf("%c", 2);
			}
			if(mapa[i][j]==3)
			{
				printf("%c", 3);
			}
			if(mapa[i][j]==4)
			{
				printf("%c", 4);
			}
			if(mapa[i][j]==5)
			{
				printf("%c", 5);
			}
			if(mapa[i][j]==6)
			{
				printf("%c", 6);
			}
		}
	}
	
	while(tecla!='s' || tecla!='S')
	{
		tecla=0;
		tecla=getch();
		mapa[fp][cp]=0;
		if(tecla==DERECHA)
		{
			if(mapa[fp][cp+1]==0)
			{
				cp++;
			}
		}
		if(tecla==IZQUIERDA)
		{
			if(mapa[fp][cp-1]==0)
			{
				cp--;
			}
		}
		if(tecla==ABAJO)
		{
			if(mapa[fp+1][cp]==0)
			{
				fp++;
			}
		}
		if(tecla==ARRIBA)
		{
			if(mapa[fp-1][cp]==0)
			{
				fp--;
			}
		}
		
		mapa[fp][cp]=10;
	
	    system("CLS");
		for(i=0;i<15;i++)
	     {
		printf("\n\t\t");
		for(j=0;j<15;j++)
		 {
			if(mapa[i][j]==0)
			{
				printf(" ");
			}
			if(mapa[i][j]==1)
			{
				printf("@");
			}
			if(mapa[i][j]==10)
			{
				printf("\1");
			}
			if(mapa[i][j]==2)
			{
				printf("%c", 2);
			}
			if(mapa[i][j]==3)
			{
				printf("%c", 3);
			}
			if(mapa[i][j]==4)
			{
				printf("%c", 4);
			}
			if(mapa[i][j]==5)
			{
				printf("%c", 5);
			}
			if(mapa[i][j]==6)
			{
				printf("%c", 6);
			}
		}
	}
	}//WHILE
	
	
	system("pause");
	return 0;
	
}
