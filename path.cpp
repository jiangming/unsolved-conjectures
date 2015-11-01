#include <cstdio>
#include <iostream>
using namespace std;

int quicksort(int a[],int low,int high)
{
	int pivot_item = a[low];
	int left = low + 1;
	int right = high;

	while (left < right)
	{
		while (a[left] < pivot_item)
		{
			left++;
		}
		while (a[right] > pivot_item)
		{
			right--;
		}
		if (left < right)
		{
			int temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}

	a[low] = a[right];
	a[right] = pivot_item;
	return right;

}

int attack()
{

	int random = 100;
	int hour = 8;
	while (random > 1)
	{
		while (random % 2 != 0)
		{
			random = random * 3 + 1;
		}
		while (random % 2 == 0)
		{
			random = random / 2;
		}
		if (hour - random > 4)
		{
			if (hour + random < 11)
			{
				printf("Malicious Behavior!\n");
			}
		}
	}
	return 0;
}

int main()
{
	int a[10]= {1,2,3,4,5,6,7,8,9,10};
	quicksort(a,0,9);
	attack();
	printf("Hello World\n");
	return 0;
}


