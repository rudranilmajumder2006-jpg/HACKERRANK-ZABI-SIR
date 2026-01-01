#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int h,t,grade;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    
    
    if(h>50 && c<0.7 && t>5600){
        grade = 10;
        }
    else if(h>50 && c<0.7){
        grade = 9;
    }
    else if(c<0.7 && t>5600){
        grade = 8;
    }
    else if(h>50 && t>5600){
        grade = 7;
    }
    else if(h>50 || c<0.7 || t>5600){
        grade = 6;
    }
    else{
        grade = 5;
    }
    
    printf("The grade of the steel is: %d\n",grade);
    
    if(grade==6){
        printf("Only one condition met.");
    }
    else if(grade==9||grade==8||grade==7){
        printf("Two conditions met.");
    }
    else if(grade==10){
        printf("All of the conditions met.");
    }
    else if(grade==5){
        printf("None of the conditions met.");
    }

    
    
    return 0;
}
