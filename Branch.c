#include <stdio.h>

int factorial(int n){
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int main(){
    int n;
    printf ("Nhap vao so n: ");
    scanf ("%d", &n);
    int result = factorial(n);
    printf ("Giai thua cua %d la: %d\n", n, result);
    return 0;
}