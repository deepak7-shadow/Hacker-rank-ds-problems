#include <stdio.h>
#include <stdlib.h>

int *reverseArray(int a_count, int *a, int *result_count)
{
    *result_count = a_count;

    int *result = malloc(a_count * sizeof(int));

    for (int i = 0; i < a_count; i++)
    {
        result[i] = a[a_count - 1 - i];
    }

    return result;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result_count;

    int *result = reverseArray(n, a, &result_count);

    printf("Reversed array: ");
    for (int i = 0; i < result_count; i++)
    {
        printf("%d ", result[i]);
    }

    free(a);
    free(result);

    return 0;
}