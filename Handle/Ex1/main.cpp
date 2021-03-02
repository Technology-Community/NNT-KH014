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

void solve()
{
	int n;
	int arr[105];

	fillArray(n, arr);
	printArray(n, arr);
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