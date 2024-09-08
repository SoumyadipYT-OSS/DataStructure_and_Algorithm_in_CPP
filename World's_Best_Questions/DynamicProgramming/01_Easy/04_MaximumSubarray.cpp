#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int n = nums.size();
	int max_sum = nums[0];
	int curr_sum = nums[0];
	for (int i = 1; i < n; i++) {
		curr_sum = max(nums[i], curr_sum + nums[i]);
		max_sum = max(max_sum, curr_sum);
	}

	return max_sum;
}


int main() {
	vector<int> arr = { 1, 3, 2 };
	cout << "Maximum sub array: ";
	cout << maxSubArray(arr);
	return 0;
}
