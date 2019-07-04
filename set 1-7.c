/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a[50],n,i;
   scanf("%d",&n);
   for(i=0;i<n;++i)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;++i)
   {
       if(i%2==0){
           if(a[i]%2==1)
    {
        printf("%d ",a[i]);
    }}
    else{
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
        
   }
}
