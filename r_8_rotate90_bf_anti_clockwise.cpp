#include<bits/stdc++.h>

using namespace std;
vector < vector < int >> rotate(vector < vector < int >> & matrix) {
	int n = matrix.size(); //since square matrix
	vector<vector<int>> res(matrix.size(), vector<int> (n, 0));

	for(int i=0; i<matrix.size(); i++)
		for(int j=0; j<matrix[0].size(); j++)
			res[n-j-1][i] = matrix[i][j];
		
	return res;
	

}

int main() {
  vector < vector < int >> arr;
  arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector < vector < int >> rotated = rotate(arr);
  cout << "Rotated Image" << endl;
  for (int i = 0; i < rotated.size(); i++) {
    for (int j = 0; j < rotated[0].size(); j++) {
      cout << rotated[i][j] << " ";
    }
    cout << "\n";
  }

}