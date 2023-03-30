#include<iostream>
#include<algorithm>
using namespace std;
signed main()
{
	int n;
	cin >> n;
	int a[n];
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	//顺序全排列
	do{
		for(int i:a)
		cout << ' ' << i;
		cout << endl;
	}while(next_permutation(a,a+n));
	cout << "--------" << endl;
	//逆序全排列
	do{
		for(int i:a)
		cout << ' ' << i;
		cout << endl;
	}while(next_permutation(a,a+n));
	return 0;
}