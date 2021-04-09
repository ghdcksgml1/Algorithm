#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[8];
vector<int> a[8];
void bfs(int start) { // 1
	queue<int> q;
	q.push(start); // q:1 ,c[1] =true
	c[start] = true;
	while (!q.empty()) {
		int x = q.front();  // x :1
		q.pop();             // q:����
		cout << x << ' ';
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i]; // ����� ���
			if (!c[y]) {
				q.push(y);
				c[y] = true;
			}
		}
	}
}

int main(void) {
	// 1�� 2�� �����մϴ�.
	a[1].push_back(2);
	a[2].push_back(1);
	// 1�� 3�� �����մϴ�.
	a[1].push_back(3);
	a[3].push_back(1);
	// 2�� 3�� �����մϴ�.
	a[2].push_back(3);
	a[3].push_back(2);
	// 2�� 4�� �����մϴ�.
	a[2].push_back(4);
	a[4].push_back(2);
	// 2�� 5�� �����մϴ�.
	a[2].push_back(5);
	a[5].push_back(2);
	// 3�� 6�� �����մϴ�.
	a[3].push_back(6);
	a[6].push_back(3);
	// 3�� 7�� �����մϴ�.
	a[3].push_back(7);
	a[7].push_back(3);
	// 4�� 5�� �����մϴ�.
	a[4].push_back(5);
	a[5].push_back(4);
	// 6�� 7�� �����մϴ�.
	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);

	return 0;
}