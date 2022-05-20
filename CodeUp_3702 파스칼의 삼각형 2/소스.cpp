#include <iostream>
#define N 100000000
using namespace std;

int memo[50][50];
int f(int x, int y)
{
	if (memo[x][y])
		return memo[x][y];
	if (x == 0 || y == 0)
		return memo[x][y] = 1;

	return memo[x][y] = (f(x - 1, y) + f(x, y - 1)) % N;
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << f(x - 1, y - 1);
	return 0;
}