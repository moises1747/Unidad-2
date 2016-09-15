#include <stdio.h>
#include <ctype.h> //toupper y tolower
#include <conio.h> //gotoxy

int aire[15],x=0,y,i;
char puesto[15][20],r;
float temp[15];
float far[15];

void main(void){
    do{
        printf("Ingrese el nombre del puesto del dia\n", x+1);
    	fflush(stdin);
		gets(puesto[x]);
        printf("Cual es el consumo de aire comprimido en libras\n");
        fflush(stdin);
		scanf("%d", &aire[x]);
        printf("Cual es la temperatura en centigrados\n");
	    fflush(stdin);
		scanf("%f", &temp[x]);
        x++;
        printf("Hay otro puesto de trabajo (S/N)\n");
        fflush(stdin);
		scanf("%c", &r);
        r=toupper(r);
    }while(r=='S' && x<15);
    system("cls");        
    gotoxy(8,5);
    printf("PUESTO");
    gotoxy(16,5);
    printf("CONSUMO DE AIRE");
    gotoxy(24,5);
    printf("TEMPERATURA");

    for(y=0;y<x;y++){
        gotoxy(8,8+y);
        printf("%s",puesto[y]);
        gotoxy(16,8+y);
        printf("%i",aire[y]);
        gotoxy(24,8+y);
        printf("%.2f",temp[y]);
    }

    getch();
    gotoxy(38,5);
    printf("FARENGEY");

    for(i=0;i<x;i++){												//MODIFICAR
        far[i]=((9/5*aire[i])+32);
        gotoxy(38,8+i);
        printf("%.2f", far[i]);
    }
    getch();
}
