# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    int n;
    
    // Nhập số nguyên từ bàn phím
    scanf("%d", &n);
    
    int chuc = n / 10;   // Lấy chữ số hàng chục
    int don_vi = n % 10; // Lấy chữ số hàng đơn vị
    
    // 1. Xử lý phần hàng chục
    if (chuc == 1) {
        printf("muoi");
    } else if (chuc == 2) {
        printf("hai muoi");
    } else if (chuc == 3) {
        printf("ba muoi");
    } else if (chuc == 4) {
        printf("bon muoi");
    } else if (chuc == 5) {
        printf("nam muoi");
    } else if (chuc == 6) {
        printf("sau muoi");
    } else if (chuc == 7) {
        printf("bay muoi");
    } else if (chuc == 8) {
        printf("tam muoi");
    } else if (chuc == 9) {
        printf("chin muoi");
    }
    
    // 2. Xử lý phần hàng đơn vị
    if (don_vi != 0) {
        // Nếu đã có hàng chục thì in thêm dấu cách trước khi in hàng đơn vị
        if (chuc > 0) {
            printf(" ");
        }
        
        // Quy tắc đặc biệt: Số có hàng chục và đơn vị là 5 thì đọc là "lam" (ví dụ: 35 -> ba muoi lam)
        if (chuc > 0 && don_vi == 5) {
            printf("lam");
        } else {
            switch (don_vi) {
                case 1: printf("mot"); break;
                case 2: printf("hai"); break;
                case 3: printf("ba"); break;
                case 4: printf("bon"); break;
                case 5: printf("nam"); break;
                case 6: printf("sau"); break;
                case 7: printf("bay"); break;
                case 8: printf("tam"); break;
                case 9: printf("chin"); break;
            }
        }
    }
    
    printf("\n");
    return 0;
}
