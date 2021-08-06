#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class	phonebook;

class contact
{
public:
	
	contact( void );
	~contact();
	void			setContact( const phonebook *pb );
	void			printContact( void ) const;
	void			searchPrint( void ) const;
private:
	int				_id;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_phoneNumber;
	std::string		_secret;
	int				_full;

	std::string		ft_truncate( const std::string line, size_t width) const;

};

#endif
