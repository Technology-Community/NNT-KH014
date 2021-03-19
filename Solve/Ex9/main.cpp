/* Ex1 - Page 16 */
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
#define MAX_PHONE_NUMBER_LENGTH 15
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
/*** Code at "DECLARE STRUCT BLOCK" ***/
struct Date
{
    int _day;
    int _month;
    int _year;
};

struct PhoneNumber
{
    int _id;
    char _owner[MAX_NAME_LENGTH];
    Date _createdAt;
    char _number[MAX_PHONE_NUMBER_LENGTH];
    bool _paidType; // true => pre-paid, false => postpaid
    int _minInNetwork;
    int _minOutNetwork;
};

/* END DECLARE STRUCT */

/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */
typedef struct Date Date;
typedef struct PhoneNumber PhoneNumber;
/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillDate(Date &obj);
void printDate(Date obj);
void fillAPhoneNumber(PhoneNumber &obi);
void printAparcel(PhoneNumber obj);
void fillArrayPhoneNumbers(int &quantity, PhoneNumber arr[]);
void printArrayPhoneNumbers(int quantity, PhoneNumber arr[]);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    PhoneNumber arr[MAX_QUANTITY];
    fillArrayPhoneNumbers(quantity, arr);
    printArrayPhoneNumbers(quantity, arr);

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
void fillAPhoneNumber(PhoneNumber &obj)
{
    printf("Nhap ma thue bao: ");
    scanf("%d", &obj._id);
    cin.ignore();
    printf("Nhap ten chu tai khoan: ");
    cin.getline(obj._owner, MAX_NAME_LENGTH);
    printf("Nhap ngay dang ky: ");
    fillDate(obj._createdAt);
    cin.ignore();
    printf("Nhap so dien thoai: ");
    cin.getline(obj._number, MAX_PHONE_NUMBER_LENGTH);
    printf("Nhap thoi gian goi noi mang: ");
    scanf("%d", &obj._minInNetwork);
    printf("Nhap thoi gian goi ngoai mang: ");
    scanf("%d", &obj._minOutNetwork);
}
void printAPhoneNumber(PhoneNumber obj)
{
    printf("\nMa thue bao: %d", obj._id);
    printf("\nTen chu tai khoan: %s", obj._owner);
    printf("\nNgay dang ky: ");
    printDate(obj._createdAt);
    printf("\nSo dien thoai: %s", obj._number);
    printf("\nThoi gian goi noi mang: %d", obj._minInNetwork);
    printf("\nThoi gian goi ngoai mang: %d", obj._minOutNetwork);
}

void fillArrayPhoneNumbers(int &quantity, PhoneNumber arr[])
{
    printf("Nhap so luong thue bao: ");
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; i++)
    {
        fillAPhoneNumber(arr[i]);
    }
}

void printArrayPhoneNumbers(int quantity, PhoneNumber arr[])
{
    for (int i = 0; i < quantity; i++)
    {
        printf("\n\nThong tin thue bao thu %d:", i);
        printAPhoneNumber(arr[i]);
    }
}
/* END FUNTIONS HANDLE */

/* ---------- | ---------- | ---------- */
/* STRUCT */
/*** Declare at "DECLARE STRUCT BLOCK" ***/

/* END STRUCT */

/* ---------- | ---------- | ---------- */
/* CLASS */
/*** Declare at "DECLARE CLASS BLOCK" ***/

/* END CLASS */
/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

5
1
Nguyen Van A
1 1 2020
0999000001
100
1000
2
Nguyen Van B
2 2 2020
0999000002
200
2000
3
Nguyen Van C
3 3 2020
0999000003
300
3000
4
Nguyen Van D
4 4 2020
0999000004
400
4000
5
Nguyen Van E
5 5 2020
0999000005
500
5000

//////////////////////////////
*/
