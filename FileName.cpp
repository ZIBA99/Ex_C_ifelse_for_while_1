#include <stdio.h>

int main() {
    int num;
    printf("10���� ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &num); // ����ڷκ��� 10���� �Է� �ޱ�

    printf("16�����δ� %X �Դϴ�.\n", num); // %X�� ����� 16���� ���
    return 0;
}

void print_gugudan(int start, int end) {
    int i, dan;
    for (dan = start; dan <= end; dan++) { // start���� end���� �� �ݺ�
        printf("\n%d��:\n", dan);
        for (i = 1; i <= 9; i++) { // �� �ܸ��� 1~9���� ���ؼ� ���
            printf("%d x %d = %d\n", dan, i, dan * i);
        }
    }
}

int main() {
    int a, b, temp;
    printf("ù ��° ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &a); // ù ��° ���� �Է�
    printf("�� ��° ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &b); // �� ��° ���� �Է�

    // �Է� ���� ������� ���� ���ڰ� start�� �ǵ��� ����
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    print_gugudan(a, b); // ������ ��� �Լ� ȣ��

    return 0;
}

// ��Ŭ���� ȣ�������� �ִ����� ���ϴ� �Լ�
int gcd(int a, int b) {
    int temp;
    while (b != 0) { // b�� 0�� �� ������ �ݺ�
        temp = a % b; // a�� b�� ���� �������� temp�� ����
        a = b; // b�� a��
        b = temp; // �������� b��
    }
    return a; // �ִ����� ��ȯ
}

int main() {
    int num1, num2;
    printf("ù ��° ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &num1);
    printf("�� ��° ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &num2);

    printf("�ִ� ������� %d �Դϴ�.\n", gcd(num1, num2));
    return 0;
}

int main() {
    int cream, shrimp, coke;
    int total = 7000; // ���� ���� ��
    int cream_price = 500;
    int shrimp_price = 700;
    int coke_price = 400;

    printf("������ ���� ����:\n");

    // ũ������ 1�� �̻� ��� ��� �ݺ�
    for (cream = 1; cream <= total / cream_price; cream++) {
        // ������� 1�� �̻� ��� ��� �ݺ�
        for (shrimp = 1; shrimp <= total / shrimp_price; shrimp++) {
            // �ݶ� 1�� �̻� ��� ��� �ݺ�
            for (coke = 1; coke <= total / coke_price; coke++) {
                // ������ 3500���� �Ǵ� ���� ã��
                if (cream * cream_price + shrimp * shrimp_price + coke * coke_price == total) {
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", cream, shrimp, coke);
                }
            }
        }
    }

    return 0;
}

// �Ҽ����� �Ǻ��ϴ� �Լ�
int is_prime(int num) {
    int i;
    if (num < 2) return 0; // 2���� ���� ���� �Ҽ��� �ƴ�

    // 2���� sqrt(num)���� ��������
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) // ������ �������� �Ҽ� �ƴ�
            return 0;
    }
    return 1; // ������ �������� ������ �Ҽ�
}

int main() {
    int count = 0; // �Ҽ� ���� ����
    int num = 2; // 2���� ����

    printf("ó�� 20���� �Ҽ�:\n");
    while (count < 20) { // 20�� �Ҽ� ã�� ������
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++; // ���� ���ڷ� �̵�
    }
    printf("\n");

    return 0;
}

int main() {//���� �� �غ���
    int seconds, hour, minute, second;
    printf("�ʸ� �Է��ϼ���: ");
    scanf_s("%d", &seconds); // �� �� �Է� �ޱ�

    hour = seconds / 3600; // 1�ð� = 3600��
    minute = (seconds % 3600) / 60; // ���� �ʿ��� �� ���
    second = seconds % 60; // ���� �� ���

    printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", seconds, hour, minute, second);

    return 0;
}


