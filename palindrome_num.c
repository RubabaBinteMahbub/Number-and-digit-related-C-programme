// Palindrome numbers are numbers with
mirror image such as 121, 474, 323 etc.
  
#include<stdio.h>
int main(){
    int num,rev=0,rem;
  
    printf("Enter the number : ");
    scanf("%d",&num);
  
    int original_num=num;

    while(num!=0){
       rem=num%10;
       rev=rev*10+rem;
       num/=10;
    }
   printf("Reversed number = %d\n",rev);

    if(original_num==rev){
        printf("%d is a palindrome number.\n",original_num);
    }
    else{
        printf("%d is not a palindrom number.\n",original_num);
    }
    
    return 0;
}
