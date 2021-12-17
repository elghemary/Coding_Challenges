#include <stdio.h>

int main()
{
    int t,a,b;

    scanf("%d",&t);

    while(t!=0&&t--)
    {
        scanf("%d %d",&a,&b);
        if(a%b!=0)
            printf("%d\n",b-a%b);
        else
            printf("0\n");
    }
} 
