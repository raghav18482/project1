#include<stdio.h>
#include<string.h>
int findmax()
{
    for(i=1;i<n;i++)
    {
        if(a[0]<=a[i])
          a[0]=a[i];
        return a[0];
    }
}
void main()
{
    int a[30],n;
    printf("no.:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[n]);
    printf("%d",findmax());

}