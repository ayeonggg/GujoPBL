#include<stdio.h>
int main(int argc, char* argv[])
{
	int a[3] = { 3,2,1 };
	int i, j, tmp, n = 0; //n�� ȸ����
	char swap; //���� �ٲٱ⸦ �� �ʿ䰡 �ִ����� �˷��ش�.

	for (i = 0;i < 5 - 1;i++)
	{
		swap = 'N'; //���� �ٲٱⰡ �� �������� �ʱ�ȭ
		for (j = 0;j < 5 - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swap = 'Y'; //���� �ٲٱⰡ ������ �˷��ش�.
			}
		}
		if (swap == 'N')
			break;
		n++;
	}

	for (i = 0; i < 5;i++)
	{
		printf("%d, ", a[i]); //���ĵ� ��� ���
	}
	printf("ȸ�� Ƚ��: %d", n); //ȸ���� ���
	return 0;
}