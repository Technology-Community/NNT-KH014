/*Ex4 - Page 9*/
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

void fillMatrix(int &row, int &column, MATRIX matrix)
{
    printf("Nhap so dong : ");
    scanf("%d", &row);
    printf("Nhap so cot : ");
    scanf("%d", &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
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
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int rowFirst, int columnFirst, MATRIX matrixFirst, int rowSecond, int columnSecond, MATRIX matrixSecond)
{
    if (rowFirst != rowSecond || columnFirst != columnSecond)
    {
        printf("\nHai ma tran khong cung kich co!");
        return;
    }
    else
    {
        int resultMatrix[100][100];
        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < columnFirst; j++)
            {
                resultMatrix[i][j] = matrixFirst[i][j] + matrixSecond[i][j];
            }
        }
        printf("\nTong 2 ma tran:");
        printMatrix(rowFirst, columnFirst, resultMatrix);
        return;
    }
    return;
}

void multiplyMatrix(int rowFirst, int columnFirst, MATRIX matrixFirst, int rowSecond, int columnSecond, MATRIX matrixSecond)
{
    int resultMatrix[100][100];
    if (columnFirst == rowSecond)
    {
        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < columnSecond; j++)
            {
                resultMatrix[i][j] = 0;
                for (int k = 0; k < rowSecond; k++)
                {
                    resultMatrix[i][j] += matrixFirst[i][k] * matrixSecond[k][j];
                }
            }
        }
        printf("\nTich hai ma tran:");
        printMatrix(rowFirst, columnSecond, resultMatrix);
        return;
    }
    else
    {
        printf("\nKhong the nhan hai ma tran");
        return;
    }
    return;
}

void solve()
{
    printf("\n--- MATRIX FIRST ---\n");
    int rowFirst, columnFirst;
    int matrixFirst[100][100];
    fillMatrix(rowFirst, columnFirst, matrixFirst);
    printMatrix(rowFirst, columnFirst, matrixFirst);

    printf("\n--- MATRIX SECOND ---\n");
    int rowSecond, columnSecond;
    int matrixSecond[100][100];
    fillMatrix(rowSecond, columnSecond, matrixSecond);
    printMatrix(rowSecond, columnSecond, matrixSecond);

    addMatrix(rowFirst, columnFirst, matrixFirst, rowSecond, columnSecond, matrixSecond);
    multiplyMatrix(rowFirst, columnFirst, matrixFirst, rowSecond, columnSecond, matrixSecond);
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
