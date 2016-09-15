#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

#define DERECHA 77
#define IZQUIERDA 75
#define DISPARO 32

void imprimir(int mapa[15][15]);
void main()
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
	int i,j,fp,cp,fp1,cp1,cont,band;
	char tecla;
	fp=13;cp=2;
	mapa[fp][cp]=10;
	fp1=16;cp1=2;
	cont=0;
	tecla=0;
	band=0;
	while(tecla!='s' || tecla!='S')
	{
		tecla=0;
		if(kbhit())
		{
		tecla=getch();
		}
		
		mapa[fp][cp]=0; /*SOMBREO, RASTRO*/
		mapa[fp1][cp1]=0;
		if(tecla==DERECHA) /*MUEVE LIBRE, DEJA MARCA. PERO TRASPASA LA MISMA LINEA*/
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
		if(tecla==DISPARO)
		{
			band=1;
			if(mapa[fp1][cp1]==0 &&mapa[fp1][cp1]!=1 )
			{
				cont++;
				cp1=cp;
				fp1=fp;
				mapa[fp1][cp1]=42;
				fp1--;
			}
		}
		if(band==1)
		{
			fp1--;
		}
		
		if(mapa[fp1-1][cp1]==1){
			band=0;
			mapa[fp1][cp1]=0;
		}else{
			mapa[fp1][cp1]=42;
		}
		
		mapa[fp][cp]=10; /*FIN DE LOS MOVIMIENTOS MIOS*/
		
	system("CLS");
	imprimir(mapa);
	Sleep(80);
	}/*WHILE*/
}

void imprimir(int mapa[15][15])
{
	int i,j;
	/*IMPRIMIR*/
	printf("\n\t\t   DISPARAR");
	for(i=0;i<15;i++)
	{
		printf("\n\t\t");
		for(j=0;j<15;j++)
		{
			if(mapa[i][j]==0)
			{
				printf(" ");
			}			
			else if(mapa[i][j]==10)
			{
				printf("\1");
			}
			else if(mapa[i][j]==1)
			{
				printf("%c", 219);
			}
			else if(mapa[i][j]==42)
			{
				printf("%c", 42);
			}
		}/*FOR J*/
	}/*FOR I*/
/*	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			printf("%d", mapa[i][j]);
		}
		printf("\n");
	}*/
}

void disparo(int mapa[15][15], int BARRA)
{
	int disparo;
	
}
