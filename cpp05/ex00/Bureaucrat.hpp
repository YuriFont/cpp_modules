/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:49:14 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/29 09:10:49 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat {

    private:

        const std::string _name;
        int _grade;

    public:

        Bureaucrat(void);
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        ~Bureaucrat(void);
        Bureaucrat  &operator=(const Bureaucrat &bureaucrat);
        const std::string&  getName(void) const;
        int getGrade(void) const;
        int promote(void);
        int demote(void);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        friend std::ostream& operator<<(std::ostream &os, const Bureaucrat &b);

};

#endif
