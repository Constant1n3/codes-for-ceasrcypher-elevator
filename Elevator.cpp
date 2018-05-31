#include <bits/stdc++.h>
using namespace std;
vector <int> output;
int main() {
	vector<int> flNo;
	int difference(int);
	int a,n,count,temp,dist=0;
	cin>>n;
	while(cin>>a)
	{
	    flNo.push_back(a);
	}
	sort(flNo.begin(),flNo.end());
	for(unsigned int i=0; i< flNo.size();i++){
	    if (flNo[i]>n)
	    {count=i;
	    break;}
	}
	temp=count;
	output.push_back(n);
	for( unsigned int i=0; i<flNo.size()+1;i++)
	{
	    if(flNo[count]>n)
	    output.push_back(flNo[count++]);    
	    else if(count == flNo.size())
	    output.push_back(flNo[temp--]);
	}
	for(unsigned int i=0; i< (output.size()-1);i++)
	    dist += difference(i);
	for(unsigned int i=0; i< output.size();i++)
	cout<<output.at(i)<<" ";
	cout<<"\n"<<dist;
	return 0;
	
}
int difference(int a)
{
    int diff;
    if(output[a+1]>output[a])
    diff=output[a+1]-output[a];
	else if(output[a]>output[a+1])
	diff=output[a]-output[a+1];
	return diff;
}
