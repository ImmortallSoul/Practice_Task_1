#include <stdio.h>
#include <string.h>

#define MAX_P 30

long long dp[MAX_P][5][3];

int main() {
    int p;
    scanf("%d", &p);
    for (int c = 0; c < 5; c++) {
        dp[1][c][1] = 1;
    }
    for (int i = 2; i <= p; i++) {
        for (int prev_digit = 0; prev_digit < 5; prev_digit++) {
            for (int k = 1; k <= 2; k++) {
                if (dp[i-1][prev_digit][k] == 0) continue;
                for (int new_digit = 0; new_digit < 5; new_digit++) {
                    if (new_digit != prev_digit) {
                        dp[i][new_digit][1] += dp[i-1][prev_digit][k];
                    }
                }
                if (k < 2) {
                    dp[i][prev_digit][k+1] += dp[i-1][prev_digit][k];
                }
            }
        }
    }
    long long res = 0;
    for (int c = 0; c < 5; c++) {
        for (int k = 1; k <= 2; k++) {
            res += dp[p][c][k];
        }
    }
    printf("%lld\n", res);
    return 0;
}
