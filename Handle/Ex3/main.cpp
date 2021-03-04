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

int sumMatrix(int d, int c, MATRIX matrix)
{
    int sum = 0;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

/*  */

void fillMatrix(int &d, int &c, MATRIX matrix)
{
    printf("Nhap so dong : ");
    scanf("%d", &d);
    printf("Nhap so cot : ");
    scanf("%d", &c);

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("matrix[%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int d, int c, MATRIX matrix)
{
    printf("\nXuat ma tran\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("matrix[%d][%d] = %d \t", d, c, matrix[i][j]);
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}

void printSumMatrix(int d, int c, MATRIX matrix)
{
    printf("Tong ma tran = %d", sumMatrix(d, c, matrix));
}

void averageMatrix(int d, int c, MATRIX matrix)
{
    int sum = sumMatrix(d, c, matrix);
    printf("\nTrung binh cong ma tran = %.2f", (float)sum / (d * c));
}

void averagePositiveNumber(int d, int c, MATRIX matrix)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] > 0)
            {
                sum += matrix[i][j];
                count++;
            }
        }
    }
    printf("\nTrung binh cong phan tu duong = %.2f", (float)sum / count);
}

void printRow(int d, int c, MATRIX matrix)
{
    int row;
    printf("\nNhap vi tri dong: ");
    scanf("%d", &row);
    printf("\nSo phan tu:\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d \t", matrix[row][i]);
    }
}

void sumColumn(int d, int c, MATRIX matrix)
{
    int col;
    printf("\nNhap vi tri cot: ");
    scanf("%d", &col);
    int sum = 0;
    for (int i = 0; i < d; i++)
    {
        // printf("%d \t", matrix[i][col]);
        sum += matrix[i][col];
    }
    printf("\nTong phan tu cua cot: %d", sum);
}

void maxMatrix(int d, int c, MATRIX matrix)
{
    int max = matrix[0][0];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }
    printf("\nPhan tu lon nhat = %d", max);
}

void solve()
{
    int d, c;
    int matrix[100][100];
    fillMatrix(d, c, matrix);
    printMatrix(d, c, matrix);
    printSumMatrix(d, c, matrix);
    averageMatrix(d, c, matrix);
    averagePositiveNumber(d, c, matrix);
    printRow(d, c, matrix);
    sumColumn(d, c, matrix);
    maxMatrix(d, c, matrix);
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
