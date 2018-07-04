#include <stdio.h>

/**
 * 冒泡排序,由小到大排序
 **/
int main()
{
	int array[5] = {21, 69, 90, 55, 12};
	
	//开始排序
	for(int i=0; i < 5-1; i++)
	{
		for(int j= 0; j < 5-i-1; j++)
		{
			if(array[j] > array[j+1])
			{
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}

	for(int i=0; i<5; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}
