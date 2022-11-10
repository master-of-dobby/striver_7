#include <bits/stdc++.h>

using namespace std;

const int R = 4, C = 4;

void printSpiral(int a[4][4], int R, int C) {
	int top = 0, left = 0, bottom = R - 1, right = C - 1;

	while((left <= right) && (top <= bottom)){

		for(int i = left; i <= right; i++)
			cout << a[top][i] << " ";
		top++;

		for(int i = top; i <= bottom; i++)
			cout << a[i][right] << " ";
		right--;

		if(left <= right){
			for(int i = right; i >= left; i--)
				cout << a[bottom][i] << " ";
			bottom--;
		}

		if(top <= bottom){
			for(int i = bottom; i >= top; i--)
				cout << a[i][left] << " ";
			left++;
		}
	}

}

int main() {
  int arr[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
	           {9, 10, 11, 12},
		   {13, 14, 15, 16}};
  printSpiral(arr, R, C);

  return 0;
}