#include<iostream>
using namespace std;

int determinant(int matrix[2][2])
{
	int determinant=0;

	determinant=matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];

	return determinant;
}

int main()
{
	int element=0;

	int det=0;

	int rows=2;
	int cols=2;

	int matrix[2][2]={};


	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout << "Enter the element at row " << i+1 << " and column " << j+1 <<":";
			cin>>element;
			cout<<endl;

			matrix[i][j]=element;
		}
	}

	cout << "The matrix is:" <<endl;

	cout << "[" << matrix[0][0] << "     " << matrix[0][1] << "]" <<endl;
	cout << "[" << matrix[1][0] << "     " << matrix[1][1] << "]" <<endl;

	det=determinant(matrix);
	cout << "The determinant of this matrix is:" << det <<endl;

	return 0;
}
