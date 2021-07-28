/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:41:22 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/28 11:22:02 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array 
{
    private:
        T* _Array;
        unsigned int _Length;
    
    public:
        Array() : _Array(NULL), _Length(0)
        {
            
        };
        
        ~Array() 
        { 
            delete (_Array); 
        };
        
        Array(unsigned int n) : _Length(n)
        {
            _Array = new T[_Length];
            for (unsigned int i = 0; i < _Length; i++)
                _Array[i] = 0;
        };
        
        Array(const Array &copy)
        {
            if (this != &copy)
            {
                _Length = copy._Length;
                _Array = new T[_Length];
                for (unsigned int i = 0; i < _Length; i++)
                    _Array[i] = copy._Array[i];
            }
        };
        
        Array &operator=(const Array &op)
        {
            if (this != &op)
            {
                if (_Array)
                    delete _Array;
                _Length = op._Length;
                _Array = new T[_Length];
                for (unsigned int i = 0; i < _Length; i++)
                    _Array[i] = op._Array[i];
            }
            return (*this);
        };
        
        T &operator[](unsigned int i)
        {
            if (i >= _Length)
                throw except();
            return (_Array[i]);
        };
        
        class except : public std::exception
        {
            virtual const char *what() const throw() 
            {
                return ("Out of the limits !");
            }
        };
        
        unsigned int const size()
        { 
            return (_Length);
        };
};

#endif