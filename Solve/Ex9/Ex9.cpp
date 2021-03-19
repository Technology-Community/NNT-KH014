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
    int _paidType; // 0 => pre-paid, 1 => postpaid
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
void addNewPhoneNumber(int &quantity, PhoneNumber arr[]);
void sortArray(int quantity, PhoneNumber arr[]);
void findWithName(int quantity, PhoneNumber arr[]);
void exportPhoneNumberWithPaidType(int quantity, PhoneNumber arr[]);
void exportPhoneNumberAfterYear(int quantity, PhoneNumber arr[]);
void postage(int quantity, PhoneNumber arr[]);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    PhoneNumber arr[MAX_QUANTITY];
    fillArrayPhoneNumbers(quantity, arr);
    printArrayPhoneNumbers(quantity, arr);
    addNewPhoneNumber(quantity, arr);
    sortArray(quantity, arr);
    findWithName(quantity, arr);
    exportPhoneNumberWithPaidType(quantity, arr);
    exportPhoneNumberAfterYear(quantity, arr);
    postage(quantity, arr);

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

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* FUNCTIONS HELPER */
/*** Declare at "DECLARE FUNCTION HELPER BLOCK" ***/
void swap(PhoneNumber &x, PhoneNumber &y)
{
    PhoneNumber temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int quantity, PhoneNumber arr[])
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
    printf("Nhap loai thue bao (0: Tra truoc - 1: Tra sau): ");
    scanf("%d", &obj._paidType);
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
    printf("\nLoai thue bao: ");
    if (obj._paidType == 0)
    {
        printf("Tra truoc");
    }
    else
    {
        printf("Tra sau");
    }
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

void addNewPhoneNumber(int &quantity, PhoneNumber arr[])
{
    printf("\nNhap thong tin thue bao moi: ");
    fillAPhoneNumber(arr[quantity]);
    quantity++;
    printf("\n\nSau khi them:");
    printArrayPhoneNumbers(quantity, arr);
}

void sortArray(int quantity, PhoneNumber arr[])
{
    bubbleSort(quantity, arr);
    printf("\n\nSau khi sap xep:");
    printArrayPhoneNumbers(quantity, arr);
}

void findWithName(int quantity, PhoneNumber arr[])
{
    char name[MAX_NAME_LENGTH];
    cin.ignore();
    cin.getline(name, MAX_NAME_LENGTH);
    printf("\nThong tin thue bao tim thay voi ten chu tai khoan: ");
    for (int i = 0; i < quantity; i++)
    {
        if (strcmp(name, arr[i]._owner) == 0)
        {
            printAPhoneNumber(arr[i]);
        }
    }
}

void exportPhoneNumberWithPaidType(int quantity, PhoneNumber arr[])
{
    int type;
    scanf("%d", &type);
    printf("\nThong tin thue bao tim thay voi loai %d: ", type);
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._paidType == type)
        {
            printAPhoneNumber(arr[i]);
        }
    }
}

void exportPhoneNumberAfterYear(int quantity, PhoneNumber arr[])
{
    int year = 2010;
    printf("\nThong tin thue bao tim thay sau nam %d: ", year);
    for (int i = 0; i < quantity; i++)
    {
        if (arr[i]._createdAt._year > year)
        {
            printAPhoneNumber(arr[i]);
        }
    }
}

void postage(int quantity, PhoneNumber arr[])
{
    int feeInNetwork = 1500;
    int feeOutNetwork = 3000;

    printf("\nCuoc phi thue bao");
    for (int i = 0; i < quantity; i++)
    {
        long long int fee = arr[i]._minInNetwork * feeInNetwork + arr[i]._minOutNetwork * feeOutNetwork;
        printf("\nThue bao thu %d - Cuoc phi = %ld (VND)", i, fee);
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
