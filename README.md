# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    int h;
    
    // Nhập chiều cao h từ bàn phím
    scanf("%d", &h);
    
    // Vòng lặp ngoài duyệt qua từng hàng từ 1 đến h
    for (int i = 1; i <= h; i++) {
        // In khoảng trắng bên trái (h - i khoảng trắng)
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        
        // In các dấu sao (i dấu sao)
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Xuống dòng sau khi xong mỗi hàng
        printf("\n");
    }
    
    return 0;
}
