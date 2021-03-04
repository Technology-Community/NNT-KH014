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

void solve()
{
    int n;
    int matrix[100][100];
    fillMatrix(n, matrix);
    printMatrix(n, matrix);
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
