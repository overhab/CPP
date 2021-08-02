#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class phonebook
{
public:
	contact			contact[8];
	static int		id;
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		secret;

	void	addContact( void );
	void	searchContact( void ) const;
	void	displayContact( void ) const;
private:
};

#endif
