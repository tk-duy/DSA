// Banker's Algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cout << "Enter number of process: "; cin >> n;
	cout << "Enter number of resources: "; cin >> m;
	cout << endl;
	// n = 5; // Number of processes
	// m = 3; // Number of resources
	int alloc[m][n];
	//{ 0, 1, 0 } // P0 
	//{ 2, 0, 0 } // P1
	//{ 3, 0, 2 } // P2
	//{ 2, 1, 1 } // P3
	//{ 0, 0, 2 } // P4
	for(int i = 0; i < n; i++) {
		cout << "P" << i << " was allocated: ";
		for(int j = 0; j < m; j++) {
			cin >> alloc[i][j];
		}
	}
	cout << endl;
	int max[m][n]; 
	//{ 7, 5, 3 } // P0
	//{ 3, 2, 2 } // P1
	//{ 9, 0, 2 } // P2
	//{ 2, 2, 2 } // P3
	//{ 4, 3, 3 } // P4
	for(int i = 0; i < n; i++) {
		cout << "Max of P" << i << ": ";
		for(int j = 0; j < m; j++) {
			cin >> max[i][j];
		}
	}
	cout << endl;
	int avail[m]; 
	//  { 3, 3, 2 }; // Available Resources	
	cout << "Enter available resources: ";
	for(int i = 0; i < m; i++) {
		cin >> avail[i];
	}
	cout << endl;
	int f[n], ans[n], ind = 0;
	for (int k = 0; k < n; k++) {
		f[k] = 0;
	}
	int need[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		need[i][j] = max[i][j] - alloc[i][j];
	}
	int y = 0;
	for (int k = 0; k < 5; k++) {
		for (int i = 0; i < n; i++) {
		if (f[i] == 0) {

			int flag = 0;
			for (int j = 0; j < m; j++) {
			if (need[i][j] > avail[j]){
				flag = 1;
				break;
			}
			}

			if (flag == 0) {
			ans[ind++] = i;
			for (y = 0; y < m; y++)
				avail[y] += alloc[i][y];
			f[i] = 1;
			}
		}
		}
	}

	int flag = 1;

	for(int i = 0;i<n;i++)
	{
			if(f[i]==0)
		{
			flag = 0;
			cout << "The given sequence is not safe";
			break;
		}
	}

	if(flag==1)
	{
		cout << "Following is the SAFE Sequence" << endl;
		for (int i = 0; i < n - 1; i++)
			cout << " P" << ans[i] << " ->";
		cout << " P" << ans[n - 1] <<endl;
	}
	system("pause");
	return (0);
}
