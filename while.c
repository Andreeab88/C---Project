#include <stdio.h>


int main(){

//ex1
int counter = 0;

while(counter < 5)
{

    printf("Hello world!\r\n");
    counter++;
}


//ex2
while (1){
   printf("Hello world!\r\n");
   break;
}


//ex3
int i = 7;
while (i>0)
{

    printf("i = %d\r\n", i);
    i--;
}


//ex4
int j = 16;
while (j != 0)
{

    printf("j = %d\r\n", j);
    j = j/2;
}





return 0;
}
