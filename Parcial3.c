#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define A 65
#define D 68
#define W 87
#define S 83
#define R 82

void imprimir(int mapa[20][20]);
void main()
{
	int mapa[20][20]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
					  {1,0,1,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,0,1,1,0,1,1,0,0,0,0,0,1,1,1,0,1,1,1,1},
				      {1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,2,1},
				      {1,1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,1},
					  {1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,1},
					  {1,0,1,1,0,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1},
				      {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
				      {1,0,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,0,1},
				      {1,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1},
				      {1,0,1,0,0,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1},
				      {1,0,1,1,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,1},
				      {1,0,0,1,1,0,0,0,0,0,1,0,0,1,1,0,1,1,0,1},
				      {1,1,0,0,1,0,0,1,1,1,1,0,0,1,1,0,1,0,0,1},
				      {1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1},
				      {1,1,1,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,1,1},
				      {1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,0,1,1},
				      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  };

	int i,largo,fp,cp,r,x;
	char texto[100],tecla;
	
	fp=2;cp=0;
	mapa[fp][cp]=10;
	imprimir(mapa);
	printf("\n\tIngrese un Texto:\n");
	gets(texto);
	printf("Presioner R para comenzar: ");
	tecla=getch();
	largo=strlen(texto);
	largo=toupper(largo);
		for(i=0;i<largo;i++)
		{
			mapa[fp][cp]=0;
				if(texto[i]=='d') //DERECHA tecla=cadena[i]
				{
					if(mapa[fp][cp+1]==0 || mapa[fp][cp+1]==2 || mapa[fp][cp+1]==3)
					{
						cp++;
						if(mapa[fp][cp+1]!=0 || mapa[fp][cp+1]==1)
						{
							system("CLS");
							printf("HAZ SIDO ATRAPADO");
							system("pause");
						}
					}
				}
				if(texto[i]=='a') //IZQUIERDA
				{
					if(mapa[fp][cp-1]==0 || mapa[fp][cp-1]==2 || mapa[fp][cp-1]==3)
					{
						cp--;
						if(mapa[fp][cp-1]!=0 || mapa[fp][cp-1]==1)
						{
							system("CLS");
							printf("HAZ SIDO ATRAPADO");
							system("pause");
						}
					}
				}
				if(texto[i]=='w') //ARRIBA
				{
					if(mapa[fp-1][cp]==0 || mapa[fp-1][cp]==2 || mapa[fp-1][cp]==3)
					{
						fp--;
						if(mapa[fp-1][cp]!=0)
						{
							system("CLS");
							printf("HAZ SIDO ATRAPADO");
							system("pause");
						}
					}
				}
				if(texto[i]=='s') //ABAJO
				{
					if(mapa[fp+1][cp]==0 || mapa[fp+1][cp]==2 || mapa[fp+1][cp]==3)
					{
						fp++;
						if(mapa[fp+1][cp]!=0)
						{
							system("CLS");
							printf("HAZ SIDO ATRAPADO");
							system("pause");
						}
					}
				}
		if(mapa[fp][cp]==mapa[3][7] || mapa[fp][cp]==mapa[5][18])		
			{
				system("CLS");
				printf("HAZ GANADO\n");
				system("pause");
 			}
			
		mapa[fp][cp]=10;	
		imprimir(mapa);
		Sleep(100);
		
		}
}
				  
void imprimir(int mapa[20][20])
{
	int i,j;
	/*IMPRIMIR*/
	system("CLS");
	for(i=0;i<20;i++)
	{
		printf("\n\t\t");
		for(j=0;j<20;j++)
		{
			if(mapa[i][j]==0)
			{
				printf(" ");
			}			
			if(mapa[i][j]==10)
			{
				printf("\1");
			}
			if(mapa[i][j]==1)
			{
				printf("%c", 219);
			}
			if(mapa[i][j]==2)
			{
				printf("J");
			}
			if(mapa[i][j]==3)
			{
				printf("K");
			}
		}/*FOR J*/
	}/*FOR I*/
}
