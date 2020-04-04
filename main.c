#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592654

int main()
{
    float radius, height, volume, surface_area;

    /* Print heading */

    printf("\n Cylinder.cbp");
    printf("\n Computes volume and surface area of a cylinder");

    /* read in radius and height */
    printf("\n\n Enter radius of cylinder: ");
    scanf("%f", &radius);
    printf(" Enter height of cylinder: ");
    scanf("%f", &height);

    /* compute volume and surface area */

    volume = PI * radius * radius * height;
    surface_area = 2.0 * PI * radius * (radius + height);

    /* print results */

    printf("\n Volume of cylinder is:   %10.4f", volume);
    printf("\n Surface area of cylinder is:   %10.4f", surface_area);

    return 0;
}
