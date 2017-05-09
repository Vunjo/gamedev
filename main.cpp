#include <cstdio>
#include <cmath>

int main (){
    float m[4], a, x, y;
    printf("angle = ");
    scanf("%f", &a);
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    m[0] = cos((M_PI/180) * a);
    m[1] = -sin((M_PI/180) * a);
    m[2] = -m[1];
    m[3] = m[0];

    printf("%.2f,%.2f\n%.2f,%.2f\n", m[0], m[1], m[2], m[3]);

    float x2 = m[0] * x + m[1] * y;
    float y2 = m[2] * x + m[3] * y;

    printf("X os = %.2f, y os = %.2f\n", x2, y2);



    return 0;
}
