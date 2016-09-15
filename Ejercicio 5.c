#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	int A[20], B[20], C[20], x, mayor, menor;
	
	srand(time(0));
	
	printf("\n\n\tA\n\n");
	for(x=0;x<20;x++){
		printf("Vector[%d]=\n",x+1);
		scanf("%d", &A[x]);
	}
	
	for(x=0;x<20;x++)
	{
		printf("%d\n", &A[x]);
	}
		
	mayor=0;
	menor=1;
	for(x=0;x<20;x++)
	{
		if(A[x]>mayor)
		{
			mayor=A[x];
		}
		if(A[x]<menor)	
		{
			menor=A[x];
		}
	}
	
	for(x=0;x<10;x++)
	{
		B[x]=(A[x+10])*mayor;
		B[x+10]=(A[x])*menor;
	}
	
	for(x=0;x<20;x++)
	{
		printf("%d\n", B[x]);
	}
	
	system("pause");
	return 0;
}
