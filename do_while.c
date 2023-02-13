#include <stdio.h>
#include<conio.h>

int main()
{
   int i = 5;


   while(i<3)
   {

       printf("sunt in while\r\n");
       i++;
   }
   //nu se afiseaza niciodata daca conditia e falsa, pentru ca la while prima data se verifica conditia


    do
    {

       printf("sunt in do while\r\n");
       i++;
    }while (i<3);
//do while se afiseaza cel putin o data, pana cand se verifica conditia, daca e falsa nu se mai afiseaza!


//ex1
char input = 0;
printf("Introdu o litera: \r\n");
do
{

    printf("q - exit\r\n");
    scanf(" %c", &input);
}while(input != 'q');



// ex2 - folosind libraria "conio.h"


printf("Introdu o litera: \r\n");
do
{

    printf("q - exit\r\n");
    input = getch();
}while(input != 'q');




    return 0;

}
