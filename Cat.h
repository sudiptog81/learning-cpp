#include <iostream>
#include <string>
using namespace std;

class Cat
{
	private:
		string privateVar;
	public:
		unsigned int age;
		void meow()
		{
			cout << "Meowww.." << endl;
		};
		void scratch()
		{
			cout << privateVar << " scratch scratch.." << endl;
		};
		string getPrivateVar() const
		{
			return privateVar;
		};
		void setPrivateVar(string ownerVar)
		{
			privateVar = ownerVar;
		};
		Cat()
		{
			age = 0;
			setPrivateVar("");
		};
		Cat(int x, string y)
		{
			age = x;
			setPrivateVar(y);
		};
};
