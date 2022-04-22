#include <bits/stdc++.h>

using namespace std; 

int main(){
	int matrixSize = 5, step=0;
	int matrix[matrixSize][matrixSize];
	for(int i=0; i<matrixSize; i++){
		for(int j=0; j<matrixSize; j++) cin>>matrix[i][j];
	}

	for(int i=0; i<matrixSize; i++){
		for(int j=0; j<matrixSize; j++){
			if(matrix[i][j] == 1){
				step = step + (2-i);
				if(step<0) step = -step;
				if(j>2) step = step + (j-2);
				else step = step + (2-j);
			}
		}
	}
	cout<<step;
}