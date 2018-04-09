#include<iostream>
#include<string>
#include<cstring>
#include<stack>
#include<sstream>
#include<algorithm>
using namespace std;
int main() 
{
	//way 1
	//string a;
	//getline(cin, a);
	//reverse(a.begin(), a.end());
	//cout << a << endl;

	//way 2
	//char ch;
	//stack <char> chStack;
	//while (cin >> ch)
	//{
	//	chStack.push(ch);
	//}
	//while (!chStack.empty())
	//{
	//	cout << chStack.top();
	//	chStack.pop();
	//}
	//cout << 'a' << endl;

	//reverse
	//int a = 103;
	//stringstream ss;
	//string s;
	//ss << a;
	//ss >> s;
	//int len = s.length();
	//for (int i = len - 1; i >= 0; i--)
	//{
	//	cout << s[i];
	//}

	//int n;
	//int a[10] = { 0 };
	//int num = 0;
	//n = 223345122;
	//while (n)
	//{
	//	if (a[n % 10] == 0)
	//	{
	//		a[n % 10]++;//这一步是更新，遇到下次相同的数会跳过
	//		num = num * 10 + n % 10;
	//	}
	//	n /= 10;
	//}
	//cout << num << endl;

	//int N;
	//int n;

	//while (cin >> N)
	//{
	//	int s[1000] = { 0 };
	//	while (N--)
	//	{
	//		cin >> n;
	//		s[n] = 1;
	//	}
	//	for (int i = 0; i <= 1000; i++)
	//		if (s[i])
	//			cout << i << endl;
	//}

	//string s;
	//while (getline(cin, s))
	//{
	//	int len = s.length();
	//	int num;
	//	if (len % 8)
	//		num = len / 8 + 1;
	//	else
	//		num = len / 8;
	//	string s0 = "0000000";
	//	s = s + s0;
	//	string ss[13];
	//	int k = 0;
	//	for (int i = 0; i <= num - 1; i++)
	//	{
	//		for (int j = 0; j < 8; j++)
	//		{
	//			ss[i] = s.substr(i * 8, 8);
	//		}
	//	}
	//	for (int i = 0; i <= num - 1; i++)
	//		cout << ss[i] << endl;
	//}

}