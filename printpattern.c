#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,a,b;
    scanf("%d", &n);
    a=2*n-2;
    
  	for(int i=0;i<=(a);i++)
      {    
          
      for(int j=0;j<=(a);j++)
      {
            for(int k=0;k<=a;k++)
            {
                if((i==k)||(j==k)||(i==(a-k))||(j==(a-k)))
                {
                printf("%d ",n-k);
                break;
                }
            }
          
      }
      printf("\n");
      }
      
      

    
    return 0;
}
