#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int tot, outnum, nownum=1;
	cout << "�����볤��" << endl;
	cin >> tot;
	cout << "��������ӵ����" << endl;
	cin >> outnum;
	queue<int> q;
	for (int i = 1; i < tot + 1; i++) q.push(i);
	while (tot != 0)
	{
		if (outnum == nownum)
		{
			cout<<"��ȥ" << q.front()<<endl;
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