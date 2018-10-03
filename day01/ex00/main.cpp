#include "Pony.hpp"

static void	ponyOnTheStack()
{
	Pony	stackPony;

	stackPony.set_name("PurPur");
	stackPony.set_age("2");
	stackPony.set_color("purple");
	stackPony.set_owner("Elon Mask");
	std::cout << "Name: " << stackPony.get_name() << std::endl;
	std::cout << "Age: " << stackPony.get_age() << std::endl;
	std::cout << "Color: " << stackPony.get_color() << std::endl;
	std::cout << "Owner: " << stackPony.get_owner() << std::endl;
}

static void	ponyOnTheHeap()
{
	Pony *heapPony = new Pony;

	heapPony->set_name("Fikus");
	heapPony->set_age("12");
	heapPony->set_color("white");
	heapPony->set_owner("Elon Mask");
	std::cout << "Name: " << heapPony->get_name() << std::endl;
	std::cout << "Age: " << heapPony->get_age() << std::endl;
	std::cout << "Color: " << heapPony->get_color() << std::endl;
	std::cout << "Owner: " << heapPony->get_owner() << std::endl;
	delete(heapPony);
}

int		main(void)
{
	std::cout << "<<<<<<<<<< Pony on the heap >>>>>>>>>>" << std::endl;
	ponyOnTheHeap();
	std::cout << "<<<<<<<<<< Pony on the stack >>>>>>>>>>" << std::endl;
	ponyOnTheStack();
	return (0);
}