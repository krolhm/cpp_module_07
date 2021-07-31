/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:32:16 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/31 18:10:10 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* adress, int length, void(*f)(const T &element))
{
    for (int i = 0; i < length; i++)
        f(adress[i]);
}

template<typename T>
void display(T array)
{
    std::cout << array << std::endl;
}

#endif