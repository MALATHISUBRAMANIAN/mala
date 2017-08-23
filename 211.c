include <stdio.h>
void main()
{
    int i, n, f1 = 0, f2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", f1);
        nextTerm = f1 + f2;
        f1 = f2;
        f2 = nextTerm;
    }
    
}
