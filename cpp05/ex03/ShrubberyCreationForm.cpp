/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:54:46 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/01 11:54:46 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137), _target("targetless") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        this->_target = other._target;
    }
    return *this;
}

void    ShrubberyCreationForm::runForm(void) const {
    std::ofstream file((this->_target + "_shrubbery").c_str());

    if (!file)
        throw ErrorCreatingFile();
    file << "       _-_\n"
    << "    /~~   ~~\\\n"
    << " /~~         ~~\\\n"
    << "{               }\n"
    << " \\  _-     -_  /\n"
    << "   ~  \\\\ //  ~\n"
    << "_- -   | | _- _\n"
    << "  _ -  | |   -_\n"
    << "       | |\n";
    file.close();
}

const char *ShrubberyCreationForm::ErrorCreatingFile::what(void) const throw() {
    return "Error creating file!";
}
