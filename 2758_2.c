#include <stdio.h>

void main ()
{

	float a, b;
	double c, d;
	char STR[10];

	scanf("%f %f", &a, &b);
	scanf("%lf %lf", &c, &d);

	printf("A = %f, B = %f\n", a, b);
	printf("C = %lf, D = %lf\n", c, d);

	printf("A = %.1f, B = %.1f\n", a, b);
	printf("C = %.1lf, D = %.1lf\n", c, d);

	printf("A = %.2f, B = %.2f\n", a, b);
	printf("C = %.2lf, D = %.2lf\n", c, d);

	printf("A = %.3f, B = %.3f\n", a, b);
	printf("C = %.3lf, D = %.3lf\n", c, d);

    sprintf(STR,"%.3E",a); STR[9] = '\0';
    printf("a = %s,",STR);
    sprintf(STR,"%.3E",b); STR[9] = '\0';
    printf(" b = %s\n",STR);
    sprintf(STR,"%.3lE",c); STR[9] = '\0';
    printf("c = %s,",STR);
    sprintf(STR,"%.3lE",d); STR[9] = '\0';
    printf(" d = %s\n",STR);

    printf("A = %d, B = %d\n",(int)a,(int)b);
	printf("C = %d, D = %d\n",(int)c,(int)d);

	printf("A = %.0f, B = %.0f\n", a, b);
	printf("C = %.0lf, D = %.0lf\n", c, d);

}
