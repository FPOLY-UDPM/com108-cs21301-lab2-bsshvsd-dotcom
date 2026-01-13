/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    // Khai báo biến
    float diemToan = 0;
    float diemLy = 0;
    float diemHoa = 0;

    // Nhập dữ liệu 
    printf("Nhap diem mon Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &diemHoa);

    // Xử lý, tính toán
    float diemTrungBinh = (diemToan * 3 + diemLy * 2 + diemHoa * 1) / (3 + 2 + 1);

    // Hiển thị kết quả
    printf("Diem trung binh la: %.2f\n", diemTrungBinh);
    return 0;
}