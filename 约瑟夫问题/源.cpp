#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int tot, outnum, nownum=1;
	cout << "请输入长度" << endl;
	cin >> tot;
	cout << "请输入出队的序号" << endl;
	cin >> outnum;
	queue<int> q;
	for (int i = 1; i < tot + 1; i++) q.push(i);
	while (tot != 0)
	{
		if (outnum == nownum)
		{
			cout<<"出去" << q.front()<<endl;
			q.pop();
			nownum = 1;
			tot--;
		}
		else
		{
			q.push(q.front());
			q.pop();
			nownum++;

		}

	}
}