#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    double sum_val = 0;
    double score;
    double result;

    for (int i=0; i<n; i++){
        scanf("%lf ", &score);
        sum_val+=score;
        result = sum_val/n;
    }
    printf("%.1lf\n", result);

    if (result >= 4.0) {
        printf("Perfect");
    }
    else if (result >=3.0){
        printf("Good");
    }
    else {
        printf("Poor");
    }
    return 0;
}