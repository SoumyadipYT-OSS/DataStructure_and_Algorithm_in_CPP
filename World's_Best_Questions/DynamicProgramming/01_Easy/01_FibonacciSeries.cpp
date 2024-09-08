/*
	• Problem: Write a program to find the nth Fibonacci number using dynamic programming.
	• Concepts: Basic DP, memoization.
*/

#include <iostream>
#include <vector>
using namespace std;

int fibo(int n) {
	if (n <= 1) return n;
	vector<int> dp(n + 1);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[n];
}


// main method
int main() {
	cout << "Enter nth-term: ";
	int N=0; 
	cin >> N;
	cout << "Result: " << fibo(N);

	return 0;
}
