/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* INCLUDE FILE */
/** Include libraries of CPP */
#include <bits/stdc++.h>
/** Include my libraries */
// #include ""
/* END INCLUDE FILE */

/* ---------- | ---------- | ---------- */
/* DEFINITIONS */
/** Define path file for input and output */
#define pathio "/mnt/LearningAndWorking/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lf pathio "file.txt", "r+"

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
int random(int minN, int maxN);
/* ---------- | ---------- | ---------- */
/* DECLARE CLASS */

/* END DECLARE CLASS */

/* ---------- | ---------- | ---------- */
/* DECLARE STRUCT */

/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void genMatrix(int arr[MAX_ARRAY][MAX_ARRAY], int row, int col);
void saveFile(FILE *ptr, int arr[MAX_ARRAY][MAX_ARRAY], int row, int col);
void readFile(FILE *ptr, int arr[MAX_ARRAY][MAX_ARRAY], int row, int col);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve(FILE *ptr)
{
    int row = 6;
    int col = 5;
    int arr[MAX_ARRAY][MAX_ARRAY];
    int arr2[MAX_ARRAY][MAX_ARRAY];
    genMatrix(arr, row, col);
    saveFile(ptr, arr, row, col);
    readFile(ptr, arr2, row, col);
    return;
}
/* END SOLVE */

/* ---------- | ---------- | ---------- */
/* MAIN */
int main()
{
    FILE *ptr = fopen(lf);
    // ios_base :: sync_with_stdio (0);
    cin.tie(0);

    if (ptr == NULL)
    {
        printf("Khong tao duoc file");
    }
    else
    {
        solve(ptr);
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
/* END MAIN*/

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* FUNCTIONS HELPER */
/*** Declare at "DECLARE FUNCTION HELPER BLOCK" ***/
int random(int minN, int maxN)
{
    return minN + rand() % (maxN + 1 - minN);
}

void genMatrix(int arr[MAX_ARRAY][MAX_ARRAY], int row, int col)
{
    srand((int)time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int temp = random(1, 100);
            arr[i][j] = temp;
        }
    }
}

void saveFile(FILE *ptr, int arr[MAX_ARRAY][MAX_ARRAY], int row, int col)
{
    fprintf(ptr, "%d %d\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fprintf(ptr, "%d\t", arr[i][j]);
        }
        fprintf(ptr, "\n");
    }
}

void readFile(FILE *ptr, int arr[MAX_ARRAY][MAX_ARRAY], int row, int col)
{
    rewind(ptr);
    fscanf(ptr, "%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fscanf(ptr, "%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
/* END FUNTIONS HELPER */
