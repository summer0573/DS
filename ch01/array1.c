#include<stdio.h>
#define SIZE 11

int main(void) {
	int a[] = { 'A', 'B', 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J', '\0' };
	int index, i;
	char value;
	printf("삽입 위치 : ");
	scanf_s("%d", &index);
	getchar();
	printf("삽입 문자 : ");
	scanf_s("%c", &value,1); //%c 문자이니까 ,1 을 줘야함. 길이를 정하는 거임. 안 쓰면 오류
	getchar();
	i = SIZE - 1;
	while (i > index) {
		a[i] = a[i - 1];
		i--;
	}
	a[index] = value;
	a[SIZE - 1] = '\0';
	printf("삽입 결과 : %s\n", a);

	return 0;
}