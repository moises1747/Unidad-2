#include <stdio.h>
		
void main(){
	int vec[20];
	int x;
		
	for(x=0;x<20;x++){
	printf("v[%d]=\n",x);
		scanf("%d", &vec[x]);
	}
	for(x=0;x<20;x++){
		printf("\n%d",vec[x]);
	}
}
