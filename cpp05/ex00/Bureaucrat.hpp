/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:49:14 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/26 16:49:17 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {

    private:

        const std::string _name;
        int grade;

    public:

        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat  &operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat(void);

};

#endif
