#include <iostream>
#include <ctime>

static int	Account::_nbAccounts = 0;

static int	Account::getNbAccounts( void )
{
	return (this->_accountIndex)
}

static int	Account::getTotalAmount( void )
{
	return (this->_totalAmount);
}

static int	Account::getNbDeposits( void )
{
	return (this->_nbDeposits);
}

static int	Account::getNbWithdrawals( void )
{
	return (this->_nbWithdrawals);
}

static void	Account::displayAccountsInfos( void )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_NbAccounts;
	std::cout << ";amount:" << this->_totalAmount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount = initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_NbAccounts;
	std::cout << ";amount:" << this->_totalAmount;
	std::cout << ";created" << std::endl;
	this->_accountIndex = this->NbAccounts;
	this->NbAccounts++;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_totalAmount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_totalAmount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
}

int		Account::checkAmount( void ) const
{
	return (this->_totalAmount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " accounts:" << this->_NbAccounts;
	std::cout << ";total:" << this->_totalAmount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

static void	Account::_displayTimestamp( void )
{
	struct tm	*local;
	char		ts[19] = {0};

	std::timet timer = std::time(NULL);
	local = localtime(&timer);
	std::strftime(timestamp, 19, "[%Y%m%d%H%M%S]", local);
	std::cout << timestamp;
}
