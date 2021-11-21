#include "span.hpp"

int main()
{
    Span sp3(5);

    try{
        std::cout << sp3.shortestSpan() << std::endl;
    }
    catch(const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    Span sp = Span(5);

    try{
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    Span sp2(10000);  
    try{
        for (size_t i = 0; i < 10001; i++)
            sp2.addNumber(i);
    }
    catch(const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    try{
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    Span sp4 = Span(50000);
    std::vector<int> range(50000, 10);
    range[3256] = 40;
    sp4.addNumber(range.begin(), range.end());
    
    try{
        std::cout << sp4.longestSpan() << std::endl;
    }
        catch(const std::exception& ex){
        std::cerr << ex.what() <<  std::endl;
    }

    try{
        std::cout << sp4.shortestSpan() << std::endl;
    }
        catch(const std::exception& ex){
        std::cerr << ex.what() <<  std::endl;
    }
    return (0);
}