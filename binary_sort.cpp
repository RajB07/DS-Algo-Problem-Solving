#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a = {0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,0,0,1,1,0,1,1,0,1,0};
	int N = a.size();
	cout << N << endl;

	int j = 0;
	for (int x : a)
		if (x == 0)
			j++;

	for (int i = 0;i<N;i++)
		{
			if (i<j)
				cout << 0 << " ";
			else 
				cout << 1 << " ";
		}
}

