#include<stdio.h>
#include<stdlib.h>

void print_help(void);
float calculate(float nr1, float nr2, char operation);

int main(void)
{
    //ce trebuie sa se vada intr-un program? ordinea:
float nr1, nr2, result;
char operation;

 print_help(); // afisare help

  //citire date
  printf("nr1= ");
  scanf("%f", &nr1);

  printf("nr2= ");
  scanf("%f", &nr2);

  printf("operation= ");
  scanf(" %c", &operation);

  //calculare
  result = calculate(nr1, nr2, operation);


  //afisare rezultat
printf("rezultat = %.4f", result);




    return 0;
}
 void print_help(void){
 printf("Calculator v1.1\r\n\r\n");
 printf("+ Adunare\r\n");
 printf("- Scadere\r\n");
 printf("* Inmultire\r\n");
 printf("/ Impartire\r\n");

 return;
 }

 float calculate(float nr1, float nr2, char operation)
 {
  float result = 0;

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
        if(nr2 == 0){
            printf("Impartire la 0!");
            exit(-2);
        }
      result = nr1 / nr2;
      break;
    default:
        printf("Operatia data nu se suporta!\r\n");
       exit(-1);
}


return result;
 }
