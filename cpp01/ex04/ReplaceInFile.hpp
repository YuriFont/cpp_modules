/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceInFile.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:10:06 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/08 19:10:06 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACEINFILE_HPP__
#define __REPLACEINFILE_HPP__

class ReplaceInFile {

	public:

		ReplaceInFile(std::string fn, std::string s1, std::string s2);

		void	makeReplacement(void);

	private:

		std::string	_fileName;
		std::string	_s1;
		std::string	_s2;

};

#endif
