#include<stdio.h>

int main(void){

    int i, j;
    int sum;
    int size = 4;
    short a[4][4] =
   {
      {98, 141, 32, -5},
      {31, 6, 8, 15},
      {-2, 90, 32, -141},
      {0, 52, 77, 24}
    };



for(i = 0; i < 4; i++)
{
    for(j = 0; j < 4; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\r\n");
}

printf("\n\n");

for(i = 0; i < 4; i++)
{
    for(j = 0; j < 4; j++)
    {
        printf("%d ", a[j][i]);
    }
    printf("\r\n");
}

printf("\n\n");


//afisarea numerelor de pe diagonala principala
for(i = 0; i < 4; i++){
    printf("%d ", a[i][i]);
}

printf("\n\n");

//calculul sumei numerelor de pe diagonala principala
sum = 0;
for(i = 0; i < 4; i++)
{
    sum = sum + a[i][i];
}

printf("Suma numerelor de pe diagonala principala = %d\r\n", sum);

printf("\n\n");


//afisarea numerelor de pe diagonala secundara
for(i = 0; i < size; i++){
    printf("%d ", a[size - 1 - i][i]);
}

printf("\n\n");


//calculul sumei numerelor de pe diagonala principala
sum = 0;
for(i = 0; i < size; i++)
{
    if(a[size - 1 - i][i] > 0)
    {
     sum += a[size - 1 - i][i];
    }

}

printf("Suma numerelor > 0 de pe diagonala secundara = %d\r\n", sum);

printf("\n\n");



return 0;
}
