#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the value of num :");
    scanf("%d",&num);
  
    for(int i=2;i<num;i++){
         if(num%i==0){
             count++;
             break;
         }
    }
  
    if(count==1){
        printf("Not prime number.\n");
    }
    else{
        printf("Prime number.\n");
    }
  
    return 0;
}
