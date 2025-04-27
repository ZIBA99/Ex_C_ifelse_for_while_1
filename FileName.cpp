#include <stdio.h>

int main() {
    int num;
    printf("10진수 숫자를 입력하세요: ");
    scanf_s("%d", &num); // 사용자로부터 10진수 입력 받기

    printf("16진수로는 %X 입니다.\n", num); // %X를 사용해 16진수 출력
    return 0;
}

void print_gugudan(int start, int end) {
    int i, dan;
    for (dan = start; dan <= end; dan++) { // start부터 end까지 단 반복
        printf("\n%d단:\n", dan);
        for (i = 1; i <= 9; i++) { // 각 단마다 1~9까지 곱해서 출력
            printf("%d x %d = %d\n", dan, i, dan * i);
        }
    }
}

int main() {
    int a, b, temp;
    printf("첫 번째 숫자를 입력하세요: ");
    scanf_s("%d", &a); // 첫 번째 숫자 입력
    printf("두 번째 숫자를 입력하세요: ");
    scanf_s("%d", &b); // 두 번째 숫자 입력

    // 입력 순서 상관없이 작은 숫자가 start가 되도록 정렬
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    print_gugudan(a, b); // 구구단 출력 함수 호출

    return 0;
}

// 유클리드 호제법으로 최대공약수 구하는 함수
int gcd(int a, int b) {
    int temp;
    while (b != 0) { // b가 0이 될 때까지 반복
        temp = a % b; // a를 b로 나눈 나머지를 temp에 저장
        a = b; // b를 a로
        b = temp; // 나머지를 b로
    }
    return a; // 최대공약수 반환
}

int main() {
    int num1, num2;
    printf("첫 번째 숫자를 입력하세요: ");
    scanf_s("%d", &num1);
    printf("두 번째 숫자를 입력하세요: ");
    scanf_s("%d", &num2);

    printf("최대 공약수는 %d 입니다.\n", gcd(num1, num2));
    return 0;
}

int main() {
    int cream, shrimp, coke;
    int total = 7000; // 현재 가진 돈
    int cream_price = 500;
    int shrimp_price = 700;
    int coke_price = 400;

    printf("가능한 구매 조합:\n");

    // 크림빵을 1개 이상 사는 경우 반복
    for (cream = 1; cream <= total / cream_price; cream++) {
        // 새우깡을 1개 이상 사는 경우 반복
        for (shrimp = 1; shrimp <= total / shrimp_price; shrimp++) {
            // 콜라를 1개 이상 사는 경우 반복
            for (coke = 1; coke <= total / coke_price; coke++) {
                // 총합이 3500원이 되는 조합 찾기
                if (cream * cream_price + shrimp * shrimp_price + coke * coke_price == total) {
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cream, shrimp, coke);
                }
            }
        }
    }

    return 0;
}

// 소수인지 판별하는 함수
int is_prime(int num) {
    int i;
    if (num < 2) return 0; // 2보다 작은 수는 소수가 아님

    // 2부터 sqrt(num)까지 나눠보기
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) // 나누어 떨어지면 소수 아님
            return 0;
    }
    return 1; // 나누어 떨어지지 않으면 소수
}

int main() {
    int count = 0; // 소수 개수 세기
    int num = 2; // 2부터 시작

    printf("처음 20개의 소수:\n");
    while (count < 20) { // 20개 소수 찾을 때까지
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++; // 다음 숫자로 이동
    }
    printf("\n");

    return 0;
}

int main() {//생각 더 해보기
    int seconds, hour, minute, second;
    printf("초를 입력하세요: ");
    scanf_s("%d", &seconds); // 총 초 입력 받기

    hour = seconds / 3600; // 1시간 = 3600초
    minute = (seconds % 3600) / 60; // 남은 초에서 분 계산
    second = seconds % 60; // 남은 초 계산

    printf("%d초는 %d시간 %d분 %d초 입니다.\n", seconds, hour, minute, second);

    return 0;
}


