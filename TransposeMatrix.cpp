#include<iostream>
using namespace std;

void transposeMatrix(int matrix[10][10],int transposeMatrix[10][10],int rows,int cols)
{
	int i,j;
	int temp;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			swap(matrix[i][j],transposeMatrix[j][i]);
		}
	}

	cout << "Matrix after the transpose:" <<endl;
	for(i=0;i<cols;i++)
	{
		for(j=0;j<rows;j++)
		{
			cout << " " <<  transposeMatrix[i][j]  << " "<<flush;
		}
		cout << endl;
	}

}

int main()
{
	int i,j;
	int element=0;

	int rows=0;
	int cols=0;

	int matrix[10][10]={};
	int transposeMatrix[10][10]={};

	cout << "Enter the number of rows:";
	cin>>rows;
	cout<<endl;

	cout << "Enter the number of columns:";
	cin>>cols;
	cout<<endl;

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

	cout << "Matrix before the transpose:" <<endl;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout << " " <<  matrix[i][j]  << " "<<flush;
		}

		cout << endl;
	}

	transposeMatrix(matrix,transposeMatrix,rows,cols);

	return 0;
}
