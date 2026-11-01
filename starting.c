#include <stdio.h>
int main(void)
{
    char a[50];
    printf("Hello!\n");
    scanf("%50s\n", a);
    printf("welcome to my program %s\n", a);

    int b;
    printf("Enter a number: ");
    scanf("%d\n", &b);
    printf("You entered: %d\n", b);
    return 0;
}