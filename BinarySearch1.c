#include <stdio.h>
#define MaxSize 100
typedef struct
{
	int list[MaxSize];
	int length;
}Table;
int BinarySearch(Table S, int x);

void main()
{
	Table T={{11,22,33,44,55,66,77,88,99},9};
	int i, find, x;
	printf("有序表中的元素：\n");
	for(i=0; i<T.length; i++)
		printf("%4d", T.list[i]);
	printf("\n请输入要查找的元素：");
	scanf("%d",&x);
	find= BinarySearch(T, x);
	if(find)
		printf("元素%d是顺序表中的第%d个元素。\n", x, find);
	else
		printf("没有找到该元素！\n");
}

//在有序表中折半查找元素x，如果找到，则返回该元素在表中的位置，否则返回0 
int BinarySearch(Table S, int x)
{
	int low, high, mid;
	low=0, high=S.length-1;  //设置待查找元素范围的下界和上届 
	while(low<=high)
	{
		mid= (low+high)/2;
		if(S.list[mid]==x)  //如果找到元素，则返回该元素所在的位置 
			return mid+1;
		else if(S.list[mid]<x)  //如果mid所指示的元素小于x，则修改low指针
			low= mid+1;
		else if(S.list[mid]>x)  //如果mid所指示的元素大于x，则修改high指针 
			high= mid+1; 
	}
}
