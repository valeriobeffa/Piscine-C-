#include "Base.hpp"

Base * generate(void)
{
    srand(time(NULL));
    Base* ptr = NULL;
    switch (rand()%3)
    {
        case 0:
            ptr = new A;
            break;
        case 1:
            ptr = new B;
            break;
        case 2:
            ptr = new C;
            break;
        default:
            std::cout << "An error has occured" << std::endl;
            break;
    }
    return ptr;
}

void identify(Base* p)
{
	A* ptrA = dynamic_cast<A*>(p);
	B* ptrB = dynamic_cast<B*>(p);
	C* ptrC = dynamic_cast<C*>(p);
	if (ptrA)
		std::cout << "A class found." << std::endl;
	else if (ptrB)
		std::cout << "B class found." << std::endl;
	else if (ptrC)
		std::cout << "C class found." << std::endl;
	else
		std::cout << "There is nothing." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A baseA = dynamic_cast<A&>(p);
		std::cout << "It's class A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B baseB = dynamic_cast<B&>(p);
			std::cout << "It's class B" << std::endl;
		}
		catch(const std::exception& e)
		{
			C baseC = dynamic_cast<C&>(p);
			std::cout << "It's class C" << std::endl;
		}
	}
}

int main()
{
    Base* ptr = generate();
    identify(ptr);
    identify(*ptr);
}