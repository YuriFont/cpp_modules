/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:39:18 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/31 15:10:58 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFING_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator    easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found in container");
    return it;
}

#endif
