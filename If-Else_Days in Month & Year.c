#include <stdio.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int month,year;
    scanf("%d\n%d",&month,&year);
    
    if(month<1 || month>12)
        printf("Invalid Month\n");
    if(year<1)
        printf("Invalid Year");
 
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        if(month==2 && year>0){
            printf("29");
        }
        else{
            if((month==1||month==3||month==5||month==7||month==8||month==10||month==12) && year>0){
                printf("31");
            }
            else if((month==4||month==6||month==9||month==11) && year>0){
                printf("30");
            }
        }
    }
    else
    {
        if(month==2 && year>0){
            printf("28");
        }
        else{
            if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&& year>0){
                printf("31");
            }
            else if((month==4||month==6||month==9||month==11)&& year>0){
                printf("30");
            }
        }
    }
        
    
    
    
    return 0;
}