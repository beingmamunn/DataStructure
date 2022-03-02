/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include <stdio.h>
int main()
{
    int array[100], n, i, j, position, t;

    printf("Number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integer number-\n", n);

    for (i=0; i<n; i++)
        scanf("%d", &array[i]);

    for (i=0; i<(n-1); i++)
    {
        position=i;

        for (j=i+1; j<n; j++)
        {
            if (array[position]>array[j])
                position=j;
        }
        if (position!=i)
        {
            t=array[i];
            array[i]=array[position];
            array[position]=t;
        }
    }

    printf("Sorted list:\n");

    for (i=0; i<n; i++)
        printf("%d\n", array[i]);

    return 0;
}
