#include <stdio.h>

int main() {
     // Khai bao v� khoi tao hai bien kieu so nguyen
    int a = 10;
    int b = 20;

    // Tinh tong hieu tich va thuong 
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b; 

    // In k?t qu? ra m�n h?nh
    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, difference);
    printf("Tich cua %d v� %d l�: %d\n", a, b, product);
    printf("Thuong cua %d v� %d l�: %.2f\n", a, b, quotient);

    return 0;
}

