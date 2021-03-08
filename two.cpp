#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;

	while(test--)
	{
		int n;
		cin>>n;

		int arr[n];
		map<int,int> m;

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}

		int ans=0;
		for(int i=1;i<=1000;i++)
		{
			for(int j=i;j<=1000;j++)
			{
				 int s,c;
                  s=sqrt(i+j);
                  c=cbrt(i+j);
                  if((i+j) == s*s || (i+j)==c*c*c)
				  {
                      if(i==j)
                      ans = ans + m[i]*(m[i]-1)/2;
                      else 
					  ans=ans+m[i]*m[j];
				  }
			}
		}

		cout<<ans<<endl;
	}

}