#include<stdio.h>
int main()
{
     int t, caseno=1, i, a, b, c, sum;
     scanf("%d", &t);
     for(i=0; i<t; i++)
     {
          scanf("%d %d %d", &a, &b, &c);
          sum=a+b+c;

          printf("Case %d: Sum of %d, %d and %d is %d\n", caseno++, a, b, c, sum);
     }
     return 0;

}
