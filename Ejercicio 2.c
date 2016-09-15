#include <stdio.h>
#include <string.h>

int main()
{
	int ESTATURA[30], i, pesototal, promedio, menor, igual;
	
	pesototal=0;
	for(i=0;i<30;i++)
	{
		printf("Estatura [%d]= \n", i);
		scanf("%d", &ESTATURA[i]);
		pesototal=pesototal + ESTATURA[i];
	}
	promedio=pesototal/30;
	printf("La Estatura promedio es %d\n", promedio);
	menor=0;
	igual=0;
	for(i=0;i<30;i++)
	{
		if(ESTATURA[i]<promedio)
		{
			menor++;
		}
		if(ESTATURA[i]==promedio)
		{
			igual++;
		}
	}
	printf("Las Estaturas igual a la estatura promedio son %d \ny las estaturas menores a la promedio son %d\n", igual, menor);

	system("pause");
	return 0;
}
