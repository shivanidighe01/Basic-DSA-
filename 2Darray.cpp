#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"row-";
	cin>>row;
	cout<<"column-";
	cin>>col;
	int arr[row][col];
	cout<<"enter elements";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"enter the element you want to search:"<<endl;
	int search;
	cin>>search;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==search)
			{
				cout<<"element found at "<<i+1<<" row and "<<j+1<<" column.";
			}
			// else
			// {
			// 	cout<<"element not found.";
			// }
		}
		cout<<"\n";
	}
	
	
	return 0;
}
