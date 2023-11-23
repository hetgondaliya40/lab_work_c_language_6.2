#include<stdio.h>

int main()
{
    int h1=0,h2=1,h3,i=3,len;
    printf("enter length of the  fibonacci series:");
    scanf("%d",&len);
    printf("%d\n%d",h1,h2);
    while(i<=len)           
    {
              
        h1=h2;
        h2=h3;
        i++; 
		h3=h1+h2;               
        printf("\n%d",h3);                  
    }
    
}

