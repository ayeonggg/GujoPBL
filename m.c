#include<stdio.h>
int main(int argc, char* argv[])
{
	int a[3] = { 3,2,1 };
	int i, j, tmp, n = 0; //n은 회전수
	char swap; //숫자 바꾸기를 할 필요가 있는지를 알려준다.

	for (i = 0;i < 5 - 1;i++)
	{
		swap = 'N'; //숫자 바꾸기가 안 됐음으로 초기화
		for (j = 0;j < 5 - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swap = 'Y'; //숫자 바꾸기가 됐음을 알려준다.
			}
		}
		if (swap == 'N')
			break;
		n++;
	}

	for (i = 0; i < 5;i++)
	{
		printf("%d, ", a[i]); //정렬된 결과 출력
	}
	printf("회전 횟수: %d", n); //회전수 출력
	return 0;
}