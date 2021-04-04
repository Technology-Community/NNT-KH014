/* Ex1 - Page 26 - 09.jpg */
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
struct Fraction
{
    int numerator;
    int denominator;
};
/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */
typedef struct Fraction Fraction;
/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillAFraction(Fraction obj);
void printAFraction(Fraction obj);
void fillArrayFraction(int &quantity, Fraction *arr);
void printArrayFraction(int quantity, Fraction *arr);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    Fraction *arr;
    fillArrayFraction(quantity, arr);
    printArrayFraction(quantity, arr);
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
void fillAFraction(Fraction obj)
{
    /* TODO: FIX scanf */
    printf("\nNhap tu so: ");
    // scanf("%d", obj.numerator);
    printf("\nNhap mau so: ");
    // scanf("%d", obj.denominator);
}

void printAFraction(Fraction obj)
{
    printf("\n%d / %d", obj.numerator, obj.denominator);
}

void fillArrayFraction(int &quantity, Fraction *arr)
{
    printf("Nhap so luong phan so: ");
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; i++)
    {
        fillAFraction(*(arr + i));
    }
}

void printArrayFraction(int quantity, Fraction *arr)
{
    printf("\nMang phan so");
    for (int i = 0; i < quantity; i++)
    {
        printAFraction(*(arr + i));
    }
}
/* END FUNTIONS HELPER */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

4
1 2
2 3
3 4
4 5

//////////////////////////////
*/
