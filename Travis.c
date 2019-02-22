#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[100],i,j,n,REcount=0,FEcount=0,level=0;
  printf("Enter the no. of samples :");
  scanf("%d",&n);
  printf("Enter the samples :");
  for(i=0;i<n;i++)
  {

      scanf("%d",&a[i]);
  }
  /*for(i=0;i<n;i++)
    printf("%d ",a[i]);*/

  for(i=0;i<n-1;i++)
  {
          if(a[i]==1 && a[i+1]==0)
          {
              //FEcount=0;
              FEcount++;
          }
          else if(a[i]==0 && a[i+1]==1)
          {

               //REcount=0;
              REcount++;
          }
          else{
             //level=0;
            level++;
          }
      }

  printf("No.of rising edge : %d",REcount);
  printf("No.of falling edge : %d",FEcount);
  printf("No.of levels : %d",level);
  return 0;

}
