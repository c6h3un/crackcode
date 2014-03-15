#include <stdio.h>
#include <stdlib.h>
/* 0106 cracking code
Given an image represented by an NxN matrix,
where each pixel in the image is 4 bytes,
 write a method to rotate the image by 90 degrees.
Can you do this in place?
*/
int main()
{
    //int n=5;
    int matrix[5][5]={{1,2,3,4,5},
    {6,7,8,9,10},{11,12,13,14,15},
    {16,17,18,19,20},{21,22,23,24,25}};
    int i,j,tmp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("After rotate:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<ceil(5/2);i++)
        {
            tmp = matrix[i][j];
            matrix[i][j] = matrix[4-i][j];
            matrix[4-i][j] = tmp;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
