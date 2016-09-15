#include <stdio.h>
#include <string.h>

int main()
{
	int vec1[20], vec2[20];
	int contador,x;
	
	printf("\n\n\tVector 1\n\n");
	for(x=0;x<20;x++){
		printf("Vector[%d]=\n",x);
		scanf("%d", &vec1[x]);
	}
	
	printf("\n\n\tVector 2\n\n");
	for(x=0;x<20;x++)
	{
		printf("Vector2[%d]=\n", x);
		scanf("%d", &vec2[x]);
	}
	contador=0;
	
	for(x=0;x<20;x++)
	{
		if(vec1[x]==vec2[x])
		{
		contador++;
		}
	}
	
	if(contador==20)
	{
		printf("Los Vectores son Iguales\n");
	}
	else
	{
		printf("Los Vectores son Diferentes\n");
	}
	system("pause");
	return 0;
}
