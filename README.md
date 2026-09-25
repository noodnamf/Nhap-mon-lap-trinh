# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file


#include <stdio.h>

int main() {
    float a, b;
    char phepToan;

    // Nhập phép toán và hai số
    printf("Nhap hai so a va b: ");
    scanf("%f %f", &a, &b);
    
    // Xóa bộ đệm trước khi nhập ký tự để tránh trôi lệnh
    while(getchar() != '\n'); 
    
    printf("Nhap phep toan (+, -, *, /, %%): ");
    scanf("%c", &phepToan);

    // Thực hiện phép tính tương ứng và hiển thị kết quả
    printf("Ket qua: ");
    switch (phepToan) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            // Xử lý chia cho 0
            if (b == 0) {
                printf("Loi! Khong the chia cho 0.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '%':
            // Phép chia lấy dư (%) chỉ áp dụng cho số nguyên trong C
            // Xử lý chia cho 0
            if ((int)b == 0) {
                printf("Loi! Khong the chia cho 0.\n");
            } else {
                printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
            }
            break;
        default:
            printf("Phep toan khong hop le!\n");
            break;
    }

    return 0;
}

