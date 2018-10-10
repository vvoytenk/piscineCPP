#include <iostream>

class Base
{
public:
	virtual ~Base() {};
	
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

void identify_from_pointer( Base * p )
{
	A *a;
	B *b;
	C *c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "class A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "class B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "class C" << std::endl;

}

void	identify_from_reference(Base &p)
{
	A a;
	B b;
	C c;
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "class A" << std::endl;
	}
	catch(std::exception)
	{

	}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "class B" << std::endl;
	}
	catch(std::exception)
	{

	}
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "class C" << std::endl;
	}
	catch(std::exception)
	{

	}
}

Base * random_class()
{
	int i = std::rand() % 3;
	if (i == 0)
		return  new A;
	else if (i == 1)
		return  new B;
	else if (i == 2)
		return  new C;

	return new A;
}

int	main()
{
	srand(time(0));

	Base *p;
	p = random_class();

	std::cout << "Identify from poiner: ";
	identify_from_pointer(p);
	std::cout << "Identify from reference: ";
	identify_from_reference(*p);
	delete p;
	return 0;
} 