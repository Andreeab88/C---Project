#include<stdio.h>


void change_me(int x[]) //nu trebuie indicata marimea tabloului!!!
{
 x[0] = 89;
 printf ("change_me s-a efectuat!\r\n");

}


int main(){


//declarare tablou si initializare elemente
//ex1
unsigned char note[5] = {10, 6, 9, 8, 4};

printf("nota1 = %d\r\n", note[0]);
printf("nota2 = %d\r\n", note[1]);
printf("nota3 = %d\r\n", note[2]);
printf("nota4 = %d\r\n", note[3]);
printf("nota5 = %d\r\n", note[4]);

//ex2
const int a[4] = {-1, 10, 4, 6};
const int b[4] = {0};

printf("a1 = %d\r\n", a[0]);
printf("a2 = %d\r\n", a[1]);
printf("a3 = %d\r\n", a[2]);
printf("a4 = %d\r\n\n", a[3]);

printf("b1 = %d\r\n", b[0]);
printf("b2 = %d\r\n", b[1]);
printf("b3 = %d\r\n", b[2]);
printf("b4 = %d\r\n\n", b[3]);


int x[4] = {7};

printf("x[0] = %d\r\n", x[0]);
change_me(x);
printf("x[0] = %d\r\n", x[0]);



return 0;
}
