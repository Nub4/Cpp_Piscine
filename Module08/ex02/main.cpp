#include "mutantstack.hpp"

int main()
{
    std::cout << "--- MutantStack ---\n";
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "--- List ---\n";

    std::list<int> lstack;

    lstack.push_back(5);
    lstack.push_back(17);
    
    std::cout << lstack.back() << std::endl;
    
    lstack.pop_back();
    
    std::cout << lstack.size() << std::endl;
    
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    
    for (std::list<int>::iterator it2 = lstack.begin(); it2 != lstack.end(); it2++)
        std::cout << *it2 << std::endl;

    std::list<int> l(lstack);

    std::cout << "--- Vector ---\n";

    std::vector<int> vstack;

    vstack.push_back(5);
    vstack.push_back(17);
    
    std::cout << vstack.back() << std::endl;
    
    vstack.pop_back();
    
    std::cout << vstack.size() << std::endl;
    
    vstack.push_back(3);
    vstack.push_back(5);
    vstack.push_back(737);
    //[...]
    vstack.push_back(0);
    
    for (std::vector<int>::iterator it3 = vstack.begin(); it3 != vstack.end(); it3++)
        std::cout << *it3 << std::endl;

    std::vector<int> v(vstack);

    std::cout << "--- Vector after copying ---\n";

    for (std::vector<int>::iterator it4 = v.begin(); it4 != v.end(); it4++)
        std::cout << *it4 << std::endl;

    return 0;
}