#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#if 0

//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
int main(){
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++){
		if (i % 10 == 9){
			count++;
		}
		if (i / 10 == 9){//else if (i / 10 == 9)  ������ж������С�9��
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
int main(){
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i < 101; i++){
		sum = sum + flag * 1.0 / i;//1 & i ����int
		flag = -flag;
	}
	printf("%lf\n", sum);//double sum
	system("pause");
	return 0;
}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
void Show(int arr[], int len){
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 12, 23, 4, 43, 2, 76, 54, 7, 65, 11 };
	int i = 0;
	int tmp = 0;
	Show(arr1,10);	
	Show(arr2, 10);
	for (i = 0; i < 10; i++){
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	Show(arr1, 10);
	Show(arr2, 10);
	system("pause");
	return 0;
}

int main(){
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 12, 23, 4, 43, 2, 76, 54, 7, 65, 11 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 10; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}                                                           
	for (i = 0; i < 10; i++){	
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


//�������������Լ��
int main(){
	int a, b;
	int c = 0;
	scanf("%d%d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	while (a%b != 0){
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n", c);
	system("pause");
	return 0;
}

int main()
{
	int a, b, t, i;
	scanf("%d%d", &a, &b);
	t = 1;
	for (i = 2; i <= a && i <= b; i++){
		while (a%i == 0 && b%i == 0)
		{
			t = t*i;
			a = a / i;
			b = b / i;
		}
	}
	printf("%d\n", t);
	system("pause");
	return 0;
}


//���������Ӵ�С���
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	scanf("%d%d%d", &a, &b, &c);
	printf("a=%d    b=%d   c=%d\n", a, b, c);
	if (a < b){
		tmp = b;
		b = a;
		a = tmp;
	}
	if (a < c){
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c){
		tmp = c;
		c = b;
		b = tmp;
	}
	printf("a=%d    b=%d   c=%d\n", a, b, c);
	system("pause");
	return 0;
}


//��10�������е����ֵ
int main(){
	int i = 0;
	int arr[] = { 1, 34, 32, 45, -2, -98, 0, 56, -68, 3 };
	int max = arr[0];
	for (i = 0; i < 10; i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}


//����������ʱ���������������������ݣ��Ӽ�����
//���
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d  b=%d\n", a, b);
	system("pause");
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d  b=%d\n", a, b);
	system("pause");
	return 0;
}


//�����������ͱ�����ֵ��������ֵ�����ݽ���
int main(){
	int a, b, tmp;
	scanf("%d%d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d  b=%d\n", a, b);
	system("pause");
	return 0;
}


//����˷��ھ���
int main(){
	int i = 0;
	int n = 0;
	printf("������n��ֵ��");
	scanf("%d", &n);
	for (i = 1; i < n; i++){
		int j = 0;
		for (j = 1; j <= i; j++){
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//��ӡ10~20֮�������
int main(){
	int i = 0;
	int count = 0;
	for (i = 11; i < 20; i+=2){
		int j = 0;
		for (j = 2; j <= sqrt(i); j++){
			if (i%j == 0){
				break;
			}
		}
		if (j>sqrt(i)){
			count++;
			printf("%d\n", i);
		}
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}

int main(){
	int i = 0;
	int count = 0;
	for (i = 11; i < 20; i++){
		int j = 0;
		for (j = 2; j <= sqrt(i); j++){
			if (i%j == 0){
				break;
			}
		}
		if (j>sqrt(i)){
			count++;
			printf("%d\n", i);
		}
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}

int main(){
	int i = 0;
	int count = 0;
	for (i = 11; i < 20; i++){
		int j = 0;
		for (j = 2; j <= i/2; j++){
			if (i%j == 0){
				break;
			}
		}//break �����ڶ���forѭ��
		if (j > i / 2){
			count++;
			printf("%d\n", i);
		}
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}

int main(){
	int i = 0;
	int count = 0;
	for (i = 11; i < 20; i++){
		int j = 0;
		for (j = 2; j < i; j++){
			if (i%j == 0){
				break;
			}
		}//break �����ڶ���forѭ��
		if (i == j){
			count++;
			printf("%d\n", i);
		}
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}


//��ӡ1000~2000֮�������
//1���ܱ�4�������ǲ��ܱ�100������
//2���ܱ�400����
int main(){
	int year = 0;
	for (year = 1000; year < 2001; year++){
		//if (year % 4 == 0){
		//	if (year % 100 != 0){
		//		printf("%d\n", year);
		//	}
		//}
		//if (year % 400 == 0){
		//	printf("%d\n", year);
		//}
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			printf("%d\n", year);
		}
	}
	system("pause");
	return 0;
}

//����
int is_leap_year(int y){
	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int main(){
	int year = 0;
	for (year = 1000; year < 2001; year++){
		if (is_leap_year(year) == 1){
			printf("%d\n", year);
		}
	}
	system("pause");
	return 0;
}
#endif