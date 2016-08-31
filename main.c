#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimir(int mapa[T][T],int d);
int main(int argc, char *argv[]) {
	int mapa[T][T]={{35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,35},
                    {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},	
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
	                {35,255,255,255,255,255,255,255,255,255,255,255,255,255,35},
                    {35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,35}	
	               };
	 char tecla;
	 int band, dir,fp,cp,tiempo; // 1 der, 2 izq, 3 aba, 4 arri              
	fp=2;cp=2;
	mapa[fp][cp]=169;
			
	band=1;
	srand(time(0));
	dir=rand()%4 + 1;
    imprimir(mapa,dir);
	tiempo=0;
	while(1){
		tecla=0;
		if(kbhit())
			tecla=getch();
			
		if(tecla=='r')
			band=1;
		if(tecla=='p')
			band=0;		
	if(band){
	
		mapa[fp][cp]=255;
		if(dir==1){ //derecha
			if(mapa[fp][cp+1]==255){
				cp++;
			}
		}	
		
		if(dir==2){ //izquierda
			if(mapa[fp][cp-1]==255){
				cp--;
			}
		}
		if(dir==3){ //abajo
			if(mapa[fp+1][cp]==255){
				fp++;
			}
		}
		if(dir==4){ //abajo
			if(mapa[fp-1][cp]==255){
				fp--;
			}
		}
		mapa[fp][cp]=169;
		imprimir(mapa,dir);
		tiempo++;
		if(tiempo%10==0){
			dir=rand()%4 + 1;
		}
		
	}//corre el tiempo
		if(tecla=='p')
			band=0;
		if(tecla=='r')
			band=1;	
			
		
	Sleep(100);	
	}//while	   	
	
	return 0;
}

void imprimir(int mapa[T][T], int d){
	int i,j;
	
	system("CLS");
	for(i=0;i<T;i++){
		printf("\n\t\t");
		for(j=0;j<T;j++){
			printf("%c",mapa[i][j]);
		}
	}
	
	printf("\n\n\t Direccion = %d", d);
}


