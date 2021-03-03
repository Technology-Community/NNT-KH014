/**/
/* Code by KingNNT */

/* Include File */
#include <bits/stdc++.h>
// #include ""

/* Define */

#define pathio "/mnt/LearningAndWorking/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */

bool checkSameNumber(int n, int arr[], int value)
{
    for (int i = 0; i < n; i++)
    {
        if (value == arr[i])
        {
            return true;
        }
    }
    return false;
}

bool checkSquareNumber(int value)
{
    return (float)sqrt(value) == (int)sqrt(value);
}

void fillArray(int &n, int arr[])
{
    printf("Nhap n (0 < n <= 100 ): ");
    scanf("%d", &n);
    printf("\nNhap mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d] = ", i);
        int temp;
        do
        {
            scanf("%d", &temp);
        } while (checkSameNumber(n, arr, temp));
        arr[i] = temp;
    }
}

void printArray(int n, int arr[])
{
    printf("\n\nXuat mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d", i, arr[i]);
    }
}

void printSquareNumberAtOddPosition(int n, int arr[])
{
    printf("\n\nSo chinh phuong vi tri le: ");
    for (int i = 1; i < n; i = i + 2)
    {
        if (checkSquareNumber(arr[i]))
        {
            printf("%d\t", arr[i]);
        }
    }
}

void solve()
{
    int n;
    int arr[100];
    fillArray(n, arr);
    printArray(n, arr);
    printSquareNumberAtOddPosition(n, arr);
}

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
