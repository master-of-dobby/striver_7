#include<bits/stdc++.h>

using namespace std;
vector < vector < int >> rotate(vector < vector < int >> & matrix) {
	int n = matrix.size(); //since square matrix

	for(int i=0; i<n; i++)
		for(int j=0; j<i; j++)
			swap(matrix[i][j], matrix[j][i]);
		
	for(int i=0; i<n; i++)
		reverse(matrix[i].begin(), matrix[i].end());


	return matrix;
		
	

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