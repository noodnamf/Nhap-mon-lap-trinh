# Nhap-mon-lap-trinh
https://www.mediafire.com/file/9bhv8wb4xbcphcz/NMLT.rar/file
https://youtube.com/playlist?list=PLpNWrRDTPe1EQ2IO_PtqVIhljoRxNKrbe&si=4JliztQbCN0lgbgP
#include <stdio.h>

int main() {
    int i = 2;
    char ch = 'A';
    float x = 5.5;
    printf("XX %3dYY%cZZ%4.1fXX\n", i, ch, x);
    printf("X %3d %c %4.1f", i, ch, x);
    return 0;
}
#include <stdio.h>

int main() {
    char ch = 'A';
    printf("XX %x XX", ch);
    printf("XX %4x XX", ch);
    printf("XX %04x XX", ch);
    printf("XX %cXX", ch);
    printf("XX %3cXX", ch);
    printf("XX %-3cXX", ch);
    printf("DHCN :\" ");
    printf("DHCN :%% ");
    return 0;
}
#include <stdio.h>

int main() {
    float x = 5.5;
    printf("XX %f XX", x);
    printf("XX %1.0f XX", x);
    printf("XX %1.2f XX", x);
    printf("XX %5.2f XX", x);
    return 0;
}
#include <stdio.h>

int main() {
    float x = 5.5;
    printf("XX %e XX", x);
    printf("XX %E XX", x);
    printf("XX %f XX", x);
    printf("XX %10.5f XX", x);
    printf("XX %-10.5f XX", x);
    return 0;
}
#include <stdio.h>

int main() {
    int i = 2;
    printf("XX %d XX", i);
    printf("XX %3d XX", i);
    printf("XX %-3d XX", i);
    printf("XX %03d XX", i);
    printf("XX %+3d XX", i);
    return 0;
}


