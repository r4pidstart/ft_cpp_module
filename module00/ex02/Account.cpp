/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 01:53:59 by tjo               #+#    #+#             */
/*   Updated: 2023/01/11 23:18:57 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include<ctime>
#include<iostream>

int Account::_nbAccounts=0;
int Account::_totalAmount=0;
int Account::_totalNbDeposits=0;
int Account::_totalNbWithdrawals=0;

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ';'
        << "total:" << getTotalAmount() << ';'
        << "deposits:" << getNbDeposits() << ';'
        << "withdrawals:" << getNbWithdrawals() << '\n' << std::flush;
}

Account::Account(int initial_deposit)
{
    _accountIndex=_nbAccounts++;
    _amount=initial_deposit;
    _totalAmount+=initial_deposit;
    _nbDeposits=0;
    _nbWithdrawals=0;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';'
        << "amount:" << _amount << ';'
        << "created\n" << std::flush;
}

Account::Account(void)
{
    _accountIndex=_nbAccounts++;
    _amount=0;
    _nbDeposits=0;
    _nbWithdrawals=0;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';'
        << "amount:" << _amount << ';'
        << "created\n" << std::flush;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';'
        << "amount:" << _amount << ';'
        << "closed\n" << std::flush;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';'
        << "p_amount:" << _amount << ';';
        
    _totalNbDeposits++;
    _nbDeposits++;
    _amount+=deposit;
    _totalAmount+=deposit;
    
    std::cout << "deposit:" << deposit << ';'
        << "amount:" << _amount << ';'
        << "nb_deposits:" << _nbDeposits << '\n' << std::flush;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';'
        << "p_amount:" << _amount << ';';
        
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    _amount-=withdrawal;
    _totalAmount-=withdrawal;

    int flag=0;
    if(checkAmount())
    {
        flag=1;
        _totalNbWithdrawals--;
        _nbWithdrawals--;
        _amount+=withdrawal;
        _totalAmount+=withdrawal;
    }
    
    if(flag)
        std::cout << "withdrawal:refused";
    else
        std::cout << "withdrawal:" << withdrawal << ';'
            << "amount:" << _amount << ';'
            << "nb_withdrawals:" << _nbWithdrawals;
    std::cout << '\n' << std::flush;
    return flag;
}

int Account::checkAmount(void) const
{
    return _amount < 0;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';'
        << "amount:" << _amount << ';'
        << "deposits:" << _nbDeposits << ';'
        << "withdrawals:" << _nbWithdrawals << '\n' << std::flush;
}

void Account::_displayTimestamp(void)
{
    // std::cout << "[19920104_091532] ";
    std::time_t t=std::time(NULL);
    char tmpstr[100];
    
    if(std::strftime(tmpstr, sizeof(tmpstr), "[%Y%m%d_%H%M%S] ", std::localtime(&t)))
        std::cout << tmpstr;
}
