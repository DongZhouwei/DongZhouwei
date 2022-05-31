#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a1[1001] = {}, b1[1001] = {};
	int a[1001] = {}, b[1001] = {}, len;
	cin >> a1 >> b1;
	len = strlen(a1);
	for (int i = 0; i <= len - 1; i++) {
		a[i] = a1[i] - 48;
		b[i] = b1[i] - 48;
		cout << a[i];
	}
	cout << endl;
	for (int i = 0; i <= len - 1; i++) {
		cout << b[i];
	}
	return 0;
}