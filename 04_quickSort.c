#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ��� �ӵ� : O(N*logN)
int number = 10;
int data[10] = { 10,1,5,8,7,6,4,3,2,9 };

void quickSort(int* data, int start, int end) {
	if (start >= end) { // ���Ұ� 1���� ���
		return;
	}
	int key = start; //pivot ��
	int i = start + 1; //�����ϴ°�
	int j = end; // �ڿ��� �����ϴ°�
	int temp; // �ӽú���

	while(i <= j) { // ������������ �ݺ� (i>j)�϶�����
		while (data[i] <= data[key]) { // Ű ������ ū���� ���������� ���������� �̵�
			i++;
		}
		while (data[j] >= data[key]&&j>start) { // Ű ������ �������� ���������� �������� �̵�
			j--; // start���ٴ� Ŀ����
		}
		if (i > j) { // ���� ������ ���¸� Ű ���� ��ü
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j+1, end);
}
int main(void) {
	quickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}


	return 0;
}
