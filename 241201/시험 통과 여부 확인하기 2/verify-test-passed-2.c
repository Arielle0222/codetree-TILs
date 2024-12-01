#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 학생 수 입력

    int cnt = 0; // 합격자 수
    int sub[4];
    
    for (int j = 1; j <= n; j++) { 
        
        int total = 0; //4과목 합산점수

        // 4과목 점수 입력 및 합계 계산
        for (int i = 0; i < 4; i++) {
            scanf("%d", &sub[i]);
            total += sub[i];
        }

        // 평균 계산 및 합격 여부 판단
        double avg = (double)total / 4;
        if (avg >= 60) {
            printf("pass\n");
            cnt++;
        } else {
            printf("fail\n");
        }
    }

    // 최종 합격자 수 출력
    printf("%d\n", cnt);

    return 0;
}
