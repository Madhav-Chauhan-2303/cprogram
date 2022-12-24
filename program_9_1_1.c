// This program is preperd by 22CE017_madhav.
#include<stdio.h>
int main ()
{
    int n,flag =1,i;
    printf("Enter The Number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 is neither prime nor composite");
        return 0;
    }

    for( i = 2; i <= n/2; i++)
    {
        if(n % i ==0)
        {
            flag =0;
            break;
        }

    }
    if(flag==1)
    {

        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is a composite number",n);
    }
    printf("\nID:-22CE017_madhav");
    return 0;
}
