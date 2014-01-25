#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char ss[100];
    //gets(ss);
    //stringReverse(ss);

    char s[] = "HelloHello world!";
    printf("before reverse:\n");
    printf("%s\n",s);
    printf("after reverse:\n");
    stringReverse(s);
    return 0;
}

void stringReverse(char* st)
{
    int len = strlen(st)+1,i;
    char st_rev[len];
    strcpy(st_rev,st);
    for(i = len-1;i>=0;i--)
    {
        st_rev[len-1-i]=*(st+i);
        printf("%c",*(st+i));
    }
    printf("\n");
/*    for(i=0;i<len;i++)
    {
        //printf("%c",st_rev[i]);
        printf("%c",*(st+i));
    }
    printf("\n");
*/
}

