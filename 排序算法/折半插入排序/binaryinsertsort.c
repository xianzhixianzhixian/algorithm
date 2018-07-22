#include<stdio.h>

/**
  * 折半插入排序算法 2018.07.22
  */
int main()
{
	int array[10] = {10,1,3,2,75,1000,379,0,-1,10};
	//插入排序算法下标从一开始
	for(int i=1;i<10;i++)
	{
		int start = 0; //有序数组的开头下标
		int end = i-1; //有序数组的末尾下标
		int dist = array[i]; //要被插入的数
		int middle = 0;
		//查找要被插入的下标
		while(start <= end)
		{
			middle = (start+end)/2;
			if(dist < array[middle])
			{
				end = middle-1;
			}
			else
			{
				start = middle+1;
			}
		}
		//所有数右移,移完之后插入目标数
		for(int j=i;j>start;j--)
		{
			array[j] = array[j-1];
		}
		//交换array[i]与array[start]的位置
		array[start] = dist;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
