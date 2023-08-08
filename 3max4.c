#include <stdio.h>

int find_third_max(int a, int b, int c, int d) {
    int max1, max2, max3;
    max1 = max2 = max3 = a;

    if (b > max1) {
        max3 = max2;
        max2 = max1;
        max1 = b;
    } else if (b > max2) {
        max3 = max2;
        max2 = b;
    } else if (b > max3) {
        max3 = b;
    }

    if (c > max1) {
        max3 = max2;
        max2 = max1;
        max1 = c;
    } else if (c > max2) {
        max3 = max2;
        max2 = c;
    } else if (c > max3) {
        max3 = c;
    }

    if (d > max1) {
        max3 = max2;
        max2 = max1;
        max1 = d;
    } else if (d > max2) {
        max3 = max2;
        max2 = d;
    } else if (d > max3) {
        max3 = d;
    }

    return max3;
}

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = find_third_max(a, b, c, d);
    printf("The third maximum number is: %d\n", result);

    return 0;
}

