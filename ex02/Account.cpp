/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:26:47 by merlich           #+#    #+#             */
/*   Updated: 2022/06/23 21:43:31 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
}

Account::Account( void ) : _accountIndex(Account::_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += 0;
}

Account::~Account( void ){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
}

void	Account::_displayTimestamp( void ){

	time_t	tm = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::cout << "[";
	std::cout << std::put_time(std::localtime(&tm), "%Y%m%d_%H%M%S");
	std::cout << "]";
	std::cout << " ";
}

int Account::getNbAccounts( void ){

	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){

	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){

	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){

	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{	

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	
}

void	Account::makeDeposit( int deposit ){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

int		Account::checkAmount( void ) const{
	return this->_amount;
}

bool	Account::makeWithdrawal( int withdrawal ){

	bool	res = 1;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->checkAmount() >= withdrawal){
		
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this->_nbDeposits << std::endl;

		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		res = 0;
	}
	else
		std::cout << "withdrawal:refused" << std::endl;
	return res;
}



int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;
