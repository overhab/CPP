#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
class ICharacter;
class AMateria;

class Character : public ICharacter
{
private:
	AMateria		*_mat[NUM_MAT];
	std::string		_name;
public:
	Character( void );
	Character( const std::string& name );
	Character( const Character& copy );
	~Character( );

	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	AMateria* 			store( const AMateria& from );
	std::string const & getName() const;
	Character& 			operator=( const Character& ref );
};

#endif
