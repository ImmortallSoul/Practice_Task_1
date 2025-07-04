#include <stdio.h>

int main() {
    int t1, t2, t3;
    double speed, time_needed;
    scanf("%d %d %d", &t1, &t2, &t3);
    speed = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    time_needed = 1.0 / speed;
    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time_needed);
    return 0;
}
