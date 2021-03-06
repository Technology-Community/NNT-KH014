
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
void printStudentsIT(int quantity, Student arr[]);
void countMaleStudent(int quantity, Student arr[]);
void printStudentsHaveMaxGPA(int quantity, Student arr[]);
void addNewStudent(int &quantity, Student arr[]);
void deleteStudentWithID(int &quantity, Student arr[]);
void sortArray(int quantity, Student arr[]);

/* END DECLARE FUNCTIONS HANDLE */

/* ---------- | ---------- | ---------- | ---------- | ---------- */

/* SOLVE */
void solve()
{
    int quantity;
    Student arr[MAX_QUANTITY];
    fillArrayStudents(quantity, arr);
    printArrayStudents(quantity, arr);
    printStudentsIT(quantity, arr);
    countMaleStudent(quantity, arr);
    printStudentsHaveMaxGPA(quantity, arr);
    addNewStudent(quantity, arr);
    deleteStudentWithID(quantity, arr);
    sortArray(quantity, arr);

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
void swap(Student &x, Student &y)
{
    Student temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int quantity, Student arr[])
{
    for (int i = 0; i < quantity - 1; i++)
        for (int j = 0; j < quantity - i - 1; j++)
            if (arr[j]._gradePointAverage > arr[j + 1]._gradePointAverage)
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
    char gender[100] = "";
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
        strcpy(gender, "Khong xac dinh");
    }
    printf("\nGioi tinh: %s", gender);
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

void printStudentsIT(int quantity, Student arr[])
{
    char specialized[MAX_CLASS_LENGTH] = "IT";

    printf("\nDanh sach sinh vien thuoc nganh %s\n", specialized);
    for (int i = 0; i < quantity; i++)
    {
        char *result = strstr(arr[i]._class, specialized);
        if (result != NULL)
        {
            printStudent(arr[i]);
        }
        printf("\n");
    }
}

void countMaleStudent(int quantity, Student arr[])
{
    int count = 0;
    for (int i = 0; i < quantity; i++)
    {
        if (strcmp(arr[i]._gender, "x"))
        {
            count++;
        }
    }
    printf("So luong sinh vien nu = %d", count);
}

float maxGPA(int quantity, Student arr[])
{
    float max = arr[0]._gradePointAverage;
    for (int i = 1; i < quantity; i++)
    {
        if (max < arr[i]._gradePointAverage)
        {
            max = arr[i]._gradePointAverage;
        }
    }
    return max;
}

void printStudentsHaveMaxGPA(int quantity, Student arr[])
{
    float max = maxGPA(quantity, arr);
    printf("\nDanh sach sinh vien co diem trung binh cao nhat:\n");
    for (int i = 0; i < quantity; i++)
    {
        if (max == arr[i]._gradePointAverage)
        {
            printStudent(arr[i]);
        }
    }
}

void addNewStudent(int &quantity, Student arr[])
{
    printf("Nhap thong tin sinh vien moi: ");
    fillStudent(arr[quantity]);
    quantity++;
    printf("\n\nSau khi them:");
    printArrayStudents(quantity, arr);
}

int findPositionWithID(int quantity, Student arr[])
{
    printf("\nNhap ID can tim: ");
    int idFind;
    scanf("%d", &idFind);
    for (int i = 0; i < quantity; ++i)
    {
        if (idFind == arr[i]._id)
        {
            return i;
        }
    }
    return -1;
}

void deleteElement(int &quantity, Student arr[], int pos)
{
    for (int i = pos; i < quantity; i++)
        arr[i] = arr[i + 1];
    quantity--;
}

void deleteStudentWithID(int &quantity, Student arr[])
{
    int position = findPositionWithID(quantity, arr);
    if (position != -1)
    {
        deleteElement(quantity, arr, position);
        printf("\n\nSau khi xoa:");
        printArrayStudents(quantity, arr);
    }
    else
    {
        printf("\n\nKhong tim thay");
    }
}

void sortArray(int quantity, Student arr[])
{
    bubbleSort(quantity, arr);
    printf("\n\nSau khi sap xep:");
    printArrayStudents(quantity, arr);
}
/* END FUNTIONS HANDLE */
