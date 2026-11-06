# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    int h;
    
    // Nhập chiều cao h từ bàn phím
    scanf("%d", &h);
    
    // Vòng lặp duyệt qua từng hàng từ 1 đến h
    for (int i = 1; i <= h; i++) {
        // Hàng đầu tiên in ra 1 dấu sao
        if (i == 1) {
            printf("*\n");
        } 
        // Hàng cuối cùng (đáy tam giác) in đầy đủ h dấu sao
        else if (i == h) {
            for (int j = 1; j <= h; j++) {
                printf("*");
            }
            printf("\n");
        } 
        // Các hàng ở giữa: in 1 sao ở đầu, các khoảng trắng ở giữa, và 1 sao ở cuối
        else {
            printf("*");
            for (int j = 1; j <= i - 2; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }
    
    return 0;
}
