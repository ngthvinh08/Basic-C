#include <stdio.h>

int fibo(int n){
    if (n == 0 || n == 1) return 1;
    else return  fibo (n-1) + fibo (n-2); 
}

int main(){
    int n;
    printf ("Nhap vao so n: \n");
    scanf ("%d", &n);
    int result = fibo(n);
    printf ("Fibo(%d)= %d\n", n, result);
    return 0;
}