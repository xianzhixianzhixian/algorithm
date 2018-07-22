#include<stdio.h>

/**
  *直接插入排序2018.07.09
  **/
int main()
{
	int array[6] = {5,1,4,2,4,3};

	//排序开始
	for(int i=1;i<6;i++)
	{
		int j=i-1;
		int temp=0;
		while(j>0)
		{
			//此时处于array[j-1]<=array[j]<=array[j+1]的状态
			if(array[j]>=array[j-1])
			{
				break;
			}
			//右边的数比较小,则需与其左边的数交换位置
			if(array[j]<array[j-1])
			{
				temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
			}
			j--;
		}
	}

	//输出排序结果
	for(int i=0;i<6;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
