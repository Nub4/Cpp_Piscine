#include "span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &src){
    *this = src;
}

Span::~Span() {}

Span    &Span::operator=(const Span &rhs){
    _N = rhs._N;
    _v = rhs._v;
    return *this;
}

void    Span::addNumber(int val){
    if (_v.size() >= _N)
        throw Fullystored();
    _v.push_back(val);
}

unsigned int    Span::shortestSpan(){
    if (_v.size() < 2)
        throw NoNumbersStored();
    std::vector<int>::iterator max1 = max_element(_v.begin(), _v.end());
    std::vector<int>::iterator max2Beg = max_element(_v.begin(), max1);
    std::vector<int>::iterator max2End = max_element(max1 + 1, _v.end());
    std::vector<int>::iterator max2 = max2Beg == max1 ? max2End : 
    max2End == _v.end() ? max2Beg : max(max2Beg, max2End);

    std::vector<int>::iterator min1 = min_element(_v.begin(), _v.end());
    std::vector<int>::iterator min2Beg = min_element(_v.begin(), min1);
    std::vector<int>::iterator min2End = max_element(min1 + 1, _v.end());
    std::vector<int>::iterator min2 = min2Beg == min1 ? min2End : 
    min2End == _v.end() ? min2Beg : min(min2Beg, min2End);
    
    if (*max1 - *max2 < *min2 - *min1)
        return (*max1 - *max2);
    return (*min2 - *min1);
}

unsigned int    Span::longestSpan(){
    if (_v.size() < 2)
        throw NoNumbersStored();
    int maxElement = *std::max_element(_v.begin(), _v.end());
    int minElement = *std::min_element(_v.begin(), _v.end());
    return (maxElement - minElement);
}