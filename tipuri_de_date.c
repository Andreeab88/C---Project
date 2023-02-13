#include <stdio.h>

// sizeof()

/*
int -2147483648 ...   +2147483647, %d, 4 byte
  %d
*/

int main(){

int nr;

nr = -2147483648;
printf("min int is %d\r\n", nr);
nr = 2147483647;
printf("max int is %d\r\n\n", nr);

//WARNING - WOVERFLOW -am depasit limitele => totusi compilatorul continua programul
nr = -2147483649;
printf("min int is %d\r\n", nr);
nr = 2147483648;
printf("max int is %d\r\n", nr);


nr=1;
printf("size of nr(int) is %d bytes\n\n", sizeof(nr));



// unsigned int = 0...4294967295, %u, 4 byte

unsigned int u_nr;

u_nr = 4294967295;
printf("max u int is %u\r\n", u_nr);
u_nr = 0;
printf("min u int is %u\r\n", u_nr);

printf("size of unsigned int is %d bytes\r\n\n", sizeof(u_nr));


//short int = -32768...+32767, %hi, 2 byte

short nr1;

nr=-32768;
printf("max of short is %hi\r\n", nr1);
nr=32767;
printf("min of short is %hi\r\n", nr1);
printf("size of short int is %hi bytes\r\n\n", sizeof(nr1));

//unsigned short int = 0....65535

unsigned short nr2;
nr2 = 0;
printf("unsigned short min value is %hu\r\n", nr2);
nr2 = 65535;
printf("unsigned short min value is %hu\r\n", nr2);
printf("size of unsigned short int is %hu bytes\r\n\n", sizeof(nr2));


long nr3;
nr3 = 11231231;
printf("nr is %li\r\n", nr3);
printf("size of long is %d\r\n\n", sizeof(nr));


long long int nr4;
nr4 = -9223372036854775808;
printf("max u long long nr is %lli\r\n", nr4);
nr4=9223372036854775807;
printf("min u long long nr  is %lli\r\n", nr4);
printf("size u long long nr is %lli bytes\r\n\n", sizeof(nr4));



unsigned long long int nr5;
nr5 = 0;
printf("max u unsigned long long nr is %llu\r\n", nr5);
nr4=18446744073709551615;
printf("min u unsigned long long nr  is %llu\r\n", nr5);
printf("size u unsigned long long nr is %llu bytes\r\n\n", sizeof(nr5));


/* float - numere cu virgula
    %f, 4 bytes */

 float my_float;
 my_float = 3.14;
 printf("my float is %f\n", my_float);
printf("my float is %.2f\n", my_float);//afiseaza dupa virgula 2 cifre
printf("my float is %.7f\r\n\n", my_float);//a7a cifra o rotunjeste, nu e scrisa exact. De aceea avem nevoie sa folosim double!



/* double - numere cu virgula, precizie dubla
%lf, 8 bytes */


double my_double;
 my_double = 3.1415926535897932;
 printf("my double is %f\n", my_double);
 printf("my double is %.7f\n", my_double);
 printf("my double is %.16f\n\n", my_double);//de la al 16-lea nr nu mai este cu precizie



 /* char - pentru stocarea caracterelor (si celor din tabela ASCII)
 %c, 1 byte - cel mai econom tip de date
 -128....+128    */

 char b,c;

 b = '-';
 c  ='A';
  printf("caracterul este %c\r\n", c);
 printf("caracterul este %c%c\r\n", b, c);
 printf("size of char este %c\r\n", sizeof(c));
 printf("size of char este %d\r\n", sizeof(c));
 c = 65;
 printf("caracterul este %c\r\n", c);
 c = 68;
 printf("caracterul este %c\r\n", c);
 c = 88;
 printf("caracterul este %c\r\n", c);
 c = 'X';
 printf("caracterul este %c\r\n", c);
c = 'X';
 printf("caracterul este %d\r\n", c);


return 0;}
