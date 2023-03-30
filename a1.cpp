#include<iostream>
#include<algorithm>
using namespace std;
signed main()
{
	int n,m;
	cin >> n >> m;
	int GCD=__gcd(n,m);
	int LCM=n/__gcd(n,m)*m;
	cout << "最大公因数为 ：" << GCD << endl;
	cout << "最小公倍数为 ：" << LCM << endl;
	return 0;
}
