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
void fillArray(int &quantity, int *arr);
void printArray(int quantity, int *arr);
void sumArray(int quantity, int *arr);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    int *arr = new int[MAX_ARRAY];

    fillArray(quantity, arr);
    printArray(quantity, arr);
    sumArray(quantity, arr);

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
void fillArray(int &quantity, int *arr)
{
    printf("Nhap so luong: ");
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", (arr + i));
    }
}

void printArray(int quantity, int *arr)
{
    printf("\nMang vua nhap: ");
    for (int i = 0; i < quantity; i++)
    {
        printf("\t%d", *(arr + i));
    }
}

void sumArray(int quantity, int *arr)
{
    int sum = 0;
    for (int i = 0; i < quantity; i++)
    {
        sum += *(arr + i);
    }
    printf("\nTong mang vua nhap: %d", sum);
}
