#include <stdio.h>

int main() {
   
    int length = 10;
    int width = 5;  


    int perimeter = 2 * (length + width);
    int area = length * width;          

    // In k?t qu? ra màn h?nh
    printf("Chieu dai cua hinh chu nhat la: %d\n", length);
    printf("Chieu rong cua hinh chu nhat la: %d\n", width);
    printf("Chu vi cua hinh chu nhat la: %d\n", perimeter);
    printf("Dien tich cua hinh chu nhat la: %d\n", area);

    return 0;
}

