/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:42:00 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/04 21:42:00 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

class Zombie {

	public:

		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );


	private:

		Zombie(void);

		std::string	_name;

};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif
