/* Ex6 - Page 15  */
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
#define MAX_CONTENT_LENGTH 255
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
/*** Code at "DECLARE CLASS BLOCK" ***/

/* END DECLARE CLASS */

/* ---------- | ---------- | ---------- */
/* DECLARE STRUCT */
struct Date
{
    int _day;
    int _month;
    int _year;
};

struct Parcel
{
    int _id;
    char _sender[MAX_NAME_LENGTH];
    char _receiver[MAX_NAME_LENGTH];
    float _weight;
    Date _sendDate;
    char _content[MAX_CONTENT_LENGTH];
    float _price;
};

/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */
typedef struct Date Date;
typedef struct Parcel Parcel;
/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillDate(Date &obj);
void printDate(Date obj);
void fillAParcel(Parcel &obi);
void printAParcel(Parcel obj);
void fillArrayParcel(int &quantity, Parcel arr[]);
void printArrayParcels(int quantity, Parcel arr[]);
void addNewParcel(int &quantity, Parcel arr[]);
void sortArray(int quantity, Parcel arr[]);
void priceArrayParcel(int quantity, Parcel arr[]);
void countParcelMaxWeight(int quantity, Parcel arr[]);
void findParcelWithSeeder(int quantity, Parcel arr[]);
void exportParcelWithDate(int quantity, Parcel arr[]);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    Parcel arr[MAX_QUANTITY];
    fillArrayParcel(quantity, arr);
    printArrayParcels(quantity, arr);
    addNewParcel(quantity, arr);
    sortArray(quantity, arr);
    priceArrayParcel(quantity, arr);
    countParcelMaxWeight(quantity, arr);
    findParcelWithSeeder(quantity, arr);
    exportParcelWithDate(quantity, arr);
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

void swap(Parcel &x, Parcel &y)
{
    Parcel temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int quantity, Parcel arr[])
{
    for (int i = 0; i < quantity - 1; i++)
        for (int j = 0; j < quantity - i - 1; j++)
            if (arr[j]._id > arr[j + 1]._id)
                swap(arr[j], arr[j + 1]);
}

float maxWeight(int quantity, Parcel arr[])
{
    int max = arr[0]._weight;
    for (int i = 0; i < quantity; i++)
    {
        if (max < arr[i]._weight)
        {
            max = arr[i]._weight;
        }
    }
    return max;
}
/* END FUNTIONS HELPER */

/* ---------- | ---------- | ---------- */
/* FUNCTIONS HANDLE*/
/*** Declare at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillDate(Date &obj)
{
    printf("Nhap ngay: ");
    scanf("%d", &obj._day);
    printf("Nhap thang: ");
    scanf("%d", &obj._month);
    printf("Nhap nam: ");
    scanf("%d", &obj._year);
}

void printDate(Date obj)
{
    printf("%d / %d / %d", obj._day, obj._month, obj._year);
}
void fillAParcel(Parcel &obj)
{
    printf("Nhap ma buu kien: ");
    scanf("%d", &obj._id);
    cin.ignore();
    printf("Nhap ten nguoi gui: ");
    cin.getline(obj._sender, MAX_NAME_LENGTH);
    printf("Nhap ten nguoi nhan: ");
    cin.getline(obj._receiver, MAX_NAME_LENGTH);
    printf("Nhap trong luong: ");
    scanf("%f", &obj._weight);
    printf("Nhap ngay gui: ");
    fillDate(obj._sendDate);
    cin.ignore();
    printf("Nhap noi dung buu kien: ");
    cin.getline(obj._content, MAX_CONTENT_LENGTH);
    printf("Nhap don gia gui: ");
    scanf("%f", &obj._price);
}
void printAParcel(Parcel obj)
{
    printf("\nMa buu kien: %d", obj._id);
    printf("\nTen nguoi gui: %s", obj._sender);
    printf("\nTen nguoi nhan: %s", obj._receiver);
    printf("\nTrong luong: %.2f", obj._weight);
    printf("\nNgay gui: ");
    printDate(obj._sendDate);
    printf("\nNoi dung buu kien: %s", obj._content);
    printf("\nDon gia gui: %.2f", obj._price);
}

void fillArrayParcel(int &quantity, Parcel arr[])
{
    printf("Nhap so luong buu kien: ");
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; i++)
    {
        fillAParcel(arr[i]);
    }
}

void printArrayParcels(int quantity, Parcel arr[])
{
    for (int i = 0; i < quantity; i++)
    {
        printf("\n\nBuu kien thu %d:", i);
        printAParcel(arr[i]);
    }
}

void addNewParcel(int &quantity, Parcel arr[])
{
    printf("\nNhap thong tin buu kien moi: ");
    fillAParcel(arr[quantity]);
    quantity++;
    printf("\n\nSau khi them:");
    printArrayParcels(quantity, arr);
}

void sortArray(int quantity, Parcel arr[])
{
    bubbleSort(quantity, arr);
    printf("\n\nSau khi sap xep:");
    printArrayParcels(quantity, arr);
}

float priceAParcel(Parcel obj)
{
    return obj._weight * obj._price;
}

void priceArrayParcel(int quantity, Parcel arr[])
{
    for (int i = 0; i < quantity; i++)
    {
        printf("\nGia tri buu kien thu %d: %.2f", i, priceAParcel(arr[i]));
    }
}

void countParcelMaxWeight(int quantity, Parcel arr[])
{
    int max = maxWeight(quantity, arr);
    int count = 0;
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._weight == max)
        {
            // printAParcel(arr[i]);
            count++;
        }
    }
    printf("\nSo luong buu kien co trong luong lon nhat = %d", count);
}

void findParcelWithSeeder(int quantity, Parcel arr[])
{
    char senderFind[MAX_NAME_LENGTH];
    cin.ignore();
    printf("Nhap ten nguoi gui: ");
    cin.getline(senderFind, MAX_NAME_LENGTH);
    printf("\nDanh sach buu kien tim thay: ");
    for (int i = 0; i < quantity; i++)
    {
        if (strcmp(senderFind, arr[i]._sender) == 0)
        {
            printAParcel(arr[i]);
        }
    }
}

void exportParcelWithDate(int quantity, Parcel arr[])
{
    int month = 4;
    int year = 2014;
    printf("\nDanh sach buu kien gui vao %d/%d", month, year);
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._sendDate._month == month && arr[i]._sendDate._year == year)
        {
            printAParcel(arr[i]);
        }
    }
}
/* END FUNTIONS HANDLE */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

2
1
1 Seeder
1 Recerver
100
1 1 2021
1 Content
10000
3
3 Seeder
3 Recerver
300
3 3 2021
3 Content
30000
2
2 Seeder
2 Recerver
200
2 2 2021
2 Content
20000
1 Seeder

//////////////////////////////
*/
