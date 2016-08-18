#include <stdio.h>
#define T 50
#include <time.h>
void main(){
	int vec[T];
	int x,n,par,impar,pos,neg,mayor,menor;
	do{
		printf("numero de elementos del vector");
		scanf("%d",&n);
	}while (n<5 || n>T);
	srand(time(0));
	for(x=0;x<n;x++){
			vec[x]=rand()%100+100;
	}
	par=0; impar=0; pos=0; neg=0; mayor=vec[0]; menor=vec[0];
	for(x=0;x<n;x++){
		if(vec[x]%2==0){
			par++;
		}
		if(vec[x]%2==1){
			impar++;
		}
		if(vec[x]>0){
			pos++;
		}
		if(vec[x]<0){
			neg++;
		}
		if(vec[x]>mayor){
			mayor=vec[x];
		}
		if(vec[x]<menor){
			menor=vec[x];
		}
	}
		
	for(x=0;x<n;x++){
		printf("\n%d\n",vec[x]);
	}
	printf("\nLos numeros Pares son: %d\n", par);
	printf("\nLos numeros Impares son: %d\n", impar);
	printf("\nLos numeros Positivos son: %d\n", pos);
	printf("\nLos numeros Negativos son: %d\n", neg);
	printf("\nEl numero Mayor es: %d\n", mayor);
	printf("\nEl numero Menor es: %d\n", menor);
}
