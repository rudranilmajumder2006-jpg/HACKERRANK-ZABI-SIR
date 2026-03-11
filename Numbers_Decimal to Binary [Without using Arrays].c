void printBinary(int n) 
    {
        if(n==0)
        return;
        printBinary(n/2);
        printf("%d", n % 2);
    }

int main() {
    int N;
    scanf("%d", &N);

    printf("Binary equivalent of %d: ", N);

    if (N == 0) {
        printf("0");
    } else {
        printBinary(N);
    }

    return 0;
}