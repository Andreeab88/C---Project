#include<stdio.h>
#include<string.h>


int main(void){

    char str1[20] = "Hello";
    unsigned len;
    char str2[20] = "abc";
    char str3[20] = "ABC";
    char str4[20] = "";
    char str5[20] = "I love pizza";
    char str6[20] = "Hello World!";
    char to_find = 'W';
    char str_to_find[20] = "l";
    char str7[20] = "I love ";
    char str8[20] = "pizza!";

len = strlen(str1);//string length - returneaza lungimea unui sir
printf("%u\r\n", len);


printf("%d\r\n", strcmp(str2, str3)); //string compare - compara sirurile


strcpy(str4, str5); //string copy - strcpy(destinatia, sursa)
printf("%s\r\n", str4);



if(strchr(str6, to_find) == NULL) //string character
    printf("%c nu a fost gasit in sir!\r\n", to_find);
else
     printf("%c a fost gasit in sir!\r\n", to_find);

printf("%s\r\n", strchr(str6, to_find));



printf("%s\r\n", strstr(str6, str_to_find)); //string string
if(strstr(str6, str_to_find) == NULL)
    printf("%s nu a fost gasit in sir!\r\n", str_to_find);
else
     printf("%s a fost gasit in sir!\r\n", str_to_find);



strcat(str7, str8); //string concatenare (unirea sirurilor)
printf("%s\r\n", str7);

return 0;
}
