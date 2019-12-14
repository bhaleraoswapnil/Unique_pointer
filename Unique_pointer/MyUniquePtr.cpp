#include<iostream>
#include<memory>
using namespace std;

class Test
{
private:
	int* val;
public:
	Test(int x) { cout << "Constructor\n"; val = new int; *val = x; }
	void Display() { cout << "Display called.." << *val << endl; }
	~Test() { cout << "Destructor\n"; delete val; val = nullptr; }
};
void fun()
{
	unique_ptr<Test> p(new Test(100));
	p->Display();
}
int main()
{
	cout << "Hello Word" << endl;
	fun();
	return 0;
}