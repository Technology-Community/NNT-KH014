/* Ex1 - Page 16 - 6.jpg*/
/*
    Descriptions
*/

/* Code by KingNNT */
/*
Author's infomations:
    - Email: Dev.KingNNT@gmail.com
    - Skype: live:king.nnt
    - Facebook Profile: https://www.facebook.com/Kinggg.NNT
    - Facebook Page: https://www.facebook.com/Dev.KingNNT
    - Github Profile: https://github.com/KingNNT
    - Gitlap Profile: https://gitlab.com/Dev.KingNNT
    - Bitbucket Profile:
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
#define MAX_NAME_LENGTH 50
#define MAX_BOOK_NAME_LENGTH 200
#define MAX_QUANTITY 100
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
struct Book
{
    int _id;
    char _name[MAX_BOOK_NAME_LENGTH];
    char _author[MAX_NAME_LENGTH];
    int _type; // 0 => Sach Tu Nhien, 1 => Sach Xa Hoi
    int _publishingYear;
    float _price;
    int _quantity;
};
/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

typedef struct Book Book;
/* END DECLARE TYPEDEF */
/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
void fillABook(Book &obi);
void printAparcel(Book obj);
void fillArrayBooks(int &quantity, Book arr[]);
void printArrayBooks(int quantity, Book arr[]);
void addNewBook(int &quantity, Book arr[]);
void totalMoney(int quantity, Book arr[]);
void sortArray(int quantity, Book arr[]);
void findWithName(int quantity, Book arr[]);
void exportBookBeforeYear(int quantity, Book arr[]);
void countBookExpensive(int quantity, Book arr[]);
void exportBookWithType(int quantity, Book arr[]);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    Book arr[MAX_QUANTITY];
    fillArrayBooks(quantity, arr);
    printArrayBooks(quantity, arr);
    addNewBook(quantity, arr);
    totalMoney(quantity, arr);
    sortArray(quantity, arr);
    findWithName(quantity, arr);
    exportBookBeforeYear(quantity, arr);
    countBookExpensive(quantity, arr);
    exportBookWithType(quantity, arr);
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
void swap(Book &x, Book &y)
{
    Book temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int quantity, Book arr[])
{
    for (int i = 0; i < quantity - 1; i++)
        for (int j = 0; j < quantity - i - 1; j++)
            if (arr[j]._id > arr[j + 1]._id)
                swap(arr[j], arr[j + 1]);
}
/* END FUNTIONS HELPER */

/* ---------- | ---------- | ---------- */
/* FUNCTIONS HANDLE*/
/*** Declare at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillABook(Book &obj)
{
    printf("Nhap ma sach: ");
    scanf("%d", &obj._id);
    cin.ignore();
    printf("Nhap ten sach: ");
    cin.getline(obj._name, MAX_BOOK_NAME_LENGTH);
    printf("Nhap ten tac gia: ");
    cin.getline(obj._author, MAX_NAME_LENGTH);
    printf("Nhap loai sach (0: Sach Tu Nhien - 1: Sach Xa Hoi): ");
    scanf("%d", &obj._type);
    printf("Nhap nam xuat ban: ");
    scanf("%d", &obj._publishingYear);
    printf("Nhap gia tien: ");
    scanf("%f", &obj._price);
    printf("Nhap so luong: ");
    scanf("%d", &obj._quantity);
}
void printABook(Book obj)
{
    printf("\nMa sach: %d", obj._id);
    printf("\nTen sach: %s", obj._name);
    printf("\nTen tac gia: %s", obj._author);
    printf("\nLoai sach: ");
    if (obj._type == 0)
    {
        printf("Sach Tu Nhien");
    }
    else
    {
        printf("Sach Xa Hoi");
    }
    printf("\nNam xuat ban: %d", obj._publishingYear);
    printf("\nGia tien: %.2f", obj._price);
    printf("\nSo luong: %d", obj._quantity);
}

void fillArrayBooks(int &quantity, Book arr[])
{
    printf("Nhap so luong sach: ");
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; i++)
    {
        fillABook(arr[i]);
    }
}

void printArrayBooks(int quantity, Book arr[])
{
    for (int i = 0; i < quantity; i++)
    {
        printf("\n\nThong tin sach thu %d:", i);
        printABook(arr[i]);
    }
}

void addNewBook(int &quantity, Book arr[])
{
    printf("\nNhap thong tin thue bao moi: ");
    fillABook(arr[quantity]);
    quantity++;
    printf("\n\nSau khi them:");
    printArrayBooks(quantity, arr);
}

void totalMoney(int quantity, Book arr[])
{
    int sum = 0;
    for (int i = 0; i < quantity; i++)
    {
        sum += arr[i]._price * arr[i]._quantity;
    }
    printf("\nTong tien = %d", sum);
}

void sortArray(int quantity, Book arr[])
{
    bubbleSort(quantity, arr);
    printf("\n\nSau khi sap xep:");
    printArrayBooks(quantity, arr);
}

void findWithName(int quantity, Book arr[])
{
    char name[MAX_NAME_LENGTH];
    cin.ignore();
    cin.getline(name, MAX_NAME_LENGTH);
    printf("\nThong tin sach tim thay theo ten: ");
    for (int i = 0; i < quantity; i++)
    {
        if (strcmp(name, arr[i]._name) == 0)
        {
            printABook(arr[i]);
        }
    }
}

void exportBookBeforeYear(int quantity, Book arr[])
{
    int year = 2000;
    printf("\nThong tin sach tim thay truoc nam %d: ", year);
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._publishingYear < year)
        {
            printABook(arr[i]);
        }
    }
}

void countBookExpensive(int quantity, Book arr[])
{
    float price = 50000;
    printf("\nThong tin sach gia cao hon %.2f: ", price);
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._price > price)
        {
            printABook(arr[i]);
        }
    }
}

void exportBookWithType(int quantity, Book arr[])
{
    int type;
    scanf("%d", &type);
    printf("\nThong tin sach tim thay theo loai");
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._type == type)
        {
            printABook(arr[i]);
        }
    }
}

/* END FUNTIONS HANDLE */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

3
2
Sach 2
Tac Gia 2
1
2010
50000
50
1
Sach 1
Tac Gia 1
0
1998
30000
10
3
Sach 3
Tac Gia 3
0
2020
90000
30
4
Sach 4
Tac Gia 4
1
2015
100000
75
Sach 2
1

//////////////////////////////
*/
