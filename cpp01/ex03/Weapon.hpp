/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:02:13 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/07 23:02:13 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

class Weapon {

	public:

		Weapon(void);
		Weapon(std::string type);

		const std::string&	getType(void);
		void				setType(const std::string& type);

	private:

		std::string	type;

};

#endif
