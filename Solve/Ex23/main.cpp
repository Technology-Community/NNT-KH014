/* Ex4 - Page 36 - 13.jpg */
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
// #define lfo pathio "output.txt", "w", stdout
#define lf pathio "file.txt", "w"

/** Macro definitions for maximum length of variables */
#define MAX_ARRAY 100
/* END DEFINITIONS */

/* ---------- | ---------- | ---------- */
/* NAMESPACE */
using namespace std;
/* END NAMESPACE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* DECLARE CLASS */

/* END DECLARE CLASS */

/* ---------- | ---------- | ---------- */
/* DECLARE STRUCT */
struct Product
{
    int _id;
    int _quantity;
    float _price;
    float _total;
};
/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */
typedef struct Product Product;
/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HELPER */
/*** Code at "DECLARE FUNCTION HELPER BLOCK" ***/

/* END DECLARE FUNCTIONS HELPER */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillArrayProduct(Product arr[], int &n, FILE *ptr);
void printArrayProduct(Product arr[], int n);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve(FILE *ptr)
{
    int n;
    Product arr[MAX_ARRAY];
    fillArrayProduct(arr, n, ptr);
    printf("\n");
    printArrayProduct(arr, n);
    return;
}
/* END SOLVE */

/* ---------- | ---------- | ---------- */
/* MAIN */
int main()
{
    freopen(lfi);
    // freopen(lfo);
    FILE *ptr = fopen(lf);
    // ios_base :: sync_with_stdio (0);
    cin.tie(0);

    if (ptr == NULL)
    {
        printf("Khong The Mo File");
    }
    else
    {
        solve(ptr);
    }

    fclose(ptr);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
/* END MAIN*/

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* FUNCTIONS HELPER */
/*** Declare at "DECLARE FUNCTION HELPER BLOCK" ***/

/* END FUNTIONS HELPER */

/* ---------- | ---------- | ---------- */
/* FUNCTIONS HANDLE */
/*** Declare at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillAProduct(Product &obj, FILE *ptr)
{
    printf("Nhap Ma Hang: ");
    scanf("%d", &obj._id);
    fprintf(ptr, "\n%d", obj._id);
    printf("Nhap So Luong: ");
    scanf("%d", &obj._quantity);
    fprintf(ptr, "\t%d", obj._quantity);
    printf("Nhap Don Gia: ");
    scanf("%f", &obj._price);
    fprintf(ptr, "\t%.2f", obj._price);
    obj._total = obj._quantity * obj._price;
}

void printAProduct(Product &obj)
{
    printf("\nMa Hang = %d", obj._id);
    printf("\nSo Luong = %d", obj._quantity);
    printf("\nDon Gia = %.2f", obj._price);
    printf("\nSo Tien = %.2f", obj._total);
}

void fillArrayProduct(Product arr[], int &n, FILE *ptr)
{
    printf("Nhap So Luong Don Hang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fillAProduct(arr[i], ptr);
    }
}

void printArrayProduct(Product arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printAProduct(arr[i]);
        printf("\n");
    }
}
/* END FUNTIONS HANDLE */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

4
1 1 1
2 2 2
3 3 3
4 4 4

//////////////////////////////
*/
