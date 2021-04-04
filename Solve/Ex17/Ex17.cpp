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
#define MAX 100
/* END DEFINITIONS */

/* ---------- | ---------- | ---------- */
/* NAMESPACE */
using namespace std;
/* END NAMESPACE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

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
