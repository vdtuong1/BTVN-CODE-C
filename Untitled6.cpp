#include <stdio.h>

int main() {
   
    const float PI = 3.14; 
    float radius = 5.0;    

    float circumference = 2 * PI * radius;     
    float area = PI * radius * radius;         

    // In k?t qu? ra màn h?nh
    printf("Ban kinh cua hinh tron la: %.2f\n", radius);
    printf("Chu vi cua hinh tron la: %.2f\n", circumference);
    printf("Dien tich cua hinh tron la: %.2f\n", area);

    return 0;
}

