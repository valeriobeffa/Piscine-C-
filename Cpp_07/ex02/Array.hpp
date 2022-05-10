#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>

class Array
{
    private:
        T*  _arr;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        ~Array();
        Array& operator=(const Array& copy);
        T& operator[](unsigned int i);
        unsigned int size();
        class	OutOfBoundException : public std::exception
		{
				const char* what() const throw ();
		};
};

template <typename T>
Array<T>::Array()
{
    _arr = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _arr = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(const Array& copy)
{
    _arr = NULL;
    *this = copy;
}

template <typename T>
Array<T>::~Array()
{
	delete (_arr);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& copy)
{
    this->_size = copy._size;
    this->_arr = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->_arr[i] = copy._arr[i];
    return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i < 0 || i >= this->_size)
        throw OutOfBoundException();
    return (this->_arr[i]);
}

template <typename T>
unsigned int Array<T>::size()
{
    return (this->_size);
}

template <typename T>
const char*	Array<T>::OutOfBoundException::what() const throw()
{
	return ("Error: index out of bounds");
}

#endif