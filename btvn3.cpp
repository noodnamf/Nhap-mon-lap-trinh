#include <stdio.h>

int main() { float a, b; 
             char phepToan;
    printf("Nhap vao so a: ");
     scanf("%f", &a);
   printf("Nhap vao so b: ");
    scanf("%f", &b);
  printf("Nhap phep toan (+, -, *, /, %%): ");
   scanf(" %c", &phepToan); 
if (phepToan == '+') {printf("Ket qua: %f\n", a + b);} 
else if (phepToan == '-') {printf("Ket qua: %f\n", a - b);} 
else if (phepToan == '*') {printf("Ket qua: %f\n", a * b);} 
else if (phepToan == '/') 
	{
if (b == 0) {printf("Loi: Khong the chia cho 0\n");}
	else {printf("Ket qua: %f\n", a / b);}
	} 
else if (phepToan == '%') {
    int so_a = a; 
    int so_b = b;  
    if (so_b == 0) {printf("Loi: Khong the chia cho 0\n");} 
		else {printf("Ket qua (chia lay du): %d\n", so_a % so_b);}} 
else {printf("Ban nhap sai phep toan roi!\n");}
return 0;
}