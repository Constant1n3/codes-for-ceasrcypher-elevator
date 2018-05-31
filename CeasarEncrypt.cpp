#include<iostream>
using namespace::std;
int main ()
{
	int n,k;
	cin>>n>>k;
	string A[n],B[n];
	cin.ignore(); //as cin was taking an empty input to ignore that
	for(int i=0;i<n;i++)
	getline(cin,A[i]);
	for(int i=0;i<n;i++)
	getline(cin,B[i]);
	for(int i=0;i<n;i++) // cyphering loop
	{	
		for(int j=0;A[i][j] != '\0';j++)
		{
			if( isalpha(A[i][j]))
			{
				for(int l=0;l<k;l++ )
				{
				
					if((A[i][j] != 90) && (A[i][j] != 122))
					{
						A[i][j]=A[i][j]+1;
					}
					else if(A[i][j] == 90)
					{
						A[i][j] = 65;	
					}
					else if(A[i][j] == 122)
					{
						A[i][j] = 97;
					}
				}
			}
		}
	}
	for(int i=0;i<n; i++) // decyphering loop
	{
		for(int j=0;B[i][j] != '\0';j++)
		{
			if(isalpha(B[i][j]))
			{
				for(int l=0;l<k;l++ )
				{
				
					if((B[i][j] != 65) && (B[i][j] != 97))
					{
						B[i][j]=B[i][j]-1;
					}
					else if(A[i][j] == 65)
					{
						B[i][j] = 90;	
					}
					else if(B[i][j] == 97)
					{
						B[i][j] = 122;
					}
				}
			}
		}
	} 
	for(int i=0;i<n;i++)
	cout<<"ciphertext#"<<i<<A[i]<<endl;
	for(int i=0;i<n;i++)
	cout<<"plaintext#"<<i<<B[i]<<endl;
}

