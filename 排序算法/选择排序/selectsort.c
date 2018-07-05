#include<stdio.h>

/**
  * 选择排序，本例从小到大排序 2018.07.05
  **/
int main()
{
	int array[10] = {10,1,3,2,75,1000,379,0,-1,10};
	int min = array[0];
	int minindex = 0;
	for(int i=0; i<10; i++)
	{
		min = array[i]; //假设最小数为当前下标的数
		minindex = i; //假设最小数下标为当前数下标
		for(int j=i+1; j<10; j++)
		{
			if(array[j] <= min)
			{
				min = array[j]; //更改最小值
				minindex = j; //记录最小数下标
			}
		}
		int temp=array[minindex]; //保存最小数
		array[minindex] = array[i];
		array[i] = temp;
	}
	for(int i=0; i<10; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
