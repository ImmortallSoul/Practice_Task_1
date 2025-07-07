#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    int dist = y - x;
    int step = 1;
    int total = 0;
    int used = 0;

    while (used < dist) {
        total++;
        used += step;
        if (total % 2 == 0) {
            step++;
        }
    }
    return total;
}

int main() {
    int x, y;
    printf("Введіть x та y (через пробіл): ");
    scanf("%d %d", &x, &y);

    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}
