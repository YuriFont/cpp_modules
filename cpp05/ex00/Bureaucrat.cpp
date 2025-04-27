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

Bureaucrat::Bureaucrat(void): _name("Nameless"), _grade(75) {
    std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
    std::cout << "Bureaucrat constructor called." << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
    std::cout << "Bureaucrat copy constructor called." << std::endl;
    this->_name = bureaucrat.getName();
    this->_grade = bureaucrat.getGrade();
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    if (this != &bureaucrat) {
        this->_name = bureaucrat.getName();
        this->_grade = bureaucrat.getGrade();
    }
    return *this;
}

const std::string&  getName(void) const {
    return this->_name;
}

int getGrade(void) const {
    return this->_grade;
}

int promote(void) {
    if (grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
    return this->_grade;
}

int demote(void) {
    if (grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
    return this->_grade;
}


