#include <stdio.h>

float maximum(float x, float y);
float minimum(float x, float y);
void prn_info(void);

int main(void)
{
        int i,n;
        float max, min, x;

        prn_info();
        printf("Input n: ");
        scanf("%d", &n);
        
        
    // 첫 번째 입력을 받기 전에 max와 min을 초기화
    printf("Input 1 compare number: ");
    scanf("%f", &x);
    max = min = x; // 입력받은 값으로 초기화, 이렇게 나눠줘야 정상 출력이 가능했음 

    for (i = 2; i <= n; ++i) { // 두 번째 입력부터 시작
        printf("Input %d compare number: ", i);
        scanf("%f", &x);
        max = maximum(max, x);
        min = minimum(min, x);
    }

        printf("Max number is %f",max);
        printf("\nMin number is %f",min);
        return 0;
}

float maximum(float x, float y){
        if (x>y)
                return x;
        else
                return y;
}


float minimum(float x, float y){
        if(x<y)
                return x;
        else
                return y;
}


void prn_info(void){
        printf("\n%s\n%s\n\n",
                        "This program reads an integar calue for n, and then",
                        "processes n real numbers to find max and min values.");
}
