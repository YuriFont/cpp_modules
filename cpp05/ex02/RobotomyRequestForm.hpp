/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:37:10 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/01 21:37:10 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"
#include <cstdlib>
#include <ctime> 

class RobotomyRequestForm : public AForm {

    private:

        std::string _target;
        virtual void    runForm(void) const;

    public:

    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

};

#endif
