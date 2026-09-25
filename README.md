# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file


#include <stdio.h>

int main() {
    float a, b;
    char phepToan;

    // 1. Nhập từng số một thay vì nhập gộp để dễ kiểm soát
    printf("Nhap vao so a: ");
    scanf("%f", &a);
    
    printf("Nhap vao so b: ");
    scanf("%f", &b);

    // 2. Nhập phép toán (mẹo nhỏ: thêm dấu cách trước %c để không bị lỗi trôi lệnh)
    printf("Nhap phep toan (+, -, *, /, %%): ");
    scanf(" %c", &phepToan); 

    // 3. Dùng if - else if vì nó dễ hiểu và giống văn nói thông thường hơn lệnh switch
    if (phepToan == '+') {
        printf("Ket qua: %f\n", a + b);
    } 
    else if (phepToan == '-') {
        printf("Ket qua: %f\n", a - b);
    } 
    else if (phepToan == '*') {
        printf("Ket qua: %f\n", a * b);
    } 
    else if (phepToan == '/') {
        // Kiểm tra b bằng 0 trước khi chia
        if (b == 0) {
            printf("Loi: Khong the chia cho 0\n");
        } else {
            printf("Ket qua: %f\n", a / b);
        }
    } 
    else if (phepToan == '%') {
        // Tạo biến số nguyên mới thay vì dùng ép kiểu (int)a trông khá lạ lẫm
        int so_a = a; 
        int so_b = b;
        
        if (so_b == 0) {
            printf("Loi: Khong the chia cho 0\n");
        } else {
            printf("Ket qua (chia lay du): %d\n", so_a % so_b);
        }
    } 
    else {
        printf("Ban nhap sai phep toan roi!\n");
    }

    return 0;
}

