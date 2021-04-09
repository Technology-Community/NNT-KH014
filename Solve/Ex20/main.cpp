/* Ex1 - Page 34 - 12.jpg */
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
bool checkPrime(int a);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve(FILE *ptr)
{
    int n;
    fscanf(ptr, "%d", &n);
    int arr[MAX_ARRAY];
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr, "%d", &arr[i]);
    }
    printf("Xuat mang:");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");

    fprintf(ptr, "\nSo nguyen to: ");
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(arr[i]))
        {
            fprintf(ptr, "\t%d", arr[i]);
        }
    }

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

    solve(ptr);

    // fclose(ptr);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
/* END MAIN*/

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* FUNCTIONS HELPER */
/*** Declare at "DECLARE FUNCTION HELPER BLOCK" ***/
bool checkPrime(int a)
{
    if (a <= 1)
        return false;
    if (a == 2)
        return true;
    for (int i = 2; i <= (int)sqrt(a) + 1; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
/* END FUNTIONS HELPER */
