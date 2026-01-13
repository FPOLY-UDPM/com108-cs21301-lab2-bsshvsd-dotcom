/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    // Khai báo biến
    int dai = 0;
    int rong = 0;

    // Nhập dữ liệu
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &dai);
    printf("Nhap chieu rong hinh chu nhat: ");  
    scanf("%d", &rong);

    // Xử lý, tính toán
    int chuvi = 2 * (dai + rong);
    int dientich = dai * rong;

    // Hiển thị kết quả
    printf("Chu vi hinh chu nhat la: %d\n", chuvi);
    printf("Dien tich hinh chu nhat la: %d\n", dientich);
    return 0;

}