#include<stdio.h>
int main()
{ int n;
    scanf("%d",&n);
    int str[n+1];
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&str[i]);
    }
    int max=str[1];
    int k=1,loc=1;;
    while(k<=n)
    {if(max<str[k])
        {max=str[k];
        loc=k;}
        k=k+1;


    }

    printf("%d %d",loc,max);


    return 0;
}
