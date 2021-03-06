

/* Include File */
#include <bits/stdc++.h>
// #include ""

/* Define */

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */

typedef int MATRIX[100][100];

/*  */

void fillMatrix(int &n, MATRIX matrix)
{
    do
    {
        printf("Nhap so dong : ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrix[%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int n, MATRIX matrix)
{
    printf("\nXuat ma tran\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("matrix[%d][%d] = %d \t", d, c, matrix[i][j]);
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}

void printBorderMatrix(int n, MATRIX matrix)
{
    printf("\nCac phan tu nam tren duong bien: ");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d\t%d", matrix[i][0], matrix[i][n - 1]);
    }

    for (int j = 1; j < n - 1; j++)
    {
        printf("\t%d\t%d", matrix[0][j], matrix[n - 1][j]);
    }
}

void sumBorderMatrix(int n, MATRIX matrix)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + matrix[i][0] + matrix[i][n - 1];
    }

    for (int j = 1; j < n - 1; j++)
    {
        sum = sum + matrix[0][j] + matrix[n - 1][j];
    }
    printf("\nTong duong bien = %d", sum);
}

void checkSymmetry(int n, MATRIX matrix)
{
    int k, j;
    for (k = 0; k < n; k++)
        for (j = 0; j < n && matrix[k][j] == matrix[j][k]; j++)
            ;
    if (k == j)
    {
        printf("\nMa tran doi xung");
    }
    else
    {
        printf("\nMa tran khong doi xung");
    }
}

void solve()
{
    int n;
    int matrix[100][100];
    fillMatrix(n, matrix);
    // printMatrix(n, matrix);
    printBorderMatrix(n, matrix);
    sumBorderMatrix(n, matrix);
    checkSymmetry(n, matrix);
}

int main()
{

    solve();

    fclose(stdin);
    fclose(stdout);
    return 0;
}
