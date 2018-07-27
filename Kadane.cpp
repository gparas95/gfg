#include<iostream>
using namespace std;

void print_sumaxarray(int A[], int s)
{
	int sum= A[0];
	int max_sum = A[0];
	for(int i=1; i<s; i++)
	{
		
		if(A[i-1]<0 && A[i]>0)
		{
			if(sum+A[i]>A[i])
				sum= sum + A[i];
			else
				sum = A[i];
		}
		else
			sum = sum + A[i];
		if(sum>=max_sum)
			max_sum = sum;
	}
	cout<<max_sum<<endl;
}
int main(int argc, char const *argv[])
{
	int T, N;
	cin>>T;
	if(T<1 || T>200)
		return -1;
	while(T)
	{
		cin>>N;
		if(N<1 || N>1000)
			return -1;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			if(A[i]<-100 || A[i]>100)
				return -1;
		}
		print_sumaxarray(A,N);
		T--;
	}
	return 0;
}