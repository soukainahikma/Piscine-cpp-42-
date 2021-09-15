#include <iostream>
#include <unistd.h>
class Base
{
	private:
	public:
		virtual  ~Base(){}
};
class A:public Base {};
class B:public Base {};
class C:public Base {};

Base * generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
		{
			std::cout << "non of the above" << std::endl;
			return NULL;
		}
	}
}
void identify(Base* p)
{
	
	if(dynamic_cast<A*>(p))
		std::cout << "A"<< std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "B"<< std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "C"<< std::endl;
	else
		std::cout << "Allocation failed" << std::endl;
}
void identify(Base& p)
{
	if(dynamic_cast<A*>(&p))
		std::cout << "A"<< std::endl;
	else if(dynamic_cast<B*>(&p))
		std::cout << "B"<< std::endl;
	else if(dynamic_cast<C*>(&p))
		std::cout << "C"<< std::endl;
	else
		std::cout << "Allocation failed" << std::endl;
}

int main()
{
	Base *base;
	base = generate();
	identify(base);
	sleep(1);
	base = generate();
	identify(base);
	
	return(0);

}