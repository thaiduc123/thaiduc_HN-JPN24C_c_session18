#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char fullName[50];
    int age;
    char phone[20];
} Student;

void print(Student students[], int len){
    printf("Danh sach:\n");
    for (int i=0; i<len; i++){
    	printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].fullName);
        printf("age: %d\n", students[i].age);
        printf("phone: %d\n", students[i].phone);
    }
}

void add(Student students[], int *length){
    Student newStudent;
    printf("ID: ");
    scanf("%d", &newStudent.id);
    fflush(stdin);
    printf("Name: ");
    fgets(newStudent.fullName,sizeof(newStudent.fullName),stdin);
    printf("Age: ");
    scanf("%d", &newStudent.age);
    fflush(stdin);
    printf("Phone: ");
    fgets(newStudent.phone,sizeof(newStudent.phone),stdin);
    students[*length]=newStudent;
    (*length)++;
}

int main(){
    Student students[50]={
        {1, "THD", 18, "0123456789"},
        {2, "TDH", 19, "0987654321"},
        {3, "DTH", 16, "0012233445"},
        {4, "DHT", 17, "0998877665"},
        {5, "HTD", 15, "0554433221"},
    };
    int n=5;
    print(students, n);
    add(students, &n);
    print(students, n);
    return 0;
}
