#include<iostream>
using namespace std;
void missing_number(int A[], int s)
{
	long int sum = 0, n_sum = 0; 
	for(int i=0; i<s-1; i++)
		sum = sum + A[i];
	n_sum = (s * (s+1) )/ 2;
	cout<< n_sum - sum<<endl;
}
int main(int argc, char const *argv[])
{
	int T, N;
	cin>>T;
	if(T<1 || T>200)
		return -1;
	//cout<<T;
	while(T)
	{
		cin>>N;
		if(N<1 || N>1000)
			return -1;
		//cout<<N;
		int A[N];
		for(int i=0; i<N-1; i++)
		{
			cin>>A[i];
			if(A[i]<1 || A[i]>1000)
				return -1;
		}
		missing_number(A,N);
		T--;
	}
	return 0;
}