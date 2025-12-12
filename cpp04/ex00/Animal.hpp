#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	private:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal& other);
		~Animal();
		Animal&			operator=(const Animal& other);
		std::string		getType() const;
		void			makeSound() const;
};

#endif