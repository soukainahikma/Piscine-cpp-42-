#include <iostream>

class Base
{
	/* virtual */ ~Base();
};
class A:public Base {};
class B:public Base {};
class C:public Base {};

Base * generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	std::cout << i << std::endl;
	switch (i)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return new Base;
}
// void identify(Base* p)
// {
	// if (p != NULL)
	// {
		// try{
			// A *a = dynamic_cast<A *>(p);
			// (void) a;
		// }
		// catch(std::bad_cast &bc)
		// {
			// std::cout <<bc.what() << std::endl;
		// }
	// }
// }
// void identify(Base& p)
// {

// }

int main()
{
	Base *base;
	base = generate();
	
	return(0);

}