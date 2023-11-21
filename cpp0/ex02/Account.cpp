/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:00:37 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 17:00:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

Account::Account(int initial_deposit)
{
}
Account::~Account(void)
{
}
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ":deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals << stdendl;
}

void Account::makeDeposit(int deposit)
{
}
bool Account::makeWithdrawal(int withdrawal)
{
}
int Account::checkAmount(void) const
{
}
void Account::displayStatus(void) const
{
	std::cout << this->_displayTimestamp() << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created " << std::endl;
}
