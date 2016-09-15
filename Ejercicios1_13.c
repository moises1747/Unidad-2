//Librerias
#include <stdio.h>
#include <string.h>
#include <time.h>

void cargar(int vec[30], int x);
void matriz(int mat[15][15], int x);
void imprimir(int v1[30], int v2[30], int v3[30]);
void imprimirm(int m1[15][15], int m2[15][15]);
void reves(int A[30]);
void intercalar(int v1[30], int v2[30], int [60]);
void ordenado(int v1[30], int v5[30]);
void posicion(int v2[30], int v3[30], int v6[30]);
void paresA (int v1[30], int v7[30]);
void concatenacion (int v2[30], int v3[30], int v8[30]);

void main()
{
	int A[30], B[30], C[30], D[60], E[30], F[30], G[30];
	int M1[15][15], M2[15][15];
	srand(time(0));
	cargar(A,1);
	cargar(B,2);
	cargar(C,3);
	matriz(M1,1);
	matriz(M2,2);
	imprimir(A,B,C);
	imprimirm(M1,M2);
	reves(A);
	intercalar(A,B,D);
	ordenado(A,A);
	posicion(B,C,E);
	paresA(A,F);
	concatenacion(B,C,G);
}

void cargar(int vec[30], int x)
{
	int i;
	for(i=0;i<30;i++)
	{
		if(x==1)
		{
			vec[i]=rand()%900+100; //Primero 1
		}
		else
		{
			if(x==2)
			{
				vec[i]=(rand()%450+50)*2; //Segundo 2
			}
			else
			{
				vec[i]=((rand()%450+50)*2)+1; //Tercero 3
			}
		}
	}
}

void matriz(int mat[15][15], int x)
{
	int i,j;
	
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			if(x==1)
			{
				mat[i][j]=rand()%900+100; //Cuarto 4
			}
			else
			{
				mat[i][j]=rand()%9000+1000; //Quinto 5
			}
		}
	}
	

}

void imprimir(int v1[30], int v2[30], int v3[30])
{
	int i;


	for(i=0;i<30;i++)
	{
		printf("\n%d\t%d\t%d", v1[i], v2[i], v3[i]); //Sexto 6
	}
	
    system("pause");

}

void imprimirm(int m1[15][15], int m2[15][15])
{
	int i,j;
	
	printf("\nM1\n");
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			printf("%d ", m1[i][j]); //Septimo 7.1
		}
		printf("\n");
	}
		printf("\nM2\n");
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			printf("%d ", m2[i][j]); //Septimo 7.2
		}
		printf("\n");
	}
    system("pause");

}
void reves(int A[30])
{
	int i;
	
	printf("A\tAr");
	for(i=0;i<30;i++)
	{
		printf("\n%d\t%d", A[i], A[29-i]); //Octavo 8
	}	
    system("pause");

}

void intercalar(int v1[30], int v2[30], int v4[60])
{
	int j=0,i;
	
	for(i=0;i<30;i++)
	{
		v4[j]=v1[i]; //Noveno 9
		j++;
		v4[j]=v2[i];
		j++;
	}
	for(i=0;i<30;i++)
	{
		
			printf("\n%d\t%d\t%d\t", v1[i],v2[i],v4[i]); //Noveno 9
				
		if(i%10==0 && i>0)
		{
			printf("\n");
			system("PAUSE");
		}	
	}
    system("pause");

}

void ordenado(int v1[30], int v5[30])
{
	int i,j,aux[30],guardar[30];
	
	printf("Vector A Vector A Ordenado\n");
	for(i=0;i<30;i++) //Decimo 10
	{
		guardar[i]=v1[i];
	}
	for(i=0;i<30;i++)
	{
		for(j=0;j<30-1;j++)
		{	
			if(v1[j]>v1[j+1])
			{
				aux[i]=v1[j];
				v1[j]=v1[j+1];
				v1[j+1]=aux[i];
			}
		}
	}
	
	for(i=0;i<30;i++)
	{
		printf("%d\t%d\n", guardar[i], v1[i]);
	}

    system("pause");

}

void posicion(int v2[30], int v3[30], int v6[30])
{
	int i;
	
	printf("Vector E\n");
	
	for(i=0;i<15;i++) //Decimo Primero 11
	{
		v6[i]=v2[i+15];
		v6[i+15]=v3[i];
	}
	for(i=0;i<30;i++)
	{
		printf("%d\n", v6[i]);
	}
	system("pause");
}

void paresA (int v1[30], int v7[30])
{
	int i,contf;
	
	printf("Numeros Pares del Vector A\n");
	contf=0;
	for(i=0;i<30;i++)
	{
		if(v1[i]%2==0)
		{
			v7[contf]=v1[i];
			contf++;
		}
	}
	for(i=0;i<contf;i++)
	{
		printf("%d\n", v7[i]);
	}
	
	system("pause");
}

void concatenacion (int v2[30], int v3[30], int v8[30])
{
	int i;
	
	for(i=0;i<30;i++)
	{
		v8[i]=(v2[i]*1000)+v3[i];
	}
	for(i=0;i<30;i++)
	{
		printf("\n%d\t%d\t%d", v2[i], v3[i], v8[i]);
	}
}
