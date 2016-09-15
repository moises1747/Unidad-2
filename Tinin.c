#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int presentes;
	char personas[100][100];
	int i;
	
	printf("Cuantas personas NO conoce Tinin\n");
	scanf("%d", &presentes);
	
	for(i=0;i<presentes;i++)
	{
		printf("Soy ");
		scanf("%s", &personas[i]);
		printf("\n");
	}
	
	for(i=0;i<presentes;i++)
	{
		printf("Hola, %s\n",  personas[i]);
	}
}
