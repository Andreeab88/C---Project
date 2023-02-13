#include<stdio.h>


void read_array(int a[],int size);
void print_array(int a[],int size);

int main(void)
{
    //ex1
   short arr[] = {132, 101, 433, 999, -1};
   int j;

   for(j = 0; j < 5; j++)
   {
       printf("%d | ", arr[j]); // | inseamna spatiu
   }


//ex2
int size;

printf("introdu marimea tabloului: ");
scanf("%d", &size);

int a[size];
read_array(a, size);
print_array(a, size);

return 0;
}


void read_array(int a[],int size)
{
    int i;
for(i = 0; i < size; i++)
{
    printf("introdu a[%d] = ", i);
    scanf("%d", &a[i]);
}

}

void print_array(int a[],int size)
{
  int i;

printf("**************\r\n");
for(i = 0; i < size; i++)
{
    printf("a[%d] = %d\r\n", i, a[i]);

}
}
