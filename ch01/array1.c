#include<stdio.h>
#define SIZE 11

int main(void) {
	int a[] = { 'A', 'B', 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J', '\0' };
	int index, i;
	char value;
	printf("���� ��ġ : ");
	scanf_s("%d", &index);
	getchar();
	printf("���� ���� : ");
	scanf_s("%c", &value,1); //%c �����̴ϱ� ,1 �� �����. ���̸� ���ϴ� ����. �� ���� ����
	getchar();
	i = SIZE - 1;
	while (i > index) {
		a[i] = a[i - 1];
		i--;
	}
	a[index] = value;
	a[SIZE - 1] = '\0';
	printf("���� ��� : %s\n", a);

	return 0;
}