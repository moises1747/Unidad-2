#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define F 10
#define C 10
int main(int argc, char *argv[]) {
	
	int mat[F][C],x,y,fil, col,cont;
	int par,impar,pos,neg,mayor,menor;
	
	srand(time(0));
	
	for(x=0;x<F;x++){
		for(y=0;y<C;y++){
	
		mat[x][y]=rand()%100 + 100;
       }
    }
	
	for(x=0;x<F;x++){
		printf("\n");
		for(y=0;y<C;y++){
			printf(" %d ",mat[x][y]);	

       }
    }
    par=0;impar=0;pos=0;neg=0;mayor=mat[0][0];menor=mat[0][0];
    for(x=0;x<F;x++){
    	for(y=0;y<C;y++){
    	if(mat[x][y]%2==0){
			par++;
		}
		if(mat[x][y]%2==1){
			impar++;
		}
		if(mat[x][y]>0){
			pos++;
		}
		if(mat[x][y]<0){
			neg++;
		}		
		if(mat[x][y]>mayor){
			mayor=mat[x][y];
		}
		if(mat[x][y]<menor){
			menor=mat[x][y];
		}
    	
    }
	}
    
	printf("\nLos numeros Pares son: %d\n", par);
	printf("\nLos numeros Impares son: %d\n", impar);
	printf("\nLos numeros Positivos son: %d\n", pos);
	printf("\nLos numeros Negativos son: %d\n", neg);
	printf("\nEl nuemro mayor es: %d\n", mayor);	
	printf("\nel numero menor es: %d\n", menor);
    printf("\n\n\t");
	system("PAUSE");
	//--------------------------------------------------------------------------
	system("CLS");
	
	do{
		printf("\n Numero de filas [3 - %d]: ",F);
		scanf("%d",&fil);
	}while(fil<3 || fil>F);	
	
	do{
		printf("\n Numero de columnas [3 - %d]: ",C);
		scanf("%d",&col);
	}while(col<3 || col>F);
    cont=100;
	for(x=0;x<fil;x++){
		for(y=0;y<col;y++){
			mat[x][y]=cont;
			cont++;
       }
    }
	
	for(x=0;x<fil;x++){
		printf("\n");
		for(y=0;y<col;y++){
			printf(" %d ",mat[x][y]);	
       }
    }
    printf("\n\n\t");
	system("PAUSE");
    //------------------------------------------
    system("CLS");
	
	do{
		printf("\n Numero de filas [3 - %d]: ",F);
		scanf("%d",&fil);
	}while(fil<3 || fil>F);	
	
	do{
		printf("\n Numero de columnas [3 - %d]: ",C);
		scanf("%d",&col);
	}while(col<3 || col>F);
    cont=100;
	for(x=0;x<col;x++){
		for(y=0;y<fil;y++){
			mat[y][x]=cont;
			cont++;
       }
    }
	
	for(x=0;x<fil;x++){
		printf("\n");
		for(y=0;y<col;y++){
			printf(" %d ",mat[x][y]);	
       }
    }
    printf("\n\n\t");
	system("PAUSE");
	return 0;
}

