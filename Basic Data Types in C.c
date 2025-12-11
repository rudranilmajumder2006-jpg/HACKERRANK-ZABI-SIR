#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int b;
    long long c;
    char a;
    float d;
    double e;
    scanf("%d %lld %c %f %lf",&b,&c,&a,&d,&e);
    printf("%d\n%lld\n%c\n%0.3f\n%0.9lf",b,c,a,d,e);
    return 0;
}
