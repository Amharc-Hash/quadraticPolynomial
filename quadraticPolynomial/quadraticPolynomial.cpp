#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    double a, b, c, x1, x2;
    printf("input coefficient x^2,x,number Respectively (follow this pattern : 1 5 6) : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    x1 = ((-1 * b) + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
    x2 = ((-1 * b) - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
    if (pow(b, 2) - (4 * a * c) == 0)
    {
        printf("x = %.2lf", x1);
    }
    else if (pow(b, 2) - (4 * a * c) > 0)
    {
        if (x1 > x2) {
            printf("x1 = %.2lf, x2 = %.2lf", x2, x1);
        }
        else if (x1 < x2)
        {
            printf("x1 = %.2lf, x2 = %.2lf", x1, x2);
        }

    }
    else if (pow(b, 2) - (4 * a * c) < 0)
    {
        printf("impossible to solve");
    }

    return 0;

}
