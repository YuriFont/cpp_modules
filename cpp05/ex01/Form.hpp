/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:29 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/29 10:22:29 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:

        const std::string   _name;
        bool    _isSigned;
        const int   _gradeToSign;
        const int   _gradeToExecute;

    public:

        Form(void);
        Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
        Form(const Form &form);
        ~Form(void);
        Form    &operator=(const Form &form);
        const std::string&  getName(void) const;
        bool    getIsSigned(void) const;
        int     getGradeToSign(void) const;
        int     getGradeToExecute(void)  const;
        bool    beSigned(const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        friend std::ostream& operator<<(std::ostream &os, const Form &f);

};

#endif
