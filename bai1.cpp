#include <stdio.h>
#include <string.h>

int main() {
	struct students{
	    char name[50];
	    int age;
	    char phone[20];
	};
    struct students student;
    strcpy(student.name, "THD");
    student.age = 18;
    strcpy(student.phone, "01667234376");
    printf("Thong tin:\n");
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phone);
    return 0;
}
