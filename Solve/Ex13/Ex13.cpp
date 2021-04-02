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
#define MAX_CHAR_LENGTH 50

using namespace std;

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

int main()
{

    solve();

    fclose(stdin);
    fclose(stdout);
    return 0;
}
