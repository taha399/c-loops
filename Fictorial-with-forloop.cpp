//THIS IS WITH FOR LOOP
#include<iostream>
using namespace std;
int main()
{
int a,b=1;
cout<<"enter your value that you to convert itinto the fictorial =";
cin>>a;
for(int i=a;i>0;i--){
	b*=i;
}
cout<<"the fictorial of		"<<a<<"!"	<<"	is	"<<b;

}

