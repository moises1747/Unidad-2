/*MIS COSAS FALTANTES:
1-) Imprimir el progreso del mapa.
2-) Teniendo el progreso. Pasar al siguiente Nivel
3-) Hacer que El enemigo 2 y 3 no salgan en el primer mapa
4-) Hacer que el enemigo 2 y 3 se muevan (El 3 Solo dentro de los 219)
5-) Hacer que los enemigos se muevan solo revotando en los muros
6-) Hacer que Al perder 1 vida. Regresar a la posicion inicial
7-) Hacer que Cuando un enemigo toque mi linea (muro), Yo pierda una vida
8-) Crear bonus (Cosa que no hare)
9-) AUTOCOMPLETAR (Cosa que no hare, Muy Dificil)
10-)Revisar si la funcion Ganador funciona
*/
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

void menu(int mapa[22][22], int menu1);
void jugar(int mapa[22][22], int num);
void imprimir(int mapa[22][22],int vida,float cont);
void ayuda(int num);
void instrucciones(int num);
void ganador(int i);
void perdedor(int i);
void creditos(int i);
int main()
{
	int mapa[22][22]=  {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,0},
					    {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
			 		    {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
					    {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
					    {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
						{0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				    	{0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0},
				        {0,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,0},
				        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					   };
					  	
	int i,j,fp,cp,fp2,cp2,dir,tiempo,num,menu1;
	char tecla;

	fp=1;cp=1;
	mapa[fp][cp]=10;
	fp2=19;cp2=19;
	mapa[fp2][cp2]=2;
	srand(time(0));
	tecla=0;
	dir=rand()%4 + 1;
	tiempo=0;
	menu(mapa,menu1);
}
void menu(int mapa[22][22], int menu1)
{
	int num;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("         *****      *      *****   *   *    *****   *   *\n");
	printf("         *   *     * *     *        * *     *   *   **  *\n");
	printf("         *****     ***     *         *      *   *   * * *\n");
	printf("         *        *   *    *        * *     *   *   *  **\n");
	printf("         *       *     *   *****   *   *    *****   *   *\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t(1) Jugar\n\t\t\t(2) Ayuda\n\t\t\t(3) Instrucciones\n\t\t\t(4) Creditos\n\t\t\t(0)Salir\n");
	scanf("%d", &num);
		if(num==1)
		{
			system("CLS");
			jugar(mapa,num);
			system("pause");
			system("CLS");
		}
		if(num==2)
		{
			system("CLS");
			ayuda(num);
			system("pause");
			system("CLS");
			menu(mapa,menu1);
		}
		if(num==3)
		{
			system("CLS");
			instrucciones(num);
			system("pause");
			system("CLS");
			menu(mapa,menu1);
		}
		if(num==4)
		{
			system("CLS");
			creditos(num);
			system("pause");
			system("CLS");
			menu(mapa,menu1);
		}
}
	
void jugar(int mapa[22][22], int num)
{
	int i,j,fp,cp,fp2,cp2,fp3,cp3,fp4,cp4,fp5,cp5,dir,tiempo,nivel,vida,menu1;
	char tecla;
	float cont,contporc;
	fp=1;cp=1;
	mapa[fp][cp]=10;
	fp2=19;cp2=19;
	mapa[fp2][cp2]=2;
    fp3=3;cp3=18;
    mapa[fp3][cp3]=3;
    fp4=20;cp4=10;
    mapa[fp4][cp4]=4;
    fp5=12;cp5=9;
    mapa[fp5][cp5]=5;
	srand(time(0));
	tecla=0;
	dir=rand()%4 + 1;
	tiempo=0;
	cont=0;
	contporc=0;
	nivel=1;
	vida=3;
	
	while(tecla!='s' || tecla!='S')
	{
		tecla=0;
		mapa[fp][cp]=219; /*SOMBREO, RASTRO*/
		mapa[fp5][cp5]=5;
		if(kbhit())
			tecla=getch();
			
		if(tecla==DERECHA) /*MUEVE LIBRE, DEJA MARCA. PERO TRASPASA LA MISMA LINEA*/
		{
			if(mapa[fp][cp+1]!=10)
			{
				cp++;
				if(mapa[fp][cp]==0) /*NO CHOCAR LINEA CON LINEA PERO NO ENTRA EN LOS BORDES*/
				{
					cp--;
				}
			}
		}
		if(tecla==IZQUIERDA)
		{
			if(mapa[fp][cp-1]!=10)
			{
				cp--;
				if(mapa[fp][cp]==0)
				{
					cp++;
				}
			}
		}
		if(tecla==ABAJO)
		{
			if(mapa[fp+1][cp]!=10)
			{
				fp++;
				if(mapa[fp][cp]==0)
				{
					fp--;
				}
			}
		}
		if(tecla==ARRIBA)
		{
			if(mapa[fp-1][cp]!=10)
			{
				fp--;
				if(mapa[fp][cp]==0)
				{
					fp++;
				}
			}
		}
		
		cont=cont;
		mapa[fp][cp]=10; /*FIN DE LOS MOVIMIENTOS MIOS*/
		
		//Vidas
		if(mapa[fp][cp]==mapa[fp2][cp2] || mapa[fp][cp]==mapa[fp3][cp3] || mapa[fp][cp]==mapa[fp4][cp4])
		{
			vida=vida-1;
		}
		if(mapa[fp][cp]==mapa[fp5][cp5])
		{
			vida=vida+1;
		}
			
		/*Movimiento del Aleatorio*/

        ////////////NIVEL 1////////////////////
        if(mapa[fp][cp]!=mapa[1][1])
		{
			if(nivel>=1)
        	{
		        mapa[fp2][cp2]=255;
			    if(dir==1)
			    { /*Derecha*/
				    if(mapa[fp2][cp2+1]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
				    {
				   		cp2++;
				    }
			    }

			    if(dir==2)
			    { /*Izquierda*/
				    if(mapa[fp2][cp2-1]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
			        {
				        cp2--;
				    }
			    }
		        if(dir==3)
		        { /*Arriba*/
			        if(mapa[fp2+1][cp2]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
			        {
			        	fp2++;
			        }
		        }
				if(dir==4)
			    { /*Abajo*/
			        if(mapa[fp2-1][cp2]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
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
        	}
            ///////////////NIVEL 2//////////////////////////
            if(nivel>=2)
            {
                mapa[fp3][cp3]=255;
			    if(dir==1)
                { /*Derecha*/
                    if(mapa[fp3][cp3+1]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
				   	{
				       	cp3++;
				    }
			    }
				if(dir==2)
                { /*Izquierda*/
					if(mapa[fp3][cp3-1]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
			        {
				    	cp3--;
				    }
			    }
		        if(dir==3)
		        { /*Arriba*/
			        if(mapa[fp3+1][cp3]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
			        {
			           	fp3++;
			        }
		        }
		        if(dir==4)
                { /*Abajo*/
			        if(mapa[fp3-1][cp3]==255 || mapa[fp2][cp2+1]==mapa[fp][cp])
			        {
			        	fp3--;
			        }
			    }
					
				mapa[fp3][cp3]=3;
			    tiempo++;
			    if(tiempo%3==0)
			    {
				    dir=rand()%4 + 1;
			    }
			}
			/////////////////NIVEL 3///////////////////////////////
            if(nivel>=3) 
            {
                mapa[fp4][cp4]=219;
                if(dir==1)
                { /*Derecha*/
                    if(mapa[fp4][cp4+1]==219 || mapa[fp2][cp2+1]==mapa[fp][cp])
                    {
                        cp4++;
                    }
                }
                if(dir==2)
                { /*Izquierda*/
                    if(mapa[fp4][cp4-1]==219 || mapa[fp2][cp2+1]==mapa[fp][cp])
                	{
                        cp4--;
                    }
                }
                if(dir==3)
                { /*Arriba*/
                    if(mapa[fp4+1][cp4]==219 || mapa[fp2][cp2+1]==mapa[fp][cp])
                    {
                        fp4++;
                    }
                }
				if(dir==4)
                { /*Abajo*/
                    if(mapa[fp4-1][cp4]==219 || mapa[fp2][cp2+1]==mapa[fp][cp])
                    {
                        fp4--;
                    }
                }

			    mapa[fp4][cp4]=4;
			    tiempo++;
			    if(tiempo%3==0)
			    {
				    dir=rand()%4 + 1;
				}
		    }
		}
		Sleep(50);

		if(cont>=320) //320 Casillas rellenadas
		{
			printf("Nivel Completado\n");
			nivel++;
			system("pause");
			jugar(mapa,num);
		}
	if(nivel==4)
	{
		system("CLS");
		ganador(i);
		system("pause");
		system("CLS");
		menu(mapa,menu1);
	}
	
	if(vida==0)
	{
		system("CLS");
		perdedor(i);
		system("pause");
		system("CLS");
		menu(mapa,menu1);
	}
	imprimir(mapa,vida,contporc);
	}/*WHILE*/
}


void imprimir(int mapa[22][22],int vida, float cont)
{
	int i,j;
	system("CLS");
	/*IMPRIMIR*/
	printf("\n\t\t      NIVEL 1");
	for(i=0;i<22;i++)
	{
		printf("\n\t\t");
		for(j=0;j<22;j++)
		{
			if(mapa[i][j]==0)
			{
				printf(" ");
			}			
			if(mapa[i][j]==255)
			{
				printf(" ");
			}
			if(mapa[i][j]==219)
			{
				printf("%c", 219);
			}
			if(mapa[i][j]==10)
			{
				printf("\1");
			}
			if(mapa[i][j]==2)
			{
				printf("\2");
			}
            if(mapa[i][j]==3)
			{
				printf("\3");
			}
            if(mapa[i][j]==4)
			{
				printf("\4");
			}
			if(mapa[i][j]==5)
			{
				printf("\5");
			}
			}/*FOR J*/
		}/*FOR I*/
	printf("\n\t\tVidas: %d     Porcentaje: %.2f", vida,cont);
}

void ayuda(int num)
{
	printf("PacXon es un juego, que consiste en ayudar a PacXon a rellenar un espacio vacio y capturar a los monstruos que lo persiguen,");
	printf("construyendo muros a su alrededor.  PacXon avanza al siguiente nivel, cuando logra llenar al menos el 80 porciento  del espacio con sus muros,");
	printf("el se puede mover dentro de los muros, y cada vez que construye una pared se rellenara de forma automatica el espacio.");
	printf("A medida que    PacXon juegan apareceran bonos que le otorgan poderes especiales. Dependiendo   del nivel, existira distinto numero de fantasmas,");
	printf("asi como algunos con           habilidades especiales.");
	
}

void instrucciones(int num)
{
	printf("1-) Mueva PacXon en el area vacia y de nuevo a la pared para capturar la zona. ");
	printf(" No deje que los monstruos tocan PacXon o la pared que lo sigue. \n");
	printf("2-) Una vez PacXon llena más del 80 porciento de la superficie, se puede     avanzar a la siguiente, mas dificil y nivelada.\n");
	printf("3-)El numero de vidas restantes aparece en la parte superior izquierda de la    pantalla.");
	printf("Tambien puede ver el progreso del juego en la parte superior derecha.");
}
void ganador(int i)
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("         *****     *     *   *     *     *****   *****  *****\n");
	printf("         *        * *    **  *    * *    *    *  *   *  *   *\n");
	printf("         *  **    ***    * * *    ***    *    *  *   *  *****\n");
	printf("         *   *   *   *   *  **   *   *   *    *  *   *  *  *\n");
	printf("         *****  *     *  *   *  *     *  *****   *****  *   *\n");
	printf("\n");
	printf("\n");	
}

void perdedor(int i)
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("         *****  *****   *****  *****   *****  *****   *****  *****\n");
	printf("         *   *  *       *   *  *    *  *      *    *  *   *  *   *\n");
	printf("         *****  ***     *****  *    *  ***    *    *  *   *  *****\n");
	printf("         *      *       *  *   *    *  *      *    *  *   *  *  * \n");
	printf("         *      *****   *   *  ****    *****  *****   *****  *   *\n");
	printf("\n");
	printf("\n");	
}

void creditos(int i)
{
	printf("\n\n\t\tRealizado por: Moises A. Leal S.\n");
	printf("\t\tEstudiante de Ingenieria Informatica\n");
}
