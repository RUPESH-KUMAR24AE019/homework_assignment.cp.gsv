//prime no

#include <stdio.h>
int main()
{
    int a;
    printf("enter the the number you want to check whether it is prime or not: ");
    scanf("%d",&a);
    int c= 0;
    for(int i=2;i<a;i++)

    {
        if (a%i==0)
        {
            c  += 1;
        }
    }
    if (c > 0){
        printf("not prime");
    }
    else{
        printf("prime");
    }
    return 0;
}