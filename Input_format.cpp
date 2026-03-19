#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n;
    long l;
    char c;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf", &n, &l, &c, &f, &d);
    
    printf("%d\n", n);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);
    
    return 0;
}
