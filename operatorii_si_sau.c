#include<stdio.h>

int call_me()
{

    printf("sunt in call_me\r\n");
    return 1;
}


int main(void)
{
  //SI - &&
  //SAU - ||

  //LECTII || CURATENIE => TRUE (1)

   // 1 || 0 => 1
    //0 || 1 => 1
    //1 || 1 => 1
    //0 || 0 => 0

   // lectii && curatenie => true (1)

    //1 && 1 => 1
    //0 && 1 => 0
    //1 && 1 => 0
   // 0 && 0 => 0

   //ex1
   int result = 0 || 0;
   printf("%d\r\n", result);

   //ex2
   int result1 = 0 && 0;
   printf("%d\r\n", result1);

   //ex3
   if(3>2 && 10>8)
   {
       printf("ok\r\n");
   }

   //ex4
   int x;
   printf("introdu numarul: ");
   scanf("%d", &x);

   if(x%2 == 0 && x<0)
   {
       printf("numarul este negativ si este par\r\n");
   }


   //ex5
   printf("introdu numarul: ");
   scanf("%d", &x);

   if(x%2 == 0 || x<0)
   {
       printf("numarul este negativ si este par\r\n");
   }


   //ex6

printf("introdu numarul: ");
   scanf("%d", &x);

   if(x%2 == 0 || call_me())
   {
       printf("numarul este negativ si este par\r\n");
   }



   //ex7
   int i;

   for(i = -10; i < 10; i++)
   {
       if( i % 2 != 0 && i > 0){
        printf("i = %d. KO\r\n", i);
   }
   else if(i % 2 == 0 && i < 0 )
   {
     printf("i = %d. OK\r\n", i);
   }

   }


   //ex8
    int j;

   for(j = -10; j < 10; j++)
   {
       if( j % 2 != 0 || j > 0){
        printf("j = %d. KO\r\n", j);
   }
   else if(j % 2 == 0 && j < 0 )
   {
     printf("j = %d. OK\r\n", j);
   }

   }



    return 0;
}
