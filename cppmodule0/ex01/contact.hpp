#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class	phonebook;

class contact
{
public:
	
	contact( void );
	~contact();
	void	printContact( void ) const;
	void	searchPrint( void ) const;	
	void	setContact( const phonebook *pb );
private:
	int				_id;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_phoneNumber;
	std::string		_secret;
	int				_full;

};

#endif
