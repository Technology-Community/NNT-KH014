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
    char _seeder[MAX_NAME_LENGTH];
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
void printAparcel(Parcel obj);
void fillArrayParcel(int &quantity, Parcel arr[]);
void printArrayParcel(int quantity, Parcel arr[]);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    Parcel arr[MAX_QUANTITY];
    fillArrayParcel(quantity, arr);
    printArrayParcel(quantity, arr);
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
    cin.getline(obj._seeder, MAX_NAME_LENGTH);
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
    printf("\nTen nguoi gui: %s", obj._seeder);
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

void printArrayParcel(int quantity, Parcel arr[])
{
    for (int i = 0; i < quantity; i++)
    {
        printf("\nBuu kien thu %d:", i);
        printAParcel(arr[i]);
    }
}

/* END FUNTIONS HANDLE */
