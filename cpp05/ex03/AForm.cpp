/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:23 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/29 10:22:23 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void): _name("Nameless"), _isSigned(false), _gradeToSign(75), _gradeToExecute(75) {}

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw GradeTooLowException();
    if (this->_gradeToExecute < 1 || this->_gradeToExecute < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &form): _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {}

AForm::~AForm(void) {}

AForm    &AForm::operator=(const AForm &form) {
    if (this != &form)
        this->_isSigned = form.getIsSigned();
    return *this;
}

const std::string&  AForm::getName(void) const {
    return this->_name;
}

bool    AForm::getIsSigned(void) const {
    return this->_isSigned;
}

int AForm::getGradeToSign(void) const {
    return this->_gradeToSign;
}

int AForm::getGradeToExecute(void) const {
    return this->_gradeToExecute;
}

bool    AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowException();
    this->_isSigned = true;
    return this->_isSigned;
}

void    AForm::execute(Bureaucrat const & executor) const {
    if (!this->_isSigned)
        throw UnsignedForm();
    if (executor.getGrade() > this->_gradeToExecute)
        throw GradeTooLowException();
    runForm();
}

const char *AForm::GradeTooHighException::what(void) const throw() {
    return "Grade is too high.";
}

const char *AForm::GradeTooLowException::what(void) const throw() {
    return "Grade is too low.";
}

const char *AForm::UnsignedForm::what(void) const throw() {
    return "This form is not asigned!";
}

std::ostream&   operator<<(std::ostream &os, const AForm &f) {
    os << "{\n    Name: " << f.getName() << "," << std::endl;
    os << "    Is signed: " << f.getIsSigned() << "," << std::endl;
    os << "    Grade to sign: " << f.getGradeToSign() << "," << std::endl;
    os << "    Grade to execute: " << f.getGradeToExecute() << "\n}" << std::endl;
    return os;
}
