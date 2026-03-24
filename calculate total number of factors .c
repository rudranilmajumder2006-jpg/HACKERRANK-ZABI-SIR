#include <stdio.h>

int main()
{
    int count = 0;
    int N;
    scanf("%d",&N);
    for(int i=1;i*i<=N;i++)
    {
        count++;
    }
    
    printf("%d",count);

    return 0;
}
