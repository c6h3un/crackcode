#include <stdio.h>
#include <stdlib.h>
/* 0105 cracking code
Write a method to replace all spaces in a string with ¡¥%20¡¦.
*/
int main()
{
    char str1[]="test the string";
    replaceSpace(str1);
}
void replaceSpace(char* str)
{
    char str1[strlen(str)];
    strcpy(str1,str);
    int i=0,j;
    printf("input:\t%s\n",str1);
    while(*str)
    {
        if(*str++ == ' ')
        {
            i++;
        }
    }
    char str_tmp[strlen(str1)+i*2];
    i=0;
    for(j=0;j<strlen(str1);j++)
    {
        if(str1[j] == ' ')
        {
            str_tmp[i++] = '%';
            str_tmp[i++] = '2';
            str_tmp[i++] = '0';
        }
        else
        {
            str_tmp[i++] = str1[j];
        }
    }
    printf("output:\t%s\n",str_tmp);
}
