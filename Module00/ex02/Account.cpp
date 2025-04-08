#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();//타임스태프
	_accountIndex = _nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += _amount;
}

Account::~Account(void)
{
	Account::_displayTimestamp();//타임스태프
	std::cout << "index:" << _accountIndex << "amount:" << _amount << ";closed" << std::endl;
}

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
	//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	Account::_displayTimestamp();//타임스태프
	std::cout << "accounts:" << getNbAccounts() << ";" << std::flush;//인덱스
	std::cout << "total:" << getTotalAmount() << ";" << std::flush;//총합
	std::cout << "deposits:" << getNbDeposits() << ";" << std::flush;//입급 횟수
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;//출금 횟수
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();//타임스태프
	std::cout << "index:" << _accountIndex << ";" << std::flush;//인덱스
	std::cout << "amount:" << _amount << ";" << std::flush;//총합
	std::cout << "deposits:" << getNbDeposits() << ";" << std::flush;//입급 횟수
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;//출금 횟수
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();//타임스태프
	std::cout << "index:" << _accountIndex << ";" << std::flush;//인덱스
	std::cout << "p_amount:" << _amount << ";" << std::flush;//총합
	std::cout << "deposit:" << deposit << ";" << std::flush;//총합
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";" << std::flush;//총합
	_nbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << ";" << std::endl;//입급 횟수
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();//타임스태프
	std::cout << "index:" << _accountIndex << ";" << std::flush;//인덱스
	std::cout << "p_amount:" << _amount << ";" << std::flush;//총합
	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << std::flush;
		_amount -= withdrawal;
		_nbWithdrawals++;
		std::cout << ";nb_deposits:" << _nbWithdrawals << ";" << std::endl;
		return true;
	}
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	struct tm* timeInfo = localtime(&t);
	char dateTime[20];
	strftime(dateTime, sizeof(dateTime), "%Y%m%d_%H%M%S", timeInfo);
	std::cout << "[" << std::flush;
	std::cout << dateTime << std::flush;
	std::cout << "] " << std::flush;
}