
#include <stdio.h>

int main()
{
   int a[50],s,i,k,j,n=0;
   scanf("%d",&s);
for(i=0;i<s;++i)
{
    scanf("%d",&a[i]);
}
for(k=0;k<s;++k)
{
   for(j=0;j<s;++j)
   {
      if(a[k]==a[j])
      {
          ++n;
      }
   }
   if(n==1)
   {
       printf("%d",a[k]);
   }
   n=0;
}
}
