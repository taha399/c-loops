#include<iostream>
using namespace std;
int main()
{
int num,num1;
cout<<"entrer your number for multiplication";
cin>>num;
for(int i=1;i<=10;i++)
{
	num1=num*i;
	cout<<num<<"*"<<i<<"="<<num1<<endl;
}
}
