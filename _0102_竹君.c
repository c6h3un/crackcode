#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char ss[100];
    //gets(ss);
    //stringReverse2(ss);

    char s[] = "hello world!";
    printf("before reverse:\n");
    printf("%s\n",s);
    printf("after reverse:\n");
    stringReverse2(s);
    return 0;
}
void stringReverse2(char* str)
{
    int len = strlen(str)+1,i;
    char c_tmp;
    if(len%2 == 0)
    {
        for(i =0;i<len/2;i++)
        {
            c_tmp = *(str+i);
            *(str+i) = *(str+len-1-i);
            *(str+len-1-i) =c_tmp;
            //printf("%c changes with %c\n",*(str+i),*(str+len-1-i));
        }
    }
    else
    {
        for(i =0;i<(len-1)/2;i++)
        {
            c_tmp = *(str+i);
            *(str+i) = *(str+len-1-i);
            *(str+len-1-i) =c_tmp;
            //printf("%c changes with %c\n",*(str+i),*(str+len-1-i));
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",*(str+i));
    }

}
