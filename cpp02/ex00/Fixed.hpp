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
        Fixed &operator=(const Fixed &fixed);
        ~Fixed(void);  
        int     getRawBits(void) const;
        void    setRawBits(int const raw);


};

#endif
