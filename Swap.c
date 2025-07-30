// Khong can bien tam 
#include <stdio.h>

int main(){
    int a, b;
    printf ("Nhap hai so a va b: \n");
    scanf ("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf ("Sau khi swap: %d %d\n", a, b);
    return 0;
}