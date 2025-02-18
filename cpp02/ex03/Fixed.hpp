/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:39:40 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/06 11:39:40 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# include <iostream>

class Fixed {

    private:

        static const int    _fractionalBits;
        int                 _rawBits;
        
    public:

        Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
        Fixed   &operator=(const Fixed &fixed);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        friend std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);
        bool    operator>(const Fixed &fixed) const;
        bool    operator<(const Fixed &fixed) const;
        bool    operator>=(const Fixed &fixed) const;
        bool    operator<=(const Fixed &fixed) const;
        bool    operator==(const Fixed &fixed) const;
        bool    operator!=(const Fixed &fixed) const;
        float   operator+(const Fixed &fixed) const;
        float   operator-(const Fixed &fixed) const;
        float   operator*(const Fixed &fixed) const;
        float   operator/(const Fixed &fixed) const;
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);
        static Fixed    &min(Fixed &a, Fixed &b);
        static const Fixed    &min(const Fixed &a, const Fixed &b);
        static Fixed    &max(Fixed &a, Fixed &b);
        static const Fixed    &max(const Fixed &a, const Fixed &b);
    
};

#endif
