#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

int main()
{
	int mapa[15][15]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  };
	int i,j,x,fp,cp, fp2,cp2;
	int band, dir,tiempo;
	char tecla,tecla2;
	printf("\n\t\t   PERSEGUIR");
	fp=1;cp=1;
	mapa[fp][cp]=10;
	fp2=13;cp2=13;
	mapa[fp2][cp2]=2;
	tecla=0;
	tecla2=0;
	srand(time(0));
	dir=rand()%4 + 1;
	tiempo=0;
	//Imprimir/Mostrar
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
				printf("\2");
			}
		}
	}	
	//Inicio de los Movimientos
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
		
		//Movimiento del Aleatorio
		if(mapa[fp][cp]!=mapa[1][1])
		{	
			mapa[fp2][cp2]=0;
			if(dir==1)
			{ //Derecha
				if(mapa[fp2][cp2+1]==0)
				{
					cp2++;
				}
			}
		
			if(dir==2)
			{ //Izquierda
				if(mapa[fp2][cp2-1]==0)
				{
					cp2--;
				}
			}
			if(dir==3)
			{ //Arriba
				if(mapa[fp2+1][cp2]==0)
				{
					fp2++;
				}
			}
			if(dir==4)
			{ //Abajo
				if(mapa[fp2-1][cp2]==0)
				{
					fp2--;
				}
			}
				mapa[fp2][cp2]=2;
				tiempo++;
				if(tiempo%5==0)
				{
					dir=rand()%4 + 1;
				}
				//Corre el Tiempo	
		sleep(100);
		}
		
		//Imprimir
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
					printf("\2");
				}
			}
		}
	}
}

