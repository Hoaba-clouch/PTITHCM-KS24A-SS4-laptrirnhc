#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    int daysInFeb = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day >= 1 && day <= 31) {
                printf("Ngay hop le.\n");
            } else {
                printf("Ngay khong hop le.\n");
            }
            break;
        case 4: case 6: case 9: case 11:
            if (day >= 1 && day <= 30) {
                printf("Ngay hop le.\n");
            } else {
                printf("Ngay khong hop le.\n");
            }
            break;
        case 2:
            if (day >= 1 && day <= daysInFeb) {
                printf("Ngay hop le.\n");
            } else {
                printf("Ngay khong hop le.\n");
            }
            break;
        default:
            printf("Thang khong hop le.\n");
    }

    return 0;
}
