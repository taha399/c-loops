//write a program to creat a simple conter 
//option 1.tea
//2 boryani
//3 soup.
//4 sweet
//6 qorma 
//sanwitch

#include <iostream>

using namespace std;
  int main()
{
char ch;
cout <<"enter whaT YOU WANT TO ODER\n";
cout << " a tea \n";
cout << " b biryani \n";
cout << " c qorma \n";
cout << " d sweet\n";

cin>>ch;



switch(ch) {
        	case 'a':
		cout<<"tea is 200rs per serving sir!";
	
		break;
			case 'b':
		cout<<"biryani is 200rs per serving sir!";
		break;
			case 'c':
		cout<<"soup is 200rs per serving sir!";
		break;
		case 'd':
		cout<<"sweet is 200rs per serving sir!";
		break;
	
	default:
		cout <<"invlid menu";
		
		
		
		
}

}
