/* C Language */
/*
    Ex5 - Page 11
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
#define MAX_GENDER_LENGTH 2
#define MAX_CLASS_LENGTH 8
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

struct Student
{
    int _id;
    char _name[MAX_NAME_LENGTH];
    char _gender[MAX_GENDER_LENGTH];
    Date _birthday;
    char _class[MAX_CLASS_LENGTH];
    float _gradePointAverage;
};
/* END DECLARE STRUCT */
typedef struct Date Date;
typedef struct Student Student;
/* ---------- | ---------- | ---------- */
/* DECLARE TYPEDEF */

/* END DECLARE TYPEDEF */

/* ---------- | ---------- | ---------- */
/* DECLARE FUNCTIONS HANDLE*/
/*** Code at "DECLARE FUNCTION HANDLE BLOCK" ***/
void fillDate(Date &obj);
void printDate(Date obj);
void fillStudent(Student &obi);
void printStudent(Student obj);
void fillArrayStudents(int &quantity, Student arr[]);
void printArrayStudents(int quantity, Student arr[]);
/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    Student arr[MAX_QUANTITY];
    fillArrayStudents(quantity, arr);
    printArrayStudents(quantity, arr);
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

void fillStudent(Student &obj)
{
    printf("Nhap ma sinh vien: ");
    scanf("%d", &obj._id);
    printf("Nhap ho ten: ");
    cin.ignore();
    cin.getline(obj._name, MAX_NAME_LENGTH);
    printf("Nhap gioi tinh (x: nu, y: nam): ");
    cin.getline(obj._gender, MAX_GENDER_LENGTH);
    printf("Nhap ngay sinh:\n");
    fillDate(obj._birthday);
    printf("Nhap lop: ");
    cin.ignore();
    cin.getline(obj._class, MAX_CLASS_LENGTH);
    printf("Nhap diem trung binh: ");
    scanf("%f", &obj._gradePointAverage);
}

void printStudent(Student obj)
{
    printf("\nThong Tin Sinh Vien");
    printf("\nMa Sinh Vien: %d", obj._id);
    printf("\nHo va ten: %s", obj._name);
    char gender[4] = "";
    if (strcmp(obj._gender, "x") == 0)
    {
        strcpy(gender, "Nu");
    }
    else if (strcmp(obj._gender, "y") == 0)
    {
        strcpy(gender, "Nam");
    }
    else
    {
        strcpy("Khong xac dinh", gender);
    }
    printf("\nHo va ten: %s", gender);
    printf("\nNgay Sinh: ");
    printDate(obj._birthday);
    printf("\nLop: %s", obj._class);
    printf("\nDiem trung binh = %.2f", obj._gradePointAverage);
}

void fillArrayStudents(int &quantity, Student arr[])
{
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &quantity);
    for (int i = 0; i < quantity; ++i)
    {
        printf("Nhap sinh vien thu %d", i);
        fillStudent(arr[i]);
    }
}

void printArrayStudents(int quantity, Student arr[])
{
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < quantity; ++i)
    {
        printf("\n\nSinh vien thu %d", i);
        printStudent(arr[i]);
    }
}
/* TODO: part d - page 12 */
/* END FUNTIONS HANDLE */
