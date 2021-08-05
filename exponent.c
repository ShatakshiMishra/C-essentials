#include <stdio.h>
int pow1(int m,int n)
{
    if(n==0)
    return 1;
    else
    return pow1(m,n-1)*m;
}
int pow2(int m,int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return pow2(m*m,n/2);
    return m*pow2(m*n,(n-1)/2);
}
int main() {
    // Write C code here
    int p;
   p= pow1(2,8);
   printf("%d  ",p);
   p=pow2(2,9);
    printf("%d",p);
    return 0;
}
