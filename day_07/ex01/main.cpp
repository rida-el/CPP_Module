/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <rel-maza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:59:05 by rel-maza          #+#    #+#             */
/*   Updated: 2023/02/23 13:59:06 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"


int main()
{
    int array[] = {1, 2, 9, 4, 5};
    std::string array2[] = {"one", "two", "three", "four", "five"};
    iter(array, 5, print);
    iter(array2, 5, print);
    return 0;
}
