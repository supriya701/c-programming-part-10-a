#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 0,b = 0,i = 0, n;
    char num[100];
   
    printf("Enter the number:");
    scanf("%s",num);    //get the input up to 100 digit
    n = strlen(num);
    while(n>0)
    {
        if(i==0)         //add even digits when no of digit is even and vise versa
        {
            a+=num[n-1]-48;
            n--;
            i=1;
        }
        else            //add odd digits when no of digit is even and vice versa
        {
            b+=num[n-1]-48;
            n--;
            i=0;
        }
    }
    printf("%d",abs(a-b)); //print the difference of odd and even

    return 0;
}
