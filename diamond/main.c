#include<stdio.h>
int main (void){
    int i=1,j=1;
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=9;j++){
            printf("");
        }
        for(j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for (i=9;i>0;i--)
    {
        for(j=1;j<=9;j++){
            printf("");
        }
        for(j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
}

