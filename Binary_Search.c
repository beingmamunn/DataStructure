/// Mamun Ahmed
/// 212-115-002
/// CSE-54

#include <stdio.h>
int main()
{
    int first, last, middle, i, n, search, array[100];

    printf("Number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integer number-\n", n);

    for (i=1; i<=n; i++)
        scanf("%d", &array[i]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first=0;
    last=n-1;
    middle=(first+last)/2;

    while (first<=last)
    {
        if (array[middle]<search)
            first=middle+1;
        else if (array[middle]==search)
        {
            printf("%d found at location %d.\n", search, middle);
            break;
        }
        else
            last=middle-1;

        middle=(first+last)/2;
    }
    if (first>last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
