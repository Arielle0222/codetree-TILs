
#include <stdio.h>

int main() {

	int a_e, a_m, b_e, b_m;
	scanf("%d %d %d %d", &a_m, &a_e, &b_m, &b_e);

    if(a_e>b_e && a_m>b_m){
        printf("1");
    }
    else{
        printf("0");
    }

	return 0;

}
