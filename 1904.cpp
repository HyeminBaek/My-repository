#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int* arr = new int[N + 1];
	arr[1] = 1; arr[2] = 2;
	for (int i = 3; i <= N; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;

	cout << arr[N] % 15746;

	return 0;
}