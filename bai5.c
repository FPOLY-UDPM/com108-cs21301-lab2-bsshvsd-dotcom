/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    int so1, so2;
    int so1=0;
    int so2=0;
    printf("Chương trình tính tích và thương của 2 số\n");
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    int tich = so1 * so2;
    float thuong = (float)so1 / so2;
    printf("Tich cua 2 so la: %d\n", tich);
    printf("Thuong cua 2 so la: %.2f\n", thuong);
    return 0;
} 