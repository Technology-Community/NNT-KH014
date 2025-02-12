/* Ex3 - Page 29 - 10.jpg */
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

/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
int gcd(int a, int b);
int lcm(int a, int b);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int a, b;
    printf("Nhap a");
    scanf("%d", &a);
    printf("Nhap b");
    scanf("%d", &b);
    printf("\nUoc chung lon nhat: %d", gcd(a, b));
    printf("\nBoi chung nho nhat: %d", lcm(a, b));

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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / (gcd(a, b));
}
/* END FUNTIONS HELPER */
