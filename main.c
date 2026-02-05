#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

int main()
{
    char tecla1,tecla2;
    int cantidad,contador;
    double total;
    double beats,min,bpm;
    char tap;
    clock_t ticksini, ticksend;
    contador=0;
    printf("elejir 2 teclas:");
    tecla1=getch();
    tecla2=getch();
    printf("\n\ncantidad de pulsaciones:");
    scanf("%i",&cantidad);

    do{
    tap=getch();
    }while((tap!=tecla1)&&(tap!=tecla2));

    ticksini=clock();

    while(contador<cantidad-1)
    {
        tap=getch();
        if((tap==tecla1)||(tap==tecla2))
        {
            contador=contador+1;
        }
    }

    ticksend=clock();
    total=(double)(ticksend-ticksini)/CLOCKS_PER_SEC;

    beats=cantidad/4.0;
    min=total/60;
    bpm=beats/min;

    printf("tiempo total:%.2f",total);
    printf("\nvelocidad de tapping:%.1f bpm",bpm);

    while (1) {
    Sleep(1000);
    }

    return 0;


}
