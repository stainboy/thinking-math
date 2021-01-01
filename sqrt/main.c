#include<stdio.h>
#include<math.h>

static inline double square_root(double a) {
    int iterator = 100;
    double left = a, right = 0, mid = (left - right)/2 + right, x;

    while (iterator--) {
        x = mid * mid;
        if (x > a) {
            left = mid;
        } else {
            right = mid;
        }
        mid = (left - right)/2 + right;
    }

    return mid;
}

int main() {
    double sqrt_2 = square_root(2);
    double sqrt_3 = square_root(3);
    double sqrt_5 = square_root(5);

    printf("sqrt(2)=%.24f, margin of error is %.24f\n", sqrt_2, sqrt_2-sqrt(2));
    printf("sqrt(3)=%.24f, margin of error is %.24f\n", sqrt_3, sqrt_3-sqrt(3));
    printf("sqrt(5)=%.24f, margin of error is %.24f\n", sqrt_5, sqrt_5-sqrt(5));
    return 0;
}
