/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:49:59 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/27 11:49:59 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void): _name("Nameless"), _grade(75) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): _name(bureaucrat._name), _grade(bureaucrat._grade) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    if (this != &bureaucrat)
        this->_grade = bureaucrat.getGrade();
    return *this;
}

const std::string&  Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

int Bureaucrat::promote(void) {
    if (this->_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
    return this->_grade;
}

int Bureaucrat::demote(void) {
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
    return this->_grade;
}

void    Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form) const {
    try {
        form.execute(*this);
        std::cout << this->_name << " execute " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "Grade is too high!!!";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "Grade is too low!!!";
}

std::ostream&   operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}
