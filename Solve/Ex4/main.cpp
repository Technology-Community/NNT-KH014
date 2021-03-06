/**/
/* Code by KingNNT */

/* Include File */
#include <bits/stdc++.h>
// #include ""

/* Define */

#define pathio "/mnt/LearningAndWorking/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */

typedef int MATRIX[100][100];
/*  */
long long int *sumEachRow(int n, MATRIX matrix)
{
    int index = 0;
    long long int *arraySum = new long long int[100];
    for (int i = 0; i < n; i++)
    {
        long long int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        arraySum[index] = sum;
        index++;
    }
    return arraySum;
}
/*  */

void fillMatrix(int &n, MATRIX matrix)
{
    printf("Nhap n : ");
    scanf("%d", &n);
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrix[%d][%d]", i, j);
            // scanf("%d", &matrix[i][j]);
            matrix[i][j] = rand();
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

void mainDiagonal(int n, MATRIX matrix)
{
    printf("\nDuong cheo chinh: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d \t", matrix[i][j]);
            }
        }
    }
}

void secondaryDiagonal(int n, MATRIX matrix)
{
    printf("\nDuong cheo phu: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                printf("%d \t", matrix[i][j]);
            }
        }
    }
}

void printSumRow(int n, MATRIX matrix)
{
    printf("\nNhap so dong: ");
    int row;
    scanf("%d", &row);
    long long int *arraySum = sumEachRow(n, matrix);

    printf("\nTong cac phan tu tren dong: %ld", arraySum[row]);
}

void printSumEachRow(int n, MATRIX matrix)
{
    long long int *arraySum = sumEachRow(n, matrix);
    for (int i = 0; i < n; i++)
    {
        printf("\nTong cac phan tu tren dong %d: %ld", i, arraySum[i]);
    }
}

void rowMaxSum(int n, MATRIX matrix)
{
    long long int *arraySum = sumEachRow(n, matrix);
    long long int max = arraySum[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arraySum[i])
        {
            max = arraySum[i];
        }
    }

    printf("\nCac dong co tong lon nhat: ");
    for (int i = 0; i < n; i++)
    {
        if (max == arraySum[i])
        {
            printf("%d\t", i);
        }
    }
}

void solve()
{
    int n;
    int matrix[100][100];
    fillMatrix(n, matrix);
    printMatrix(n, matrix);
    mainDiagonal(n, matrix);
    secondaryDiagonal(n, matrix);
    printSumRow(n, matrix);
    printSumEachRow(n, matrix);
    rowMaxSum(n, matrix);
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    // ios_base :: sync_with_stdio (0);
    cin.tie(0);

    solve();

    fclose(stdin);
    fclose(stdout);
    return 0;
}
