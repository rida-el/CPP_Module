/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <rel-maza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:59:01 by rel-maza          #+#    #+#             */
/*   Updated: 2023/02/23 13:59:02 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>



template <typename T>
void iter(T *array, int length, void (*f)(const T &))
{
    for (int i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void print(T &s)
{
    std::cout << s << std::endl;
}

#endif