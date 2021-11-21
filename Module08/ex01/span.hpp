#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>

class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &src);
        ~Span();

        Span            &operator=(const Span &rhs);

        void            addNumber(int val);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();

        template<class Iterator>
        void            addNumber(Iterator first, Iterator last){
            unsigned int i = 0;
            for (Iterator temp1 = first; temp1 != last && i < _N - _v.size(); temp1++)
                i++;
            std::copy(first, last, std::back_inserter(_v));
        }

        class NoNumbersStored : public std::exception{
            public:
                virtual const char *what() const throw(){
                    return "No numbers stored or only one";
                }
        };

        class Fullystored : public std::exception{
            public:
                virtual const char *what() const throw(){
                    return "Object is full of values already";
                }
        };

    private:
        unsigned int        _N;
        std::vector<int>    _v;
};

#endif