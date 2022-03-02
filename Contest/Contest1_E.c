//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
     int a, b, n;
     scanf("%d %d %d", &n, &a, &b);
     if(a+b<n)
          printf("%d\n", b+1);
     else printf("%d\n", n-a);

     return 0;
}
