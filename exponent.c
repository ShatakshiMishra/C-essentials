#include <stdio.h>
int poww(int m,int n)
{
    if(n==0)
    return 1;
    else
    return poww(m,n-1)*m;
}
int pow1(int m,int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return pow1(m*m,n/2);
    return m*pow1(m*n,(n-1)/2);
}
int main() {
    // Write C code here
    int p;
   p= pow1(2,8);
   printf("%d  ",p);
   p=poww(2,9);
    printf("%d",p);
    return 0;
}
