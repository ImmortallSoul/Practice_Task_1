#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double length;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    length = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("%.6lf\n", length);
    return 0;
}
