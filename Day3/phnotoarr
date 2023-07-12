#include<stdio.h>
#include<stdlib.h>
int main()
{
    //null array
    int a1[10] = {};
    long int phno, rem ;
    
    printf("Enter mobile number:");
    scanf("%ld", &phno);
    
    while(phno>0){
        rem = phno%10 ;
        if(a1[rem]!= 1){
        a1[rem] = 1;}
        phno = phno/10;
    }
     for(int i = 0; i <10 ; i++){
         printf("%d", a1[i]);
     }
}
