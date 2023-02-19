#include <stdio.h>
#include <conio.h>
#include <conio.h>
int main()
{
    char name[] = "";
    char ch;

    printf("Hello what is your name:\n");
    scanf("%s", &name);
    printf("Good morning Mr %s\n", name);
    printf("Do you want to take admission in our college?");
    scanf("%s", &ch);
    switch (ch)
    {
    case 'y':
        num();
        break;

    default:
        printf("Invalid response");
        break;
    }
    printf("Thank you for joining DVC\n");
    clrsc();

    printf("According to the above mentioned data");
    printf("Name:%s", name);

    return 0;
}

int num()
{
    int num;
    printf("Please tell your contact number");
    scanf("%d", &num);
}