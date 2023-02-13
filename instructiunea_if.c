#include<stdio.h>
#include<stdbool.h>

int main(){


//exemplu metoda de comparare fara a folosi instructiunea if
int y = 11;
int result = y == 12;
printf("%d\r\n", result);



//metoda de comparare cu instructiunea if
int x;
printf("introdu x: ");
scanf("%d", &x);

if(x>5){
    printf("Numarul este mai mare decat 5\r\n");
}else{printf("Numarul este mai mic decat 5\r\n");}


if(false){
    printf("numarul este false");
}

// calculul indicelui corporal:

 float weight, height, bmi;

 printf("introdu greutatea ta (kg): ");
 scanf("%f", &weight);

 printf("introdu inaltimea ta (m): ");
 scanf("%f", &height);

 bmi = weight / (height * height);
 printf("body mass index = %.2f\r\n", bmi);

 if(bmi > 25){
    printf("ai depasit norma!\r\n");
 }else{ printf("nu ai depasit norma!\r\n");}


 //else if

 if(bmi>34.9)
    printf("clasa: extrem de obez");
else if(bmi>29.9)
    printf("clasa: obez");
 else if(bmi>24.9)
    printf("clasa: supraponderat");
 else if (bmi>18.5)
    printf("clasa: normal");
 else
    printf("clasa: subponderat");


return 0;}
