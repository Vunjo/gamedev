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
    m[1] = sin((M_PI/180) * a * (-1));
    m[2] = sin((M_PI/180) * a);
    m[3] = cos((M_PI/180) * a);
    printf("%f,%f,\n,%f,%f", m[0], m[1], m[2], m[3]);
    




    return 0;
}
