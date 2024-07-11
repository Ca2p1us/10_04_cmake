#include <stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};

void scan_xyz(void)
{
    int x;
    long y;
    double z;
    printf("int型x = ");
    scanf("%d", x);
    printf("long型 = ");
    scanf("%ld", y);
    printf("double型 = ");
    scanf("%f", z);

    struct xyz a = {x, y, z};

    printf("x = %d\n", a.x);
    printf("y =  %ld\n", a.y);
    printf("z = %f\n", a.z);
}

int main(void)
{
    scan_xyz();
}
