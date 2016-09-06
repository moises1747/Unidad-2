#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	int i,j,x,espacio,aux;
	char palabra[300];
	printf("numeros de pruebas\n ");
	scanf("%i",&x);
 for(j=0;j<x;j++){
	printf("palabras\n");
	fflush(stdin);
	gets(palabra);
	aux=0;
	espacio=0;
	for(i=0;i<strlen(palabra);i++)
	{
		if(palabra[i]==' ')
		{
			aux=aux+1;
			if(palabra[i-2] == palabra[i+1] && palabra[i-1] == palabra[i+2])
			{
				espacio=espacio+1;
			}else
			{
				espacio=espacio-1;
				
		    } 
		    
		}
	}
		if(aux==espacio)
		{
			printf("SI\n");
		}else
		{
			printf("NO\n");
		}
	}
	system("PAUSE");
	return 0;
}
