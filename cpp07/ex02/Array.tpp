/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:25:56 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/30 09:35:06 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): elements(0), n(0) {}

template <typename T>
Array<T>::Array(unsigned int n): n(n) {
    if (n == 0)
        elements = 0;
    else
        elements = new T[n];
}

template <typename T>
Array<T>::Array(const Array &array): n(array.n) {
    if (n == 0)
        elements = 0;
    else {
        elements = new T[n];
        for (unsigned int i = 0; i < n; i++)
            elements[i] = array.elements[i];
    }
}

template <typename T>
Array<T>    &Array<T>::operator=(const Array &array) {
    if (this != &array) {
        delete[] elements;
        n = array.n;
        if (n == 0)
            elements = 0;
        else {
            elements = new T[n];
            for (unsigned int i = 0; i < n; i++)
                elements[i] = array.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array(void) {
    delete[] elements;
}

template <typename T>
T   &Array<T>::operator[](unsigned int index) {
    if (index >= n)
        throw std::exception();
    return elements[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
    if (index >= n)
        throw std::exception();
    return elements[index];
}

template <typename T>
unsigned int    Array<T>::size(void) const {
    return n;
}
