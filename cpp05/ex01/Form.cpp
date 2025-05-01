/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:23 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/29 10:22:23 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("Nameless"), _isSigned(false), _gradeToSign(75), _gradeToExecute(75) {}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw GradeTooLowException();
    if (this->_gradeToExecute < 1 || this->_gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &form): _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {}

Form::~Form(void) {}

Form    &Form::operator=(const Form &form) {
    if (this != &form)
        this->_isSigned = form.getIsSigned();
    return *this;
}

const std::string&  Form::getName(void) const {
    return this->_name;
}

bool    Form::getIsSigned(void) const {
    return this->_isSigned;
}

int Form::getGradeToSign(void) const {
    return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const {
    return this->_gradeToExecute;
}

bool    Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowException();
    this->_isSigned = true;
    return this->_isSigned;
}

const char *Form::GradeTooHighException::what(void) const throw() {
    return "Grade is too high.";
}

const char *Form::GradeTooLowException::what(void) const throw() {
    return "Grade is too low.";
}

std::ostream&   operator<<(std::ostream &os, const Form &f) {
    os << "{\n    Name: " << f.getName() << "," << std::endl;
    os << "    Is signed: " << f.getIsSigned() << "," << std::endl;
    os << "    Grade to sign: " << f.getGradeToSign() << "," << std::endl;
    os << "    Grade to execute: " << f.getGradeToExecute() << "\n}" << std::endl;
    return os;
}
