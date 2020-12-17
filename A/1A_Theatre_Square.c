#include<stdio.h>
#include<math.h>

int main()
{
    double n,m,a;
    unsigned long long int num;
    
    scanf("%lf %lf %lf",&n,&m,&a);
    num=ceil(n/a)*ceil(m/a);
    
    printf("%llu\n",num);
}
