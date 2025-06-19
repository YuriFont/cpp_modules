/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:16:35 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/19 15:01:58 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <string>

class RPN {

    private:

        std::stack<int>  stackNumbers;

    public:

        RPN(void);
        RPN(const RPN &rpn);
        ~RPN(void);
        RPN &operator=(const RPN &rpn);
        int calculate(const std::string &str);

};

#endif
