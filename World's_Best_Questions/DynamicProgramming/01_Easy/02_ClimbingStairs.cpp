#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
	if (n <= 2) return n;
	vector<int> dp(n + 1);
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	return dp[n];
}


// main method
int main() {
	int N;
	cout << "Enter total steps: ";
	cin >> N;
	cout << climbStairs(N) << endl;

	return 0;
}
