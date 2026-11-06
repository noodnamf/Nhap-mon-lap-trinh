# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    int n;
    
    // Nhập số tiền cần rút từ bàn phím
    scanf("%d", &n);
    
    int count = 0; // Đếm số cách rút tiền (nếu cần)
    
    // Vòng lặp duyệt số tờ 500
    for (int i500 = 0; i500 * 500 <= n; i500++) {
        // Vòng lặp duyệt số tờ 200
        for (int i200 = 0; i200 * 200 <= n; i200++) {
            // Vòng lặp duyệt số tờ 100
            for (int i100 = 0; i100 * 100 <= n; i100++) {
                // Vòng lặp duyệt số tờ 50
                for (int i50 = 0; i50 * 50 <= n; i50++) {
                    
                    // Kiểm tra nếu tổng giá trị các tờ tiền bằng số tiền n
                    if (i500 * 500 + i200 * 200 + i100 * 100 + i50 * 50 == n) {
                        printf("%d to 500 + %d to 200 + %d to 100 + %d to 50\n", 
                               i500, i200, i100, i50);
                    }
                }
            }
        }
    }
    
    return 0;
}
