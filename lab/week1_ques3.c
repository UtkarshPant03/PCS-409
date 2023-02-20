#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter length");
    int l;
    scanf("%d",&l);
    int s=0,end=sqrt(l);
    int a[l];
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key to search");
    int key;
    scanf("%d",&key);
    while(a[end]<key&&s<l)
    {
        s=end;
        end=end+sqrt(l);
        if(end>l-1)
        end=l-1;
    }
    for(int i=s;i<=end;i++)
    {
        if(a[i]==key)
        printf("element found at = %d",i+1);
    }
}
