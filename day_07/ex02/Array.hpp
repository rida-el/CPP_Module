/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <rel-maza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:58:00 by rel-maza          #+#    #+#             */
/*   Updated: 2023/02/24 00:28:29 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include<iostream>
#include<string>

template <typename T>

class Array
{
    private:
        unsigned int N;
        T *arr;
    public:
        Array(){
            this->N = 0;
            this->arr = NULL;
        }
        Array(unsigned int n){
            this->N = n;
            this->arr = new T[n];
        }
        Array(Array const & src){
            *this = src;
        }
        ~Array() { delete [] this->arr; }
        Array & operator=(Array const & src){
            if (this != &src)
            {
                this->N = src.N;
                this->arr = new T[this->N];
                for (unsigned int i = 0; i < this->N; i++)
                    this->arr[i] = src.arr[i];
            }
            return *this;
        }
        class OutOfLimitsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Out of limits";
                }
        };
        T & operator[](unsigned int i){
            if (this->N <= i || i < 0)
                throw OutOfLimitsException();
            return this->arr[i];
        }
        unsigned int size() const { return this->N; }
};

#endif