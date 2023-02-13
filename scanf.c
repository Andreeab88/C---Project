#include<stdio.h>
int main(){

//int x;

//printf("Introdu un numar intreg: ");
//scanf("%d", &x);
//printf("Numarul introdus este %d\n\n", x);


// calculul indicelui corporal:

 float weight, height, bmi;

 printf("introdu greutatea ta (kg): ");
 scanf("%f", &weight);

 printf("introdu inaltimea ta (m): ");
 scanf("%f", &height);

 bmi = weight / (height * height);
 printf("body mass index = %.2f", bmi);

return 0;}
