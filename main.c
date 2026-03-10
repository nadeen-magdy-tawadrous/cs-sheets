
#include <stdio.h>
int deffrance(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}
int main()
{
    printf("enter ten integers: ");
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int gratest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > gratest)
        {
            gratest = arr[i];
        }
    }
    int smallest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int difference = deffrance(gratest, smallest);
    int mode;
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        int max_count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            mode = arr[i];
        }
    }

    printf("The integers are: ");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nthe difference between the gratest and smallest integers is: %d\n", difference);
    printf("the mode of the integers is: %d\n", mode);

    return 0;
}
