#include <stdio.h>

int main()
{
    int t,i,compteur[10000]={0};
    int a[10000],b[10000],c,d;
    scanf("%d",&t);

    for (i=0;i<t;i++)
    {
        c=a[i];
        d=b[i];
        
        while(c%d!=0)
        {
            c+=1;
            compteur[i]++;
        }
        
        a[i]=c;
        b[i]=d;
    }

    for (i=0;i<t;i++)
    printf("%d\n",compteur[i]);
    
    return 0;
}
