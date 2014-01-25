#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    //printf("Hello world!\n");
    char s[] = "abcdeHello world!";
    printf("%s\n",s);
    //char str[50];
    //gets(str);
    if(stringIsUnique(s) == 1)
        printf("the string is unique!\n");
    else
        printf("the string is not unique!");
    //printf("%d\n",s[0]);

    return 0;
}
/**
 *
 *  return 1 if sting is unique
 *  else return 0
 */

 int stringIsUnique(char s[])
 {
    bool boo_arr[256] ={false};
    int i;
    for(i=0;i< strlen(s);i++)
    {
        if(boo_arr[s[i]] == true){
            return 0;
        }else{
            boo_arr[s[i]]=true;
        }
    }

    return 1;
 }
