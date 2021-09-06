#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
	const WrongAnimal *wa = new WrongCat();
	const WrongAnimal *wa2 = new WrongAnimal();
	wa->makeSound();
	wa2->makeSound();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Type :" << j->getType() << " " << std::endl;
	std::cout << "Type :" << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
	delete wa;
	delete wa2;

}
