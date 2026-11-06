# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    double epsilon;
    
    // Nhập giá trị epsilon từ bàn phím (ví dụ: 1e-2 hoặc 1e-3)
    scanf("%lf", &epsilon);
    
    double sum = 0.0;
    int n = 1;
    
    // Vòng lặp tính tổng và kiểm tra điều kiện dừng
    while (1) {
        double term = 1.0 / n;
        sum += term;
        
        // Khi số hạng 1/n nhỏ hơn epsilon thì dừng vòng lặp
        if (term < epsilon) {
            break;
        }
        n++;
    }
    
    // In kết quả theo đúng định dạng mẫu của đề bài
    printf("n = %d\n", n);
    printf("nth sum = %f\n", sum);
    printf("value = %E\n", 1.0 / n);
    
    return 0;
}

