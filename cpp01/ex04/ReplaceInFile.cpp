/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceInFile.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:52:56 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/08 19:52:56 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ReplaceInFile.hpp"

ReplaceInFile::ReplaceInFile(std::string fn, std::string s1, std::string s2) : _fileName(fn), _s1(s1), _s2(s2) {}

void	ReplaceInFile::makeReplacement(void) {
    std::ifstream	originalFile(this->_fileName.c_str());
	std::string		line;
	size_t			occ;

	if (!originalFile.is_open()) {
		std::cerr << "Error opening file for reading!!!" << std::endl;
		return ;
	}

	this->_fileName.append(".replace");
	std::ofstream	newFile(this->_fileName.c_str());

	if (!newFile.is_open()) {
		std::cerr << "Error opening file for writing!!!" << std::endl;
		return ;
	}

	while (std::getline(originalFile, line)) {
		occ = line.find(this->_s1);
		while (occ != std::string::npos) {
			line.erase(occ, this->_s1.length());
			line.insert(occ, this->_s2);
			occ = line.find(this->_s1);
		}
		newFile << line << std::endl;
	}

	originalFile.close();
	newFile.close();

	std::cout << ".replace file created!!!" << std::endl;
}
