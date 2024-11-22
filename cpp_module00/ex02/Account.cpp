#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <chrono>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{

    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"
    << this->_amount << ";created" << std::endl;
}


void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:"
    << getTotalAmount() << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayStatus(void) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"
    << this->_amount << ";deposits:" << this->_nbDeposits 
    << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    if (deposit > 0)
    {
        this->_nbDeposits++;
        Account::_totalNbDeposits++;
    }

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"
    << this->_amount << ";deposit:" << deposit << ";amount:"
    << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;

    this->_amount += deposit;
    
    Account::_totalAmount += deposit;
}

int		Account::checkAmount( void ) const
{
    if (this->_amount < 0)
        return -1;
    return 0;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    int p_amount = this->_amount;
    this->_amount -= withdrawal;

    if (checkAmount() == -1)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:"
        << p_amount << ";withdrawal:refused" << std::endl;
        this->_amount = p_amount;
        return false;
    }
        this->_nbWithdrawals++;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:"
        << p_amount << ";withdrawal:" << withdrawal << ";amount:"
        << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        return true;
}

void Account::_displayTimestamp()
{
    auto now = std::chrono::system_clock::now();
    std::time_t tim = std::chrono::system_clock::to_time_t(now);
    std::string cur_time = ctime(&tim);
    if (!cur_time.empty() && cur_time.back() == '\n')
        cur_time.pop_back();
    std::cout << "[" << cur_time << "] ";
}


Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"
    << this->_amount << ";closed" << std::endl;
}

