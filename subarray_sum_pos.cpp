#include<iostream>
using namespace std;
void subarray_sum_pos(int A[], int n, int SUM)
{
	int i=0, j=0,flag = 0;
	int sum = 0;
	int x =0;
	while(x<2*n)
	{
		if(sum == SUM)
		{
			flag = 1;
			break;
		}
		if(sum<SUM && j<n)
		{
			sum = sum + A[j];
			j++;
		}
		else if(sum>SUM && i<n)
		{
			sum = sum - A[i];
			i++;
		}
		else
			break;
		x++;
		//cout<<sum<<endl;
	}
	if(flag==1)
		cout<<i+1<<" "<<j<<endl;
	else
		cout<<"-1"<<endl;
}
int main(int argc, char const *argv[])
{
	int T, N,SUM;
	cin>>T;
	if(T<1 || T>100)
		return -1;
	while(T)
	{
		cin>>N;
		if(N<1 || N>100)
			return -1;
		int A[N];
		cin>>SUM;
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			if(A[i]<1 || A[i]>200)
				return -1;
		}
		subarray_sum_pos(A,N,SUM);
		T--;
	}
	return 0;
}