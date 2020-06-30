#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value of a and b");// a=2,b=3
    scanf("%d%d",&a,&b);
    printf("\n before swapping the value of a and b is %d %d :",a,b );// it will print the original value of a and b 2 ,3
    a=a+b;// it gives 5
    b=a-b;// it gives 2
    a=a-b;// it gives 3
    printf("\n after swapping the value of a and b is %d %d :",a,b);// now our output of a and b is 3,2

    return 0;
}

