# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    int n;
    
    // Nhập số nguyên dương n từ bàn phím
    scanf("%d", &n);
    
    int first = 1; // Biến cờ để kiểm soát việc in dấu phẩy
    
    // Duyệt qua tất cả các số từ 1 đến n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!first) {
                printf(", "); // In dấu phẩy và khoảng trắng giữa các ước
            }
            printf("%d", i);
            first = 0; // Đánh dấu đã in ít nhất một số
        }
    }
    
    printf("\n"); // Xuống dòng ở cuối kết quả
    
    return 0;
}
