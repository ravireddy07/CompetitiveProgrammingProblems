// Problem Statement: https://www.codechef.com/FEB21B/problems/FROGS/

/**
 *  Author: Ravi Kanth Gojur
 *  Code Forces: ravireddy07
 *  Code Chef: ravireddy115
 *  Github: ravireddy07
**/

#include <bits/stdc++.h>
#define ll long long int
#define ravireddy07 return
#define ii(a) scanf("%d", &a)
#define ii2(a, b) scanf("%d%d", &a, &b)
#define ii3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define ill(a) scanf("%lld", &a)
#define ill2(a, b) scanf("%lld%lld", &a, &b)
#define ill3(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define for1(i, a, b) for (int i = a; i < b; ++i)
#define for2(i, a, b) for (int i = b; i >= a; --i)
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<ll>
#define vll vector<vector<ll>>
#define pii pair<int, int>
#define unmp unordered_map
#define pqi priority_queue<int>
#define pb push_back
#define sorta(a) sort(a.begin(), a.end())
#define sortd(a) sort(a.begin(), a.end(), greater<>())
#define sortr(a) sort(a.rbegin(), a.rend())
#define yes printf("YES\n")
#define no printf("NO\n")
using namespace std;

int div_ceil(int numerator, int denominator)
{
	std::div_t res = std::div(numerator, denominator);
	return res.rem ? (res.quot + 1) : res.quot;
}

void harry() {
	int n;
	ii(n);
	int weight[n], length[n];

	for (int i = 0; i < n; ++i)
		ii(weight[i]);
	for (int i = 0; i < n; ++i)
		ii(length[i]);

	int match[n + 1] = {0};
	// 3 1 2
	// 1 2 0 (indexes)
	for (int i = 1; i < n + 1; i++) {
		auto it = find(weight, weight + n, i);
		match[i] = distance(weight, it);
	}

	int res = 0;
	int temp;
	for (int i = 2; i < n + 1; ++i) {
		temp = 0;
		if (match[i] <= match[i - 1])
			temp = div_ceil((match[i - 1] + 1 - match[i]), length[match[i]]);
		res += temp;
		match[i] += temp * (length[match[i]]);
	}
	printf("%d\n", res);
	ravireddy07;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	ii(t);
	while (t--)
		harry();
	return 0;
}
