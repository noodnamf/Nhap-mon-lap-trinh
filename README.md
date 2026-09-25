# Nhap-mon-lap-trinh
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file

#include <stdio.h>

int main() {
    char tenSP[100];
    float giaGoc, phamTramGiam, giaSauGiam, thueVAT, giaBanCuoi;

    // 1. Nhap thong tin
    printf("Nhap ten san pham: ");
    gets(tenSP); // Hoac dung scanf(" %[^\n]", tenSP); tương thich C-Free

    printf("Nhap gia goc (VND): ");
    scanf("%f", &giaGoc);

    printf("Nhap %% giam gia: ");
    scanf("%f", &phamTramGiam);

    // 2. Tinh toan
    giaSauGiam = giaGoc * (1 - phamTramGiam / 100.0);
    thueVAT = giaSauGiam * 0.10; // Thue VAT 10%
    giaBanCuoi = giaSauGiam + thueVAT;

    // 3. Hien thi thong tin
    printf("\n================ THONG TIN SAN PHAM ================\n");
    printf("Ten san pham:    %s\n", tenSP);
    printf("Gia goc:         %.2f VND\n", giaGoc);
    printf("Giam gia:        %.1f%%\n", phamTramGiam);
    printf("Gia sau giam:    %.2f VND\n", giaSauGiam);
    printf("Thue VAT (10%%):  %.2f VND\n", thueVAT);
    printf("----------------------------------------------------\n");
    printf("GIA BAN CUOI CUNG: %.2f VND\n", giaBanCuoi);
    printf("====================================================\n");

    return 0;
}


