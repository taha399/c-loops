//TAKE A VALUE AND MAKE A SUM OF IT 
#include<iostream>
using namespace std;
main()
{
int n,sum=0,i=2;
cout<<"enter your n value";
cin>>n;
do{
	sum=sum+i;
	i=i+2;
}while(i<=n);
{
	cout<<"sum of even number up to "<<n<<"is"<<sum<<endl;
}
	
}
