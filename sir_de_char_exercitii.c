#include<stdio.h>
#include<stdbool.h>

//trebuie sa facem un program in care sa introducem un sir de caractere si trebuie sa verificam daca contine spatii libere
//trb sa verif daca sirul are numere
//trb sa scriem sirul invers

bool has_spaces(char s[]);
bool has_numbers(char s[]);
void print_reversed(char s[]);
unsigned str_length(char s[]); //pentru a calcula marimea sirului


int main(){

char str[256];

printf("Introdu sirul de caractere: ");
gets(str);

printf("ai introdus: %s\r\n", str);


if(has_spaces(str))
    printf("Sirul are spatii!\r\n");
else
    printf("Sirul nu are spatii!\r\n");



if (has_numbers(str))
     printf("Sirul contine numere!\r\n");
else
    printf("Sirul nu contine numere!\r\n");


    print_reversed(str);

return 0;
}



bool has_spaces(char s[])
{
  int i;

  for(i=0; s[i] != '\0'; i++)
  {

      if(s[i] == ' ')
        return true;
  }
    return false;
}


bool has_numbers(char s[])
{
   int i;
   for(i = 0; s[i] != 0; i++)
   {
       if(s[i] >= 48 && s[i] <= 57) //48 si 57 sunt limitele codurilor pentru numere, din tabela  ASCII
        return true;
   }
    return false;
}


void print_reversed(char s[])
{
    int i;
    unsigned length = str_length(s);

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}


//pentru a determina marimea sirului:
unsigned str_length(char s[])
{
    int i = 0;
    while(s[i] != '\0')
        i++;

    return i;

}
