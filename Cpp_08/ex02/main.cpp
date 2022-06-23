#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Stack top: " << mstack.top() << std::endl;
    std::cout << "Stack size: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "Stack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(42);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Stack size: " << mstack.size() << std::endl << "Stack: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::list<int> list;
    list.push_front(5);
    list.push_front(17);
    std::cout << "List top: " << list.front() << std::endl;
    std::cout << "List size: " << list.size() << std::endl;
    list.pop_front();
    std::cout << "List size: " << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(42);
    list.push_back(0);
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    std::cout << "List size: " << list.size() << std::endl << "List: " << std::endl;
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    return 0;
}