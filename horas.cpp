#include "STdio.h"

#include <windows.h>

void clrscr()/*Creando funcion para limpiar pantalla.*/

{

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

COORD coord = {0, 0};

DWORD count;

CONSOLE_SCREEN_BUFFER_INFO csbi;

GetConsoleScreenBufferInfo(hStdOut, &csbi);

FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

SetConsoleCursorPosition(hStdOut, coord);

}

void main()

{

int salir,saliryesno;

salir=0;

while(salir==0){

clrscr();/*Llamando la funcion para limpiar pantalla.*/

printf("\n\t\tHORARIO\t\t\t PAGO \n\n");

printf("\t 8:00 AM - 4:00 PM\t\tPAGO BASE\n");

printf("\t 4:00 PM - 8:00 PM\t 25 POR CIENTO EXTRA\n");

printf("\t 8:00 PM - 12:00 AM\t 50 POR CIENTO EXTRA\n");

printf("\t 12:00 AM - 8:00 AM\t\tPAGO DOBLE\n\n");

int horas_trab,horas_trab25,horas_trab50,horas_doble;

float pago_base,pago_extra25,pago_extra50,pago_doble,suma_extra,suma_base,pago,sueldo_total,pago_extra;

printf("SUELDO BASE POR HORA TRABAJADA: ");

scanf("%f",&pago);

printf("\nNumero de horas trabajadas de 8:00 am a 4:00 pm: ");

scanf("%d",&horas_trab);

pago_base=(horas_trab*pago);

printf("Numero de horas trabajadas de 4:00 pm a 8:00 pm: ");

scanf("%d",&horas_trab25);

pago_extra25=(horas_trab25*(1.25)*pago);

printf("Numero de horas trabajadas de 8:00 pm a 12:00 am: ");

scanf("%d",&horas_trab50);

pago_extra50=(horas_trab50*(1.50)*pago);

printf("Numero de horas trabajadas de 12:00 am a 8:00am: ");

scanf("%d",&horas_doble);

pago_doble=(horas_doble*(2.0)*pago);

suma_base=pago*horas_trab;

suma_extra=(pago_extra25+pago_extra50+pago_doble);

sueldo_total= suma_extra+pago_base;

printf("\nEL PAGO TOTAL QUE RECIBIRA EL TRABAJADOR ES: $%.2f\n\n",sueldo_total);

printf("EL SALARIO DEL TRABAJADOR POR HORAS DE OFICINA ES: $%.2f\n",suma_base);

printf("EL SALARIO DEL TRABAJADOR POR HORAS EXTRAS ES: $%.2f\n",suma_extra);

if (suma_extra>suma_base){

printf("\nEL TRABAJADOR GANO MAS DINERO POR HORAS EXTRAS QUE POR HORAS DE OFICINA\n\n");

}

else{

if(suma_extra==suma_base){

printf("EL TRABAJADOR GANO EL MISMO SALARIO POR HORAS EXTRAS QUE POR HORAS DE OFICINA\n\n");

}

else{/*pago_base es mayor que suma_extra*/

printf("EL TRABAJADOR GANO MAS DINERO POR HORAS DE OFICINA QUE POR HORAS EXTRA\n\n");

}

}

printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");

scanf("%d",&saliryesno);

if(saliryesno==1){

salir=1;

}

}

}



