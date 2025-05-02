/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:41:51 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/01 22:51:15 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    
    private:

        std::string _target;
        virtual void    runForm(void) const;

    public:

        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm  &operator=(const PresidentialPardonForm &other);

};

#endif
