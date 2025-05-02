/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:29 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/29 10:22:29 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    private:

        const std::string   _name;
        bool    _isSigned;
        const int   _gradeToSign;
        const int   _gradeToExecute;
        virtual void    runForm(void) const = 0;

    public:

        AForm(void);
        AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm &form);
        ~AForm(void);
        AForm    &operator=(const AForm &form);
        const std::string&  getName(void) const;
        bool    getIsSigned(void) const;
        int     getGradeToSign(void) const;
        int     getGradeToExecute(void)  const;
        bool    beSigned(const Bureaucrat &bureaucrat);
        void    execute(Bureaucrat const & executor) const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        class UnsignedForm : public std::exception {
            public:
                virtual const char* what(void) const throw();
        };

        friend std::ostream& operator<<(std::ostream &os, const AForm &f);

};

#endif
