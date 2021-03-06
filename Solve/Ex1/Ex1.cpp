#include <bits/stdc++.h>

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */
void fillArray(int &n, int arr[])
{
    do
    {
        printf("Nhap n (0 < n <= 100 ): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    printf("\nNhap mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &arr[i]);
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

void findFirstPositiveNumber(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("\nVi tri so duong dau tien: %d", i);
            printf("\nGia tri so duong dau tien: %d", arr[i]);
            return;
        }
    }
}

void findLastPositiveNumber(int n, int arr[])
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            printf("\nVi tri so duong cuoi cung: %d", i);
            printf("\nGia tri so duong cuoi cung: %d", arr[i]);
            return;
        }
    }
}

void findMaxNumber(int n, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nSo Lon Nhat = %d", max);
}

void insertX(int &n, int arr[], int x, int pos)
{
    n++;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
}

void insertFirstArray(int &n, int arr[])
{
    printf("\nNhap gia tri can chen: ");
    int x;
    scanf("%d", &x);
    int pos = 0;
    insertX(n, arr, x, pos);

    printf("Mang sau khi chen: ");
    printArray(n, arr);
}

void insertPositionArray(int &n, int arr[])
{
    printf("\nNhap gia tri can chen: ");
    int x;
    scanf("%d", &x);
    printf("\nNhap vi tri can chen: ");
    int pos;
    scanf("%d", &pos);
    insertX(n, arr, x, pos);

    printf("Mang sau khi chen: ");
    printArray(n, arr);
}

void deleteElement(int &n, int arr[], int pos)
{

    for (int i = pos; i < n; i++)
        arr[i] = arr[i + 1];
    n--;
}

void deleteFirstArray(int &n, int arr[])
{
    printf("\nNhap vi tri can xoa: ");
    int pos;
    scanf("%d", &pos);
    deleteElement(n, arr, pos);

    printf("\nMang sau khi xoa: ");
    printArray(n, arr);
}

void deletePositionArray(int &n, int arr[])
{
    int pos = 0;
    deleteElement(n, arr, pos);

    printf("\nMang sau khi xoa: ");
    printArray(n, arr);
}

void checkOddNumber(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("\nCo so le");
            return;
        }
    }
    printf("\nKhong co so le");
    return;
}

void initEvenNumberArray(int n, int arr[])
{
    int evenNumberArr[100];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenNumberArr[j] = arr[i];
            j++;
        }
    }
    printf("\nMang so chan: ");
    printArray(j, evenNumberArr);
}

void solve()
{
    int n;
    int arr[105];

    fillArray(n, arr);
    printArray(n, arr);
    findFirstPositiveNumber(n, arr);
    findLastPositiveNumber(n, arr);
    findMaxNumber(n, arr);
    insertFirstArray(n, arr);
    insertPositionArray(n, arr);
    deleteFirstArray(n, arr);
    deleteFirstArray(n, arr);
    initEvenNumberArray(n, arr);
}

int main()
{
    solve();
    return 0;
}
