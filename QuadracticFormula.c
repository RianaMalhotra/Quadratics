#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double posRoot;
    double negRoot;
    double a;
    double b;
    double c;
    printf("Quadratic Equation Style = ax^2 + bx + c\n");
    printf("Enter a:\n");
    scanf("%lf", &a);
    printf("Enter b:\n");
    scanf("%lf", &b);
    printf("Enter c:\n");
    scanf("%lf", &c);
    
    posRoot = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    negRoot = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
    
    printf("Roots = %lf and %lf", posRoot, negRoot);
    
    return 0;
}
