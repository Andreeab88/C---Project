#include<stdio.h>


int main(void){

int i,j;

//ex1
int a[3][2] =
{
    {13, 10},
    {7, 12},
     {13, 6}

};

//parcurgerea unui tabel bidimensional

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 2; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\r\n");
}
printf("\n\n");

//ex2
int b[3][4] =
{
    {13, 10, 2 ,1},
    {7, 12, 5, 3},
     {13, 6}

};

//parcurgerea unui tabel bidimensional

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 4; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\r\n");
}


//ex3 cu date introduse de la tastatura

int rows_size, cols_size;


printf("Introduceti numarul de randuri: ");
scanf("%d", &rows_size);

printf("Introduceti numarul de coloane: ");
scanf("%d", &cols_size);

int c[rows_size][cols_size];

for(i = 0; i < rows_size; i++)
{
    for(j = 0; j < cols_size; j++)
    {
        printf("a[%d][%d] = ", i, j);
        scanf("%d", &a[i][j]);
    }

}

printf("\r\nElementele sunt: \r\n");

for(i = 0; i < rows_size; i++)
{
    for(j = 0; j < cols_size; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\r\n");
}


return 0;
}
