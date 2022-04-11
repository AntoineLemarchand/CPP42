#include <iostream>
#include <ctime>

int	Account::_NbAccounts = 0;

static int	Account::getNbAccounts( void )
{}

static int	Account::getTotalAmount( void )
{}

static int	Account::getNbDeposits( void )
{}

static int	Account::getNbWithdrawals( void )
{}

static void	Account::displayAccountsInfos( void )
{}

Account::Account( int initial_deposit )
{
	this->_totalAmount = initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_NbAccounts;
	std::cout << ";amount:" << this.initial_deposit;
	std::cout << ";created" << std::endl;
	this->NbAccounts++;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_NbAccounts;
	std::cout << ";amount:" << this.initial_deposit;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{}

bool	Account::makeWithdrawal( int withdrawal )
{}

int		Account::checkAmount( void ) const
{}

void	Account::displayStatus( void ) const
{}

static void	Account::_displayTimestamp( void )
{
	struct tm	*local;
	char		ts[19] = {0};

	std::timet timer = std::time(NULL);
	local = localtime(&timer);
	std::strftime(timestamp, 19, "[%Y%m%d%H%M%S]", local);
	std::cout << timestamp;
}
