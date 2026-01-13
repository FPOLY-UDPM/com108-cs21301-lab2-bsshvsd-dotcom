/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // Khai báo biến
    int bankinh = 0;
    // Nhập dữ liệu
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d", &bankinh);

    // Xử lý, tính toán
    float chuvi = 2 * 3.14 * bankinh;
    float dientich = 3.14 * bankinh * bankinh

    // Hiển thị kết quả

    printf("Chu vi hinh tron la: %.2f\n", chuvi);
    printf("Dien tich hinh tron la: %.2f\n", dientich);
    return 0;
}