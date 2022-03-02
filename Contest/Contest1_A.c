//Mamun [212-115-002(CSE-54)]

#include<stdio.h>
int main()
{
     int n;
     double i, l, rad, circle, square, area, pi;
     pi=2*acos(0.0);
     scanf("%d", &n);
     for(int i=1; i<=n;i++)
     {
          scanf("%lf", &rad);
          l=rad*2;
          square=l*l;
          circle=pi*rad*rad;
          area=square-circle;
          printf("case %d: %0.2lf\n", i, area);

     }

     return 0;
}
