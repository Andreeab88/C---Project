#include<stdio.h>



int main(){

int i;

i = 0; //instructiunea1

while(i < 5) //conditia
{

    printf("i este %d\r\n\n", i);

    i++;  // post instructiunea
}


for(i = 0; i<5; i++)  // while~~for
{
  printf("i este %d\r\n", i);
}



//ex cu for, folosind decrementarea
for(i = 10; i>5; i--, printf("ok\r\n"))
{
  printf("i este %d\r\n", i);
}


//ex
for(i = 10; i>5; i--)
{
  if(i == 9)
    continue;
  if(i % 2 != 0) //conditia pentru numere impare
    break;
  printf("i este %d\r\n", i);
}

//for(instructiunea1; conditie; post-instructiunea) //in pseudocod
//{
    //bloc
//}

return 0;}
