/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 10:25:43 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/27 18:31:01 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 42;
    int b = 0;
    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    swap(a, b);
    std::cout << "========" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "========" << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;
    std::cout << "min: " << min(a, b) << std::endl;

    std::cout<< std::endl;
    float c = 42.0f;
    float d = 0.0f;
    
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    swap(a, b);
    std::cout << "========" << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "========" << std::endl;
    std::cout << "max: " << max(c, d) << std::endl;
    std::cout << "min: " << min(c, d) << std::endl;

    return (0);
}

// int main( void ) {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return 0;
// }