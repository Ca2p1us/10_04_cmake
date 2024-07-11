#include <stdio.h>
#include <math.h>
#include "task15-1.h"

int main(void)
{
    FILE *fp1, *fp2, *fp3;
    double x, y;
    double i;
    int loop = 400;

    fp1 = FileOpen(fp1, "34714125-1.dat");
    fp2 = FileOpen(fp2, "34714125-2.dat");
    fp3 = FileOpen(fp3, "34714125-3.dat");

    for (int i = 0; i < loop; i++)
    {
        x = x == 0 ? 0 : i * 2 * M_PI / loop;

        fprintf(fp1, "%lf, %lf", x, sin(pow(x, 2)) / x);
        fprintf(fp2, "%lf, %lf", x, 1 / x);
        fprintf(fp3, "%lf, %lf", x, -1 / x);
    }
    fclose(fp1);

    PDF("34714125-1");
    PDF("34714125-2");
    PDF("34714125-3");

    return 0;
}
