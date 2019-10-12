#include<iostream>
using namespace std;
int main()
{
	int i,j,n,t,ar[100],s1,s3,s2,br[100],c[100],k;
	cout<<"Enter length of 1 array =";
	cin>>s1;
	cout<<"Enter length of 2 array =";
	cin>>s2;
	cout<<"Enter your 1 arry element in ascending order=\n";
	for(i=0;i<s1;i++)
	{
		cin>>ar[i];
	}
	cout<<"Enter your 2 arry element in ascending order=\n";
		for(j=0;j<s2;j++)
		{
			cin>>br[j];
		}
		
			s3=s1+s2;
		for(i=0,j=0,k=0;k<s3;k++)
		{
			if(ar[i]<br[j]&&i<s1)
			{
				c[k]=ar[i++];
			}
			else if(j<s2)
			{
				c[k]=br[j++];
			}
		}
		printf("Your new sorted array using merge sort is \n");
		for(k=0;k<s3;k++)
		{
			cout<<c[k]<<" ";
		}
}
