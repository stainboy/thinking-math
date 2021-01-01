#include<stdio.h>
#include<math.h>


typedef struct {
    long double x;
    long double y;
} Point;

static inline long double distance(Point *a, Point *b) {  
    return sqrt(pow(a->x-b->x, 2) + pow(a->y-b->y, 2));
}

static inline long double pi() {
    int iterator = 1000000000, i;
    long double delta = 1.0/iterator, d=0;
    Point _a,_b,*a=&_a,*b=&_b,*c;
    a->x = 1;
    a->y = 0;

    for (i=0; i<iterator; i++) {
        b->x = 1-i*delta;
        b->y = sqrt(1 - pow(b->x, 2));
        d += distance(a, b);

        c = a;
        a = b;
        b = c;
    }
    
    return d*4/2;
}

int main() {
    long double p = pi();

    printf("calc_pi=%.16Lf, real_pi=%.16f, margin of error is %.16Lf\n", p, M_PI, p-M_PI);
    return 0;
}
