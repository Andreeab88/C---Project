#include<stdio.h>

int main(){

 float nr1, nr2, result;
 char operation; //+, -, *, /

 printf("nr1= ");
 scanf("%f", &nr1);

  printf("nr2= ");
 scanf("%f", &nr2);

  printf("operatia (+, -, *, /): ");
 scanf(" %c", &operation); //punem spatiu inainte de %c, pentru a compila corect instructiunea if else


 switch(operation)
 {
 case '+':
    result = nr1 + nr2;
    break;
case '-':
    result = nr1 - nr2;
    break;
case '*':
    result = nr1 * nr2;
    break;
case '/':
    result = nr1 / nr2;
    break;
default:
    printf("nu suport asa operatie! \r\n");

 }


  if(operation == '+')
        result = nr1+ nr2;
  else if(operation == '-')
    result = nr1- nr2;
  else if(operation == '*')
    result = nr1 * nr2;
  else if (operation == '/')
    result = nr1 / nr2;
  else
  printf("nu suport asa operatie! \r\n");

   printf("rezultat: %.3f", result);



         return 0;}
