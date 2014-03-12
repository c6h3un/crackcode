#include <stdio.h>
#include <stdlib.h>
/* 0103 cracking code
Design an algorithm and write code to remove the duplicate characters in a string
 without using any additional buffer.
 NOTE: One or two additional variables are fine.  An extra copy of the array is not.
Write the test cases for this method.
*/
void rmovDup(char s[]);
int main()
{
    char str1[]="aaba";
    char str2[]="abcdefasdf";
    char str3[]="aaa";  //wrong!!!!
    rmovDup(str1);
    rmovDup(str2);
    rmovDup(str3);
}

void rmovDup(char s[])
{
    printf("Before:\t%s\n",s);
    char ch_tmp;
    int i=0,j,k,ed = strlen(s);
    while(s[i]!='\0')
    {
        ch_tmp=s[i];
        for(j=i+1;j<ed;j++)
        {
            if(s[j]== ch_tmp)
            {
                for(k=j;k<ed;k++)
                {
                    s[k]=s[k+1];
                }
                ed--;
            }
        }
        i++;
    }
    printf("after:\t");
    for(i=0;i<ed;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");

}
