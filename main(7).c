#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 15
unsigned long long factorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

unsigned long long count_anagrams(char *word) {
    int freq[256] = {0};
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        freq[toupper(word[i])]++;
    }

    unsigned long long result = factorial(len);

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            result /= factorial(freq[i]);
        }
    }

    return result;
}

int main() {
    char word[MAX_LEN];
    printf("Введіть слово капсом: ");
    scanf("%s", word);

    unsigned long long result = count_anagrams(word);
    printf("Кількість анаграм: %llu\n", result);

    return 0;
}
