#include<stdio.h>
#include<stdlib.h>
void nhapMang(int **array, int *size);
void hienThiMnag(int *array, int size);
int tinhDoDaiMnag(int *array, int size);
int tinhTongMang(int *array, int size);
int timMax(int *arr, int size);
int main(){
	int choice;
	int size=0;
	int *array=NULL;
	do{
		printf("____________MENU____________\n");
		printf("1.Nhap vao so phan tu va tung phan tu.\n");
		printf("2.Hien thi cac phan tu trong mang.\n");
		printf("3.Tinh do dai mang.\n");
		printf("4.Tong cac phan tu trong mang.\n");
		printf("5.Hien thi phan tu lon nhat.\n");
		printf("6.Thoat.\n");
		printf("Lua chon cua ban: ");
		scanf("%d",choice);
		switch(choice){
			case 1:
            nhapMang(&array, &size);
            break;
        case 2:
            if (array != NULL) {
                hienThiMang(array, size);
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 3:
            if (array != NULL) {
                printf("Do dai mang: %d\n", tinhDoDaiMang(array, size));
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 4:
            if (array != NULL) {
                printf("Tong cac phan tu trong mang: %d\n", tinhTongMang(array, size));
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 5:
            if (array != NULL) {
                printf("Phan tu lon nhat trong mang: %d\n", timPhanTuLonNhat(array, size));
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
			case 6: 
				printf("Cam on ban da su dung dich vu.");
				break;
			default: 
				printf("Lua chon khong hop le, vui long chon lai.");
		}
	}while(choice!=6);
	free(arr);
	return 0;
}
void nhapMang(int **arr, int *size) {
    printf("Nhap so phan tu: ");
    scanf("%d", size);

    *arr = (int *)malloc(*size * sizeof(int));
    if (*arr == NULL) {
        printf("Khong du bo nho!");
        exit(1);
    }

    for (int i = 0; i < *size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (*arr) + i);
    }
}

void hienThiMang(int *arr, int size) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int tinhDoDaiMang(int *arr, int size) {
    return size;
}

int tinhTongMang(int *arr, int size) {
    int tong = 0;
    for (int i = 0; i < size; i++) {
        tong += *(arr + i);
    }
    return tong;
}

int timPhanTuLonNhat(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

