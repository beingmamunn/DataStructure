/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include <stdio.h>
int main()
{
    int array[100], n, i, j, swap;

    printf("Number of elements:\n");
    scanf("%d", &n);
    printf("Enter %d integer number-\n", n);

    for (i=0; i<n; i++)
        scanf("%d", &array[i]);

    for (i=0 ; i<n-1; i++)
    {
        for (j=0 ; j<n-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }

    printf("Sorted list:\n");

    for (i=0; i<n; i++)
        printf("%d\n", array[i]);

    return 0;
}
