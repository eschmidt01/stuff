#include <stdio.h>
//return 1 is perfect number either return 0
int isPerfect(int num)
{
    int i,sum = 0;
    // Calculate sum of all proper divisors
    for(i = 1; i <= num / 2; i++)
    {
        //if i is a proper divisor of num
        if(num%i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}
int main()
{
    int num, i;
    printf("Enter number = ");
    scanf("%d",&num);
    printf("List of Perfect Numbers from %d to %d are \n",1,num);
    for(i = 1; i <= num; i++)
    {
        if(isPerfect(i))
        {
            printf("%ld ",i);
        }
    }
    return 0;
}