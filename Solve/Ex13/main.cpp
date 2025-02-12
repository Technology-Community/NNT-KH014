/* Ex3 - Page 26 - 09.jpg */
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
#define MAX_CHAR_LENGTH 50
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

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

/* END DECLARE TYPEDEF */
/* ---------- | ---------- | ---------- */

/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    char s1[MAX_CHAR_LENGTH], s2[MAX_CHAR_LENGTH];
    cin.getline(s1, MAX_CHAR_LENGTH);
    cin.getline(s2, MAX_CHAR_LENGTH);
    printf("%s", s1);
    printf("\n%s", s2);
    printf("\nDo dai chuoi s1 = %d", strlen(s1));
    printf("\nDo dai chuoi s2 = %d", strlen(s2));
    if (strcmp(s1, s2) == 0)
    {
        printf("\n2 chuoi giong nhau");
    }
    else
    {
        printf("\n2 chuoi khac nhau");
    }
    if (strstr(s1, s2) != NULL)
    {
        printf("\ns2 co nam trong s1");
    }
    else
    {
        printf("\ns2 khong nam trong s1");
    }
    if (strstr(s2, s1) != NULL)
    {
        printf("\ns1 co nam trong s2");
    }
    else
    {
        printf("\ns1 khong nam trong s2");
    }
    printf("\nNoi 2 chuoi: %s", strcat(s1, s2));
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

/* END FUNTIONS HELPER */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

Nguyen Van A
slug

//////////////////////////////
*/
