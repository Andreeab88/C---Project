#include<stdio.h>



int main(void)
{

   int b[] = {45, 2, 3}; //tablou unidimensional


   int a[4][5] =
   {
       {13, 10,3 ,7 ,11},
       {7, 12, 11, 11, 8},
       {13, 6, 12, 13, 2},
       {13, 5, 11, 6, 2}
   };

//afisarea unui tablou bidimensional
    printf("a[0][1] = %d\r\n", a[0][1]);
    printf("a[1][2] = %d\r\n", a[1][2]);
    printf("a[3][2] = %d\r\n", a[3][2]);
    printf("a[0][4] = %d\r\n", a[0][4]);
    printf("a[2][3] = %d\r\n", a[2][3]);

    printf("modificare\r\n");

    a[0][1] = -55;
    a[3][2] = 15;
    printf("a[0][1] = %d\r\n", a[0][1]);
    printf("a[3][2] = %d\r\n", a[3][2]);


    return 0;
}
