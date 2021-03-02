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

void solve()
{
	int n;
	int arr[105];

	fillArray(n, arr);
	printArray(n, arr);
	findFirstPositiveNumber(n, arr);
	findLastPositiveNumber(n, arr);
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