
#include <stdio.h>

int main()
{
   int a[50],s,i,k,n=0;
   scanf("%d",&s);
for(i=0;i<s;++i)
{
    scanf("%d",&a[i]);
}
for(k=0;k<s;++k)
{
   if(a[k]==k)
   {
       printf("%d ",k);
       ++n;
   }
}
if(n==0)
{
    printf("-1");
}
}
