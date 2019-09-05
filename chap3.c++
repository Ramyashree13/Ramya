/*problem1*/


#include <iostream>
#include <string>



using std::cin;
using std::endl;
using std::cout;
using std::string;
int main()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";
	const int pad = 1;
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad+2*2;
	cout << endl;
	
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
	
	while (c != cols) {

		if (r ==pad+1 && c==pad+1)
		{
			cout<<greeting;
			c +=greeting.size();
		}
		 else 
		{
			
			if (r == 0 ||c == 0 ||r==rows-1||c==cols-1)
				cout << "*";
			else
				cout << " ";
			++c;
		}
	}
	cout << endl;
	}
	return 0;
}



/*problem2*/

#include <iostream>
#include <string>
using std::cin;
using std::endl;
using std::cout;
using std::string;
int main()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";
	const int pad = 1;
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad;
	cout << endl;
	
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
	
	while (c != cols) {

		if (r ==pad && c==pad)
		{
			cout<<greeting;
			c +=greeting.size();
		}
		 else 
		{
			
			if (r == 0 ||c == 0 ||r==pad+1||c==pad+1)
				cout << "*";
			//else
				//cout << " ";
			++c;
		}
	}
	cout << endl;
	}
	return 0;
}

/*program3*/
#include <iostream>
#include <string>
using std::cin;
using std::endl;
using std::cout;
using std::string;
int main()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";
	const int pad = 1;
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad+2*4;
	cout << endl;
	
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
	
	while (c != cols) {

		if (r ==pad+1 && c==pad+1)
		{
			cout<<greeting;
			c +=greeting.size();
		}
		 else 
		{
			
			if (r == 0 ||c == 0 ||r==rows-1||c==cols-1)
				cout << "*";
			else
				cout << " ";
			++c;
		}
	}
	cout << endl;
	}
	return 0;
}

/*program4*/


#include <iostream>
#include <string>
using std::cin;
using std::endl;
using std::cout;
using std::string;
int main()
{
	cout << "Please enter your first name: ";
	string name;
	int srow,scol;
	cin >> name;

	const string greeting = "Hello, " + name + "!";
	const int pad = 1;
	cout<<"enter the space for row";
	cin>>srow;
	cout<<"enter the space for column";
	cin>>scol;
	const int rows = pad * srow;
	const string::size_type cols = greeting.size() + pad+scol;
	cout << endl;
	
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
	
	while (c != cols) {

		if (r ==pad+1 && c==pad+1)
		{
			cout<<greeting;
			c +=greeting.size();
		}
		 else 
		{
			
			if (r == 0 ||c == 0 ||r==rows-1||c==cols-1)
				cout << "*";
			else
				cout << " ";
			++c;
		}
	}
	cout << endl;
	}
	return 0;
}
