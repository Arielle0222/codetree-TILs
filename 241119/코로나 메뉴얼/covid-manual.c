#include <stdio.h>

int main() {
    // Variable declaration
    char p1_s, p2_s, p3_s;
    int p1_t, p2_t, p3_t;
    int cnt = 0;

    // Input
    scanf(" %c %d", &p1_s, &p1_t);
    scanf(" %c %d", &p2_s, &p2_t);
    scanf(" %c %d", &p3_s, &p3_t);

    // Count individuals meeting the condition
    if (p1_s == 'Y' && p1_t >= 37) cnt++;
    if (p2_s == 'Y' && p2_t >= 37) cnt++;
    if (p3_s == 'Y' && p3_t >= 37) cnt++;

    // Output based on count
    if (cnt >= 2) {
        printf("E");
    } else {
        printf("N");
    }

    return 0;
}
