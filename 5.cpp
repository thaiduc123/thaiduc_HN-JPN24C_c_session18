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

void edit(Student students[], int len){
    int search;
    printf("Nhap id can tim: ");
    scanf("%d", &search);
    for (int i=0; i<len; i++){
        if (students[i].id == search){
            printf("Ten moi: ");
            fflush(stdin);
            fgets(students[i].fullName,sizeof(students[i].fullName),stdin);
            printf("Tuoi moi: ");
            scanf("%d", &students[i].age);
        }
    }
}

int main() {
    Student students[5]={
        {1, "THD", 18, "0123456789"},
        {2, "TDH", 19, "0987654321"},
        {3, "DTH", 16, "0012233445"},
        {4, "DHT", 17, "0998877665"},
        {5, "HTD", 15, "0554433221"},
    };
    int n=5;
    print(students, n);
    edit(students, n);
    print(students, n);
    return 0;
}
