#include<stdio.h>

void print_str(char s[])
{
    int i=0;
    for(i = 0; s[i] != 0; i++)
    {

        printf("%c", s[i]);
    }
}


int main(){

char x= 'A';

char str[] = {'S','a', 'l', 'u', 't', '\0'};
printf("%s\r\n\n", str);

print_str(str);
printf("Hello World!\r\n\n");









return 0;
}
