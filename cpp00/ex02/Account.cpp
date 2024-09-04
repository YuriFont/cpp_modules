/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:47:29 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/04 20:06:15 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = this->_nbAccounts;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::_displayTimestamp(void) {
	std::time_t	time = std::time(NULL);
	std::tm*	now = std::localtime(&time);
	char	buffer[42];

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", now);
	std::cout << buffer;
}

int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbWithdrawals++;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount(void) const {
	return this->_amount;
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
