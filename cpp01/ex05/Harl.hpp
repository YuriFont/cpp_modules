/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:12:19 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/05 11:12:19 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__HARL_HPP__
#define	__HARL_HPP__
#include <iostream>

class Harl {

	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:

		Harl(void);
		~Harl(void);
		void	complain(std::string level);

};

#endif
