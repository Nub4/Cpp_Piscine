#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <exception>
# include <algorithm>

class NoValueFound : public std::exception{
    public:
        virtual const char *what() const throw(){
            return "Didn't find the value";
        }
};

template<typename T>
int easyfind(T &con, int val){
    typename T::iterator it = find(con.begin(), con.end(), val);
    if (it == con.end())
        throw NoValueFound();
    return *it;
}

#endif