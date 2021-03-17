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

void bubbleSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void fillArray(int &n, int arr[])
{
    printf("Nhap n (0 < n <= 100 ): ");
    scanf("%d", &n);
    printf("\nNhap mang: ");
    for (int i = 0; i < n; i++)
    {
        int temp;
        do
        {
            printf("\nNhap a[%d] = ", i);
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

void printPositionMaxNumber(int n, int arr[])
{
    int max = arr[0];
    int position = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            position = i;
        }
    }
    printf("\nVi tri phan tu lon nhat: %d", position);
}

void findNegativeNumberMaxAndPositiveNumberMin(int n, int arr[])
{
    int arrTemp[100];
    for (int i = 0; i < n; i++)
    {
        arrTemp[i] = arr[i];
    }
    bubbleSort(n, arrTemp);
    for (int i = 0; i < n; i++)
    {
        if (arrTemp[i] >= 0)
        {
            if (arrTemp[i - 1] < 0)
            {
                printf("\nSo am lon nhat: %d", arrTemp[i - 1]);
            }
            else
            {
                printf("\nKhong co so am");
            }
            printf("\nSo duong nho nhat: %d", arrTemp[i]);
            return;
        }
    }
}

void sumEvenPositions(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        sum += arr[i];
    }
    printf("\nTong cac so nam o vi tri chan: %d", sum);
}

void sortArrays(int n, int arr[])
{
    bubbleSort(n, arr);
    printf("\nMang sau khi sap xep: ");
    printArray(n, arr);
}

void solve()
{
    int n;
    int arr[100];
    fillArray(n, arr);
    printArray(n, arr);
    printSquareNumberAtOddPosition(n, arr);
    printPositionMaxNumber(n, arr);
    findNegativeNumberMaxAndPositiveNumberMin(n, arr);
    sumEvenPositions(n, arr);
    sortArrays(n, arr);
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
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

6
1 3 1 1 1 1 2 -5 8 2 2 2 2 9

//////////////////////////////
*/
