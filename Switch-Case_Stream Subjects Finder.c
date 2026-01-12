#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int year;char branch_code;int internship;
    scanf("%d %c",&year,&branch_code);
    
    switch(year){ 
    default:printf("-1\n");
    break;       
            
        case 1:
            
            
            printf("Physics\nChemistry\nMaths\n");
            break;
                
                
        case 2:
            
            
            switch(branch_code){
                case 'C': printf("C Programming\nComputer Organization & Architecture\nWeb Development\n");
                    break;
                case 'E': printf("Signal Processing\nLogic Design\nNetwork Analysis\n");
                    break;
                case 'M':printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                    break;
                    default: printf("-1");
                    break;
            }
            break;
            
        case 3:
            
            
            switch(branch_code){
                case 'C': printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                    break;
                case 'E': printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                    break;
                case 'M': printf("Applied Mechanics\nKinematics\nMechatronics");
                    break;
                    default: printf("-1");
                    break;
            }
            break;
            
        case 4:
            
            scanf("%d",&internship);
            switch(internship){
                case 0:
            
                    switch(branch_code){
                        case 'C': printf("Operating Systems\nComputer Networks\nCompiler Design\n");
                            break;
                        case 'E': printf("VLSI Design\nFiber-optic Communication\nDigital Electronics\n");
                            break;
                        case 'M': printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design\n");
                            break;
                        default: printf("-1");
                             break;
                    }
                    break;
                    
                case 1: printf("Enrolled into Internship Program\n"); 
                     break;
                    
                default: printf("-1\n");
                    break;
            }
       
     
    }
    
    
    return 0;
}
