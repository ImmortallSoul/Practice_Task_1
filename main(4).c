#include <stdio.h>

#define MOD 12345

int main() {
    int n, i;
    scanf("%d", &n);

    int dp0 = 1;
    int dp1 = 1;
    int dp2 = 0;

    int new_dp0, new_dp1, new_dp2;

    for (i = 2; i <= n; i++) {
        new_dp0 = (dp0 + dp1 + dp2) % MOD;
        new_dp1 = dp0 % MOD;
        new_dp2 = dp1 % MOD;

        dp0 = new_dp0;
        dp1 = new_dp1;
        dp2 = new_dp2;
    }

    int result = (dp0 + dp1 + dp2) % MOD;

    printf("Кількість шуканих послідовностей: %d\n", result);
    return 0;
}
