#include<stdio.h>
int main()
{
printf ("Studierea printf.Lectia nr.6 \n\r123\n");

printf("%s", "Salut\n");
printf("%s. Ce faci?\n", "Salut");

printf("Salut %s!\n", "Andreea");//substituirea lui %s cu "Andreea"
printf("Salut %s, %s!\n", "Andreea", "Ioana");
printf("Eu am %d lei si %i banuti!\n", 200, 50);

printf("\tSalut tab!\r\n");
printf("        Salut space!\r\n");

printf("%4d\r\n", 123); //afisarea unui numar pe minim 4 pozitii
printf("%4d\r\n%4d", 3, 12);
printf("%5s", "hi");

return 0;
}

