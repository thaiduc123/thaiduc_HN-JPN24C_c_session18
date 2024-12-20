#include <stdio.h>
#include <string.h>

int main() {
	struct students{
	    char name[50];
	    int age;
	    char phone[20];
	};
	struct students student;
	printf("Nhap thong tin sinh vien:\n");
    printf("Nhap ten: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &student.age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(student.phone, sizeof(student.phone), stdin);
    printf("Thong tin:\n");
    printf("Ten: %s", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phone);
    return 0;
}
