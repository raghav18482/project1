#include<stdio.h>
int sum(int x,int y)
{
    int sums;
    sums=x+y;
  return sums;
}
int main()
{
    int a,b,sums;
    printf("write two no\n");
    scanf("%d %d",&a,&b);
    sums=sum(a,b);
    printf("%d",sums);
    return 0;
}