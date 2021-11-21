#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

# define MAX_VAL 750

template <class T>
class Array
{
    public:
        Array() : _size(0){
            _array = new T[0];
        }
        Array(unsigned int n) : _size(n){
            _array = new T[n];
        }
        Array(const Array<T> &src) : _size(src._size){
            _array = new T[src._size];
            for(unsigned int i = 0; i < src._size; i++)
                _array[i] = src._array[i];
        }
        ~Array(){
            delete[] _array;
        }

        Array<T>    &operator=(const Array<T> &rhs){
            _size = rhs._size;
            _array = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                _array[i] = rhs._array[i];
            return *this;
        }

        T   &operator[](unsigned int i) const{
            if (i < 0 || i >= _size)
                throw OutofLimitsException();
            return _array[i];
        }

        unsigned int    size() const{
            return _size;
        }

        class OutofLimitsException : public std::exception
        {
            virtual char const *what() const throw(){
                return "Out of limits";
            }
        };

    private:
        T               *_array;
        unsigned int    _size;
};

#endif