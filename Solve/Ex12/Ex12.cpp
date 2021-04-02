/* INCLUDE FILE */
/** Include libraries of CPP */
#include <bits/stdc++.h>
/** Include my libraries */
// #include ""
/* END INCLUDE FILE */

/* ---------- | ---------- | ---------- */
/* DEFINITIONS */
/** Define path file for input and output */

/** Macro definitions for maximum length of variables */
#define MAX_ARRAY 100

/* END DEFINITIONS */

/* ---------- | ---------- | ---------- */
/* NAMESPACE */
using namespace std;
/* END NAMESPACE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* DECLARE FUNCTIONS HELPER */
/*** Code at "DECLARE FUNCTION HELPER BLOCK" ***/

/* END DECLARE FUNCTIONS HELPER */

/* ---------- | ---------- | ---------- */
/* DECLARE CLASS */

/* END DECLARE CLASS */

/* ---------- | ---------- | ---------- */
/* DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */
/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillMatrix(int &row, int &col, int **arr);
void printMatrix(int row, int col, int **arr);
void sumMatrix(int row, int col, int **arr);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int row, col;
    int **arr = new int *[MAX_ARRAY];
    for (int i = 0; i < MAX_ARRAY; i++)
    {
        arr[i] = new int[MAX_ARRAY];
    }

    fillMatrix(row, col, arr);
    printMatrix(row, col, arr);
    sumMatrix(row, col, arr);

    for (int i = 0; i < MAX_ARRAY; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return;
}
/* END SOLVE */

/* ---------- | ---------- | ---------- */
/* MAIN */
int main()
{
    solve();

    fclose(stdin);
    fclose(stdout);
    return 0;
}
/* END MAIN*/

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* FUNCTIONS HELPER */
/*** Declare at "DECLARE FUNCTION HELPER BLOCK" ***/
void fillMatrix(int &row, int &col, int **arr)
{
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Nhap arr[%d][%d]: ", i, j);
            int temp;
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }
}
void printMatrix(int row, int col, int **arr)
{
    printf("\nMa tran = \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int row, int col, int **arr)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("\nTong ma tran = %d", sum);
}
/* END FUNTIONS HELPER */
