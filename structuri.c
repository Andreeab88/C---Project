#include<stdio.h>
#include<string.h>

typedef struct Student {
  unsigned varsta;
  char nume[30];
} Student;  //cu typedef - se inlocuieste struct Student cu Student


typedef struct Book{
char titlu[50];
char autor[40];
int code;
}Book;

int main(void){

 Student s1; //crearea primei variabilei s1, de tip student
 Student s2;


s1.varsta = 19;
strcpy(s1.nume, "Gheorghe");

printf("%s are %u ani.\r\n", s1.nume, s1.varsta);




Book book1;
Book book2;

printf("Introdu titlul cartii: ");
gets(book1.titlu);

printf("Introdu autorul cartii: ");
gets(book1.autor);

printf("Introdu codul cartii: ");
scanf("%d", &book1.code);

printf("Cartea: %s, de %s. (Cod %d)\r\n", book1.titlu, book1.autor, book1.code);

book2 = book1;
printf("Cartea: %s, de %s. (Cod %d)\r\n", book2.titlu, book2.autor, book2.code);


book1.code = 888; //nu i se atribuie acest cod, se pastreaza ce este intrdus de la tastatura
printf("Cartea: %s, de %s. (Cod %d)\r\n", book2.titlu, book2.autor, book2.code);

return 0;
}
