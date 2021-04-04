/*  Ex1 - page 28 - 10.jpg */
/*
    Descriptions
*/

/* Code by KingNNT */
/*
Author's informations:
    - Email: Dev.KingNNT@gmail.com
    - Skype: live:king.nnt
    - Facebook Profile: https://www.facebook.com/Kinggg.NNT
    - Facebook Page: https://www.facebook.com/Dev.KingNNT
    - Github Profile: https://github.com/KingNNT
    - Gitlap Profile: https://gitlab.com/Dev.KingNNT
    - Bitbucket Profile: https://bitbucket.org/KingNNT/
*/

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
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

/** Macro definitions for maximum length of variables */
#define MAX 100
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

/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fill(int arr[], int quantity);
void print(int arr[], int quantity);
int sum(int arr[], int quantity, int SUM);
int sumEvenNumber(int arr[], int quantity, int SUM);
int countPositiveNumber(int arr[], int quantity, int count);
int min(int arr[], int left, int right);
int max(int arr[], int left, int right);
int lastEvenNumber(int arr[], int quantity);
int findLastX(int arr[], int quantity, int value);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &quantity);
    int arr[MAX];
    fill(arr, quantity);
    printf("\nXuat mang: ");
    print(arr, quantity);
    printf("\nTong mang: %d", sum(arr, quantity, 0));
    printf("\nTong mang chan: %d", sumEvenNumber(arr, quantity, 0));
    printf("\nSo luong phan tu duong: %d", countPositiveNumber(arr, quantity, 0));
    printf("\nMin = %d", min(arr, 0, quantity - 1));
    printf("\nMax = %d", max(arr, 0, quantity - 1));
    printf("\nPhan tu chan cuoi cung trong mang: %d", lastEvenNumber(arr, quantity));
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    printf("\nVi tri: %d", findLastX(arr, quantity, value));

    return;
}
/* END SOLVE */

/* ---------- | ---------- | ---------- */
/* MAIN */
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
/* END MAIN*/

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* FUNCTIONS HELPER */
/*** Declare at "DECLARE FUNCTION HELPER BLOCK" ***/
void fill(int arr[], int quantity)
{
    if (quantity == 0)
        return;
    fill(arr, quantity - 1);
    printf("Nhap phan tu thu %d: ", quantity - 1);
    scanf("%d", &arr[quantity - 1]);
}

void print(int arr[], int quantity)
{
    if (quantity == 0)
        return;
    print(arr, quantity - 1);
    printf("\t%d", arr[quantity - 1]);
}

int sum(int arr[], int quantity, int SUM)
{
    if (quantity <= 0)
        return SUM;
    else
        SUM += arr[quantity - 1];
    sum(arr, quantity - 1, SUM);
}

int sumEvenNumber(int arr[], int quantity, int SUM)
{
    if (quantity <= 0)
        return SUM;
    else
    {
        if (arr[quantity - 1] % 2 == 0)
        {
            SUM += arr[quantity - 1];
        }
    }
    sumEvenNumber(arr, quantity - 1, SUM);
}

int countPositiveNumber(int arr[], int quantity, int count)
{
    if (quantity <= 0)
        return count;
    else
    {
        if (arr[quantity - 1] > 0)
        {
            count++;
        }
    }
    countPositiveNumber(arr, quantity - 1, count);
}

int min(int arr[], int left, int right)
{
    if (left == right)
        return arr[left];
    int m = min(arr, left + 1, right);
    return (arr[left] < m) ? arr[left] : m;
}
int max(int arr[], int left, int right)
{
    if (left == right)
        return arr[left];
    int m = max(arr, left + 1, right);
    return (arr[left] < m) ? m : arr[left];
}

int lastEvenNumber(int arr[], int quantity)
{
    if (quantity <= 0)
        return 0;
    else
    {
        if (arr[quantity - 1] % 2 == 0)
        {
            return arr[quantity - 1];
        }
    }
    lastEvenNumber(arr, quantity - 1);
}

int findLastX(int arr[], int quantity, int value)
{
    if (quantity <= 0)
        return 0;
    else
    {
        if (arr[quantity - 1] == value)
        {
            return quantity - 1;
        }
    }
    findLastX(arr, quantity - 1, value);
}
/* END FUNTIONS HELPER */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

5
1 -2 30 4 5
4

//////////////////////////////
*/
