#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int>& nums) {
	int n = nums.size();
	if (n == 0) return 0;
	if (n == 1) return nums[0];
	vector<int> dp(n);
	dp[0] = nums[0];
	dp[1] = max(nums[0], nums[1]);
	for (int i = 2; i < n; i++)
		dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
	return dp[n - 1];
}


int main() {
	vector<int> arr = { 1, 2, 3, 4, 5 };
	cout << solution(arr);

	return 0;
}
