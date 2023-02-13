#include<stdio.h>

int max(int a, int b);


void print_something (){
printf("Hello world!\r\n");
printf("I love to work!\r\n");
printf("Goodbye world!\r\n");

return;
}

int increment(int to_increment, int x){
int result;
result = to_increment + x;

return result;
}


/*functia increment mai poate fi scrisa simplificat:

int increment(int to_increment, int x){
 return to_increment + x;
;
} */

char get_some_char(){
    printf("Eu sunt in functia get_some_char.\r\n");
return 'W';
}



int main(){

char c;

c = get_some_char();
printf("%c\r\n", c);


//ex2

int i= 10;

i = increment(i, 4);
printf("i = %d\r\n", i);


// functia  void:

  print_something();


  int result1 = max(10, 100);
  printf("%d", result1);

return 0;
}


//cu alte programe, daca se scrie o functie dupa functia principala main, programul nu o gaseste, de aceea trebuie sa fie declarat antetul functiei sus, pentru a spune compilatorului ca exista functia.
int max(int a, int b){
if(a>b){
    return a;
} else {
return b;
}


}
