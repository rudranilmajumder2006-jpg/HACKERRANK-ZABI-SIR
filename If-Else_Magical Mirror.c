#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,condition1,condition2,condition3;
    
    scanf("%d",&n);

    condition1 = (n%2==0 && n>10);
    condition2 = (n>15 && n%3==0);
    condition3 = (n%7==0);
    
    if(n>0){
    
            if(condition1 && condition2 && condition3){
            printf("The verdict for the number %d is: SUPERNATURAL",n);
            }

            else if((condition1 && condition2)||(condition2 && condition3)||(condition1 && condition3)){
            printf("The verdict for the number %d is: MIRACULOUS",n);
            }

            else if(condition1 || condition2 || condition3){
            printf("The verdict for the number %d is: MAGICAL",n);
            }

            else if (!(condition1 || condition2 || condition3)){
            printf("The verdict for the number %d is: NORMAL",n);
            }
    }
    
    else{
            printf("The verdict for the number %d is: INVALID",n);
    }

    return 0;
}