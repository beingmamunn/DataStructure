/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include <stdio.h>
int main()
{
    int n, array[100], i, j, t, flag=0;

    printf("Number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integer number-\n", n);

    for (i=0; i<n; i++)
        scanf("%d", &array[i]);

    for (i=1; i<=n-1; i++)
    {
        t=array[i];

        for (j=i-1; j>=0; j--)
        {
            if (array[j]>t)
            {
                array[j+1]=array[j];
                flag = 1;
            }
            else
                break;
        }
        if (flag)
            array[j+1]=t;
    }

    printf("Sorted list:\n");

    for (i=0; i<=n-1; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
