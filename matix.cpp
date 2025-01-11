//#include<iostream>
//using namespace std;
//
//int main(){
//	int n, m;
//	cin>>n>>m;
//	int arry[n][m];
//
//	for(int i = 0; i<n ; i++){
//		for(int j = 0 ; j<m; j++){
//			cin>>arry[i][j];
//			
//		}
//	}
//	cout<<" matrix is "<<endl;
//	for(int i = 0; i<n ; i++){
//		for(int j = 0 ; j<m; j++){
//			cout<<" "<<arry[i][j];
//			
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    cout << "Input Rows and Columns of the 1st matrix: ";
    cin >> rows1 >> cols1;

    // Input dimensions of the second matrix
    cout << "Input Rows and Columns of the 2nd matrix: ";
    cin >> rows2 >> cols2;

    // Check if dimensions match
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "The Matrices cannot be compared as their dimensions are not the same." << endl;
        return 0;
    }

    // Define the 2D arrays with a fixed maximum size
    const int MAX = 100;
    int matrix1[MAX][MAX];
    int matrix2[MAX][MAX];

    // Input elements for the first matrix
    cout << "Input elements in the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << "element - [" << i << "],[" << j << "] : ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Input elements in the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << "element - [" << i << "],[" << j << "] : ";
            cin >> matrix2[i][j];
        }
    }

    // Display the first matrix
    cout << "The first matrix is:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Display the second matrix
    cout << "The second matrix is:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Compare the matrices
    bool areEqual = true;
    for (int i = 0; i < rows1 && areEqual; i++) {
        for (int j = 0; j < cols1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                areEqual = false;
                break;
            }
        }
    }

    // Display the result
    cout << "The Matrices can be compared:" << endl;
    if (areEqual) {
        cout << "Two matrices are equal." << endl;
    } else {
        cout << "Two matrices are not equal." << endl;
    }

    return 0;
}
