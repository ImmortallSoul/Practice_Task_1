#include <stdio.h>
#include <math.h>
int count_intersections(int x1, int y1, int r1, int x2, int y2, int r2) {
    double dx = x1 - x2;
    double dy = y1 - y2;
    double d = sqrt(dx * dx + dy * dy);

    if (d == 0 && r1 == r2) return -1;
    else if (d > r1 + r2 || d < fabs(r1 - r2)) return 0;
    else if (d == r1 + r2 || d == fabs(r1 - r2)) return 1;
    else return 2;
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    printf("Введіть координати центру першого кола (x1 y1) та його радіус (r1):\n");
    scanf("%d %d %d", &x1, &y1, &r1);

    printf("Введіть координати центру другого кола (x2 y2) та його радіус (r2):\n");
    scanf("%d %d %d", &x2, &y2, &r2);

    int result = count_intersections(x1, y1, r1, x2, y2, r2);

    printf("Кількість точок перетину: ");
    if (result == -1)
        printf("нескінченно багато (-1)\n");
    else
        printf("%d\n", result);

    return 0;
}
