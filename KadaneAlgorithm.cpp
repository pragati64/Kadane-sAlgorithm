#include<iostream>
using namespace std;

int maxSubArraySum(int x[], int size)
{
int max_so_far = x[0];
int curr_max = x[0];

for (int i = 1; i < size; i++)
{
		curr_max = max(x[i], curr_max+x[i]);
		max_so_far = max(max_so_far, curr_max);
}
return max_so_far;
}


int main()
{
int x[] = {-7, -5, 3, -1, -4, 2, 6, -3};
int n = sizeof(x)/sizeof(x[0]);
int max_sum = maxSubArraySum(x, n);
cout << "Maximum contiguous sum is " << max_sum;
return 0;
}
