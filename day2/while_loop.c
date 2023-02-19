#include <stdio.h>
int main()
{
    int n;
    int i = 0;

    printf("Enter the number upto which you want to perform the task");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("The number is %d\n", i++);
    }

    return 0;
}