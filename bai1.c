/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    // Khai báo biến
    int a = 0;
    int b = 0;
    // Nhập dữ liệu
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Xử lý, tính toán
    int hieu = a - b;
    int tong = a + b;

    // Hiển thị kết quả
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu);
    printf("Tong cua %d va %d la: %d\n", a, b, tong);
    return 0;

}