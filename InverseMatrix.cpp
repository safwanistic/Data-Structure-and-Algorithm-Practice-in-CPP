#include<iostream>
using namespace std;

void inverseMatrix(float matrix[2][2],float determinant)
{
	float inverseMatrix[2][2]={};

	int temp=0;

	swap(matrix[0][0],matrix[1][1]);

	matrix[0][1]=-matrix[0][1];
	matrix[1][0]=-matrix[1][0];

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			inverseMatrix[i][j]=matrix[i][j]/determinant;
		}
	}

	cout << "The Inverse of the matrix is:" <<endl;

	cout << "[" << inverseMatrix[0][0] << "      " << inverseMatrix[0][1] << "]" <<endl;
	cout << "[" << inverseMatrix[1][0] << "      " << inverseMatrix[1][1] << "]" <<endl;

}

float determinant(float matrix[2][2])
{
	float determinant=0;

	determinant=matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];

	return determinant;
}

int main()
{
	int i=0;
	int j=0;
	float element=0;

	float det=0;

	int rows=2;
	int cols=2;

	float matrix[2][2]={};


	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout << "Enter the element at row " << i+1 << "and column" << j+1 <<":";
			cin>>element;
			cout<<endl;

			matrix[i][j]=element;
		}
	}

	det=determinant(matrix);
	cout << "The determinant of this matrix is:" << det <<endl;
	inverseMatrix(matrix,det);

	return 0;
}
