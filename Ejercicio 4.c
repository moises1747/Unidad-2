#include <stdio.h>
#include <string.h>

int main()
{
	char apellido[10][20], buscar;
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Apellido del estudiante [%d]\n", i+1);
		gets(apellido);
	}
	
	printf("Que Apellido desea buscar?\n");
	scanf("%s", &buscar);
		
		if(buscar==apellido[i])
		{
			printf("Apellido Encontrado\n");
		}
		else
		{
			printf("Apellido no Encontrado\n");
		}

}
