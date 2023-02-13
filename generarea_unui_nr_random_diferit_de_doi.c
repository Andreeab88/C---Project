#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int get_random_int(int limit);



int main(void){

int random = -1;

srand(time(NULL)); //facem initializarea functiei random, care se face o singura data folosind functia srand()-seed random (seed=samanta)

 do
 {
  random = get_random_int(10);
   printf("random = %d\r\n", random);
  }while(random != 2);


return 0;
}


int get_random_int(int limit)
{
    int result;
    result = rand() % limit;  //in result pastram numerele random generate folosind functia rand()
                        //am generat un numar random pana la 4 (rand() % 5)
return result;
}



