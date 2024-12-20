#include <stdio.h>
#include <string.h>

int main() {
	struct students{
	    char name[50];
	    int age;
	    char phone[20];
	};
	struct students student[5];
	for (int i = 0; i<5; i++){
		printf("Nhap thong tin sinh vien thu %d: \n", i+1);
	    printf("Nhap ten: ");
	    fgets(student[i].name, sizeof(student[i].name), stdin);
	    printf("Nhap tuoi: ");
	    scanf("%d", &student[i].age);
	    fflush(stdin);
	    printf("Nhap so dien thoai: ");
	    fgets(student[i].phone, sizeof(student[i].phone), stdin);
	}
    printf("Thong tin:\n");
    for (int i = 0; i < 5; i++) {
        printf("Ten: %s", student[i].name);
	    printf("Tuoi: %d\n", student[i].age);
	    printf("So dien thoai: %s\n", student[i].phone);
    }
    return 0;
}
