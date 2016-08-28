#include <stdio.h>
#include <time.h>

int main()
{

int A[30],x;
srand(time(0));

for(x=1;x<=30;x++)
{
    A[x]=100+rand()%(999-100);
}

for(x=0;x<30;x++)
{
    printf("%i\n\n", A[x]);
}

system("pause");
return 0;
}

