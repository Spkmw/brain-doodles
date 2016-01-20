#include <vector>
#include <iostream>

using namespace std;

int main() {
	char x = 'n', z = 'n';
	int N = 2, p; // vector dimention, raised to the power
	vector<vector<int>> vec(N, vector<int>(N)); // original vec
	vector<vector<int>> res(N, vector<int>(N)); // temp vec
	vector<vector<int>> tot(N, vector<int>(N)); // final ans

	while (x != 'y') {
		cout << "Raised to the power of: ";
		cin >> p;

		// matrix values set here
		vec[0][0] = -2;
		vec[0][1] = -9;
	
		vec[1][0] = 1;
		vec[1][1] = 4;

		res = vec;
		tot = vec; 

		for (int i = 2; i <= p; i++) {
			tot[0][0] = (vec[0][0] * res[0][0]) + (vec[0][1] * res[1][0]);
			tot[0][1] = (vec[0][0] * res[0][1]) + (vec[0][1] * res[1][1]);

			tot[1][0] = (vec[1][0] * res[0][0]) + (vec[1][1] * res[1][0]);
			tot[1][1] = (vec[1][0] * res[0][1]) + (vec[1][1] * res[1][1]);

			res = tot;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << "[" << tot[i][j] << "]";
			}
			cout << endl;
		}

		cout << "End the program? (y/n) ";
		cin >> x;
		
		if (x != 'y') {
			cout << "Clear the console? (y/n) ";
			cin >> z;
			if (z == 'y')
				system("cls");
			else
				cout << endl;
		}
	}
	return 0;
}