#include <stdio.h>
int isSymmetric(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int main()
{
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (isSymmetric(matrix, n))
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}
