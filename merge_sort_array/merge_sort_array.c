#include <stdio.h>
#include <stdlib.h>

void	merge(int *int_array, int left, int mid, int right)
{
	int i, j, k;
	int n1;
	int n2;

	printf("--l--m--r----%d--%d--%d--\n",left,mid,right);
	printf("--arr[%d]--arr[%d]--arr[%d]--[%d]--[%d]--[%d]--\n",left,mid,right,int_array[left],int_array[mid],int_array[right]);
	n1 = mid - left + 1;
	n2 = right - mid;
	int L[n1];
	int R[n2];
	i = 0;
	while (i < n1)
	{
		L[i] = int_array[left + i];
		i ++;
	}
	j = 0;
	while (j < n2)
	{
		R[j] = int_array[mid + 1 + j];
		j ++;
	}
	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if(L[i] <= R[j])
			int_array[k] = L[i ++];
		else
			int_array[k] = R[j ++];
		k ++;
	}
	while (i < n1)
		int_array[k ++] = L[i ++];
	while (j < n2)
		int_array[k ++] = R[j ++];
}

void	merge_sort(int *int_array, int left, int right)
{
	int	mid;

	if (left < right)
	{
		//avoid overflow for INT_MAX
		mid = left + (right - left) / 2;
		merge_sort(int_array, left, mid);
		merge_sort(int_array, mid + 1, right);
		merge(int_array, left, mid, right);
	}
}

void	print_array(int *arr, int size)
{
	size_t	i;

	i = 0;
	while (i < (size_t)(size - 1))
		printf("%d, ", arr[i++]);
	printf("%d \n", arr[i]);
}

int	main(void)
{
	int	array[] = {12, 23, 42, 13, 43};
	int	array_size;

	array_size = sizeof(array) / sizeof(array[0]);
	printf("the given array is \n");
	print_array(array, array_size);
	merge_sort(array, 0, array_size - 1);
	printf("the output array is \n");
	print_array(array, array_size);
}

// step 1: start

// step 2: declare array and left, right, mid variable

// step 3: perform merge function.
//     if left > right
//         return
//     mid= (left+right)/2
//     mergesort(array, left, mid)
//     mergesort(array, mid+1, right)
//     merge(array, left, mid, right)

// step 4: Stop
