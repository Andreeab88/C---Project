#include <stdio.h>

int main(){

unsigned int v1;
float f1;


v1 = 20 + 4000;//mai intai se va face adunarea, apoi operatia de atribuire
printf("v1 = %u\n\n", v1);


f1 = 4.25 * 3;
printf("f1 = %f\n\n", f1);


f1 = 4.25 / 3;
printf("f1 = %.2f\n\n", f1);

f1 = 2 + 2 * 2;
printf("f1 = %.5f\n\n", f1);

f1 = ((2 + 2)-2) * 2;
printf("f1 = %.2f\n\n", f1);

f1 = ((2.31 + 2.01)-2.99) * 2.5;
printf("f1 = %.2f\n\n", f1);


//v1 = 10 / 0;;
//printf("v1 = %u\n\n", v1);

//f1 = 32.14 / 0;
//printf("f1 = %.2f\n\n", f1);


int v2 = 12;

v2 = v2 + 1;    //incrementarea cu 1
printf("v2 = %d\r\n", v2);
v2 = v2 + 1;
printf("v2 = %d\r\n", v2);

v2 = v2 - 1;    //decrementarea cu 1
printf("v2 = %d\r\n", v2);
v2 = v2 - 1;
printf("v2 = %d\r\n\n", v2);


int v3 = 12, v4 = -10, result;

result = v3 + v4;
printf ("v3 + v4 = %d\n", result);

result = v3 - v4;
printf ("v3 - v4 = %d\n", result);


result = v3 * v4;
printf ("v3 * v4 = %d\n", result);

result = v3 / v4;
printf ("v3 / v4 = %d\n", result);

result = v3 % v4;
printf ("v3 %% v4 = %d\n", result);
return 0;}

