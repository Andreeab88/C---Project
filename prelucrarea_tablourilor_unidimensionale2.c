#include<stdio.h>



int main(void){

int a[6] =  {35, 0, 100, -2, -7, 11};
//min - ?
//max = ?

int i;
int min = a[0]; //presupunem ca min este a[0] (primul element, care va fi comparat cu restul)
int max = a[0];

for(i = 1; i < 6; i++) //incepem de la i=1, pentru a nu compara 35 cu el insusi
{
    if(a[i] > max)
        max = a[i];
    if(a[i] < min)
        min = a[i];
}

printf("min = %d\r\n", min);
printf("max = %d\r\n", max);



return 0;
}
