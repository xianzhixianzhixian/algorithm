#include<stdio.h>

/**
  *直接插入排序改进2018.07.10
  **/
int main()
{
	int array[6] = {5,1,4,2,4,3};

	//排序开始
	for(int i=1;i<6;i++)
	{
		int j=i-1;
		int temp=array[i];
		//i的左边是有序数组
		while(j>=0 && temp<array[j])
		{
			//当temp比其左边的数的值小时,则将其左边的数依次右移
			//当找到比temp小的下标m时则可停止
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp; //将array[i]与array[m+1]互换
	}

	//输出排序结果
	for(int i=0;i<6;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
