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
        Array() : N(0), arr(NULL) {}
        Array(unsigned int n) : N(n), arr(new T[n]) {}
        Array(Array const & src) : N(src.N), arr(new T[src.N]) {
            for (unsigned int i = 0; i < src.N; i++)
                this->arr[i] = src.arr[i];
        }
        ~Array() { delete [] this->arr; }
        Array & operator=(Array const & src){
            if (this != &src)
            {
                delete [] this->arr;
                this->N = src.N;
                this->arr = new T[src.N];
                for (unsigned int i = 0; i < src.N; i++)
                    this->arr[i] = src.arr[i];
            }
            return *this;
        }
        T & operator[](unsigned int i){
            if (i >= this->N)
                throw std::exception();
            return this->arr[i];
        }
        unsigned int size() const { return this->N; }
};

#endif