#include<stdio.h>

int main(){


//ex.1

int x, y, z; //4 byti
unsigned short us = 13; //2 byti

x = y = 5;

printf("ex.1 -> introdu un numar (unsigned short): ");
scanf("%hu", &us);


printf("%d\n", us % x); //13%5=3 <=> 10/5=2.0 <=> 13-10=3
printf("x %% us = %d\n\n", x % us);


//ex.2

float f = 3.14;

printf("ex.2 -> %d\n\n", (int)f);


//ex.3

int i, res;
i = 0;
++i;

res = ++i; //i = i+1=>i=2
printf("ex.3 -> res = %d\r\n", res);
printf("i = %d\r\n", i);
res = i++;//res = 2=> i = 3
printf("res = %d\r\n", res);
printf("i = %d\r\n", i);


//ex.4

int i, res;
i = 1;
--i;//i=0

res = --i; //res=-1
printf("ex.3 -> res = %d\r\n", res);
printf("i = %d\r\n", i);
res = i--;//res = -2
printf("res = %d\r\n", res);
printf("i = %d\r\n", i);


//ex.5



return 0;
}

