/**
1.4 Write a method to decide if two strings are anagrams or not.
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void isAnagram(char* str1,char* str2);
int main()
{
    char str_test1[] = "test123";
    char str_test2[] = "321tset";
    char str_test3[] = "abcd456";
    isAnagram(str_test1,str_test2);
    isAnagram(str_test2,str_test3);
    return 0;
}

void isAnagram(char* str1,char* str2)
{
    int cha1[256]={0},cha2[256]={0};
    int len_1 = strlen(str1);
    int len_2 = strlen(str2);
    //printf("%d,%d\n",len_1,len_2);
    if(len_1 != len_2)
    {
        printf("false!!\n");
    }
    else
    {
        int i,j;
        for(i=0;i<len_1;i++)
        {
            j=(int)*(str1+i);
            cha1[j]++;
            j=(int)*(str2+i);
            cha2[j]++;
        }
        for(i=0;i<256;i++)
        {
            if(cha1[i] != cha2[i])
            {
                printf("false!!!\n");
                break;
            }
            else if(cha1[i]==cha2[i] && i==255)
            {
                printf("true!!!\n");
            }
        }
    }
    }

}
