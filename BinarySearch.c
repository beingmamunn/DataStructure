#include<stdio.h>
int main()
{
     int n, i, array[100], first, last, mid, search;

     printf("Number of element:\n");
     scanf("%d", &n);

     printf("Enter %d integers:\n", n);
     for(i=0; i<n; i++)
          scanf("%d", &array[i]);

     printf("find:\n");
     scanf("%d", &search);

     first=0;
     last=n-1;
     mid=(first+last)/2;

     while(first<=last)
     {
          if(array[mid]<search)
               first=mid+1;
          else if (array[mid]==search)
          {
               printf("%d found at %d\n", search, mid+1);
               break;
          }
          else
               last=mid-1;
          mid=(first+last)/2;
     }
     if(first>last)
          printf("%d is not found in the list\n", search);

     return 0;
}
