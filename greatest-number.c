#include <stdio.h>
int main ()
{
int a, b;
printf("give me two number a and b.");
scanf("%d\n %d\n", &a, &b);
if (a>b){
    printf("%d is the greatest number.", a);
}
else
{
    printf("%d is the greatest number.", b);
};
return 0;
}