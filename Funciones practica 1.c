#include <stdio.h>
int suma(int a,int b);
int resta(int a, int b);
void mensaje();
void suma2();

int main(){
	
	int x,y,s,r;
	s=suma(50,20);
	printf("La suma es %d\n", s);
	printf("ingrese el valor de X\n");
	scanf("%d", &x);
	printf("ingrese el valor de Y\n");
	scanf("%d", &y);
	printf("La resta es igual a %d\n", r);
	r=resta (x,y);
	suma2();
	mensaje();
	
}
	int suma(int a, int b){
	int c;//variable. LOCAL funcion
	c=a+b;
	return c;
}
	int resta(int a, int b){
	return(a-b);
}
	void mensaje(){
	printf("Hasta luego\n");
}

	void suma2(){
	int a,b,c;
	printf("Ingrese el valor de a\n");
	scanf("%d", &a);
	printf("Ingrese el valor de b\n");
	scanf("%d", &b);
	c=a+b;
	printf("s2=%d\n",c);
}
