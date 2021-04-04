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
/* END DEFINITIONS */

/* ---------- | ---------- | ---------- */
/* NAMESPACE */
using namespace std;
/* END NAMESPACE */

/* SOLVE */
void solve()
{
    char str[MAX_CHAR_LENGTH];
    // cin.getline(str, MAX_CHAR_LENGTH);
    gets(str);
    str[0] = toupper(str[0]);
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i - 1] == 32)
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s", str);
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
