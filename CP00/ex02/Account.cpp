#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inital_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = inital_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << inital_deposit << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "account;" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int examount = this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits += this->_nbDeposits;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << examount << ";deposits:" << deposit << ";amount:"<< this->_amount <<";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int examount = this->_amount;
	if(this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index;" << this->_accountIndex << ";p_amount:" << examount << ";withdrawal:" << "refused" << std::endl;
		return false;
	}
	else
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals += this->_nbWithdrawals;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << examount << ";withdrawal:" << withdrawal << ";amount:"<< this->_amount <<";nb_withdrawal:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::_displayTimestamp(void)
{
	std::time_t time;
	struct tm   *local;
	time = std::time(&time);
	local = localtime(&time);
	std::cout << "[" << local->tm_year + 1980 << local->tm_mon << local->tm_mday << "_" << local->tm_hour << local->tm_min << local->tm_sec << "] ";
}