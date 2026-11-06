# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    double r;
    double pi = 3.14159;
    
    // Sử dụng vòng lặp để đọc tất cả các test ẩn (nhiều bộ dữ liệu đầu vào)
    while (scanf("%lf", &r) == 1) {
        double chuvi = 2 * pi * r;
        double dientich = pi * r * r;
        
        // In kết quả làm tròn 5 chữ số phần thập phân
        printf("%.5lf %.5lf\n", chuvi, dientich);
    }
    
    return 0;
}

