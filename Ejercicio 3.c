#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int vec[50], i,aux,suma,promedio,mayor,menor;
	
	mayor=-999;
	menor=999;
	srand(time(0));
	for(i=0;i<50;i++)
	{
		vec[i]=rand()%90+10;
	}
	for(i=0;i<50;i++)
	{
		aux=vec[i];
		vec[i]=vec[i+1];
		vec[i+1]=aux;
		
		suma=suma+vec[i];
		
		promedio=suma/50;
		
		if(vec[i]>mayor)
		{
			mayor=vec[i];
		}
		if(vec[i]<menor)
		{
			menor=vec[i];
		}
	}

	for(i=0;i<50;i++)
	{
		printf("%d\n", vec[i]);
	}
	
	printf("La Suma de los numeros del Vector es: %d\n", suma);
	printf("El Promedio del Vector es: %d\n", promedio);
	printf("El Numero Mayor es: %d\n", mayor);
	printf("El Numero Menor es: %d\n", menor);
	
	
	
	system("pause");
	return 0;
}
