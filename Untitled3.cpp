#include <stdio.h>

int main() {
     // Khai bao và khoi tao hai bien kieu so nguyen
    int a = 10;
    int b = 20;

    // Tinh tong hieu tich va thuong 
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b; 

    // In k?t qu? ra màn h?nh
    printf("Tong cua %d và %d là: %d\n", a, b, sum);
    printf("Hieu cua %d và %d là: %d\n", a, b, difference);
    printf("Tich cua %d và %d là: %d\n", a, b, product);
    printf("Thuong cua %d và %d là: %.2f\n", a, b, quotient);

    return 0;
}

