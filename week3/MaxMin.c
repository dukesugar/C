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
        
        
    // ù ��° �Է��� �ޱ� ���� max�� min�� �ʱ�ȭ
    printf("Input 1 compare number: ");
    scanf("%f", &x);
    max = min = x; // �Է¹��� ������ �ʱ�ȭ, �̷��� ������� ���� ����� �������� 

    for (i = 2; i <= n; ++i) { // �� ��° �Էº��� ����
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
