#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void subject()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "j->getType():" << j->getType() << " " << std::endl;
	std::cout << "i->getType():" << i->getType() << " " << std::endl;
	std::cout << "meta->getType():" << meta->getType() << " " << std::endl;
	std::cout << "i->makeSound():" ;
	i->makeSound(); 
	std::cout << "j->makeSound():" ;
	j->makeSound();
	std::cout << "meta->makeSound():" ;
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "*******************************" << std::endl << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongAnimal();//wrong cat
	std::cout << "wrongj->getType():" << wrongj->getType() << " " << std::endl;
	std::cout << "wrongmeta->getType():" << wrongmeta->getType() << " " << std::endl;
	
	std::cout << "wrongj->makeSound():" ;
	wrongj->makeSound();
	std::cout << "wrongmeta->makeSound():" ;
	wrongmeta->makeSound();
	delete wrongmeta;
	delete wrongj;

}
void owntest()
{
	std::cout << "-------------ANIMAL CLASS------------------"<< std::endl;
	Animal a;
	Animal b("patata");
	Animal c(b);
	Animal d ;
	d = c;

	std::cout << "a.getType();" << a.getType() << std::endl;
	std::cout << "b.getType();" << b.getType() << std::endl;
	std::cout << "c.getType();" << c.getType() << std::endl;
	std::cout << "d.getType();" << d.getType() << std::endl;

	std::cout << "----------------------------------------------"<< std::endl;
	std::cout << "a.makeSound():" ;
	a.makeSound();
	std::cout << "b.makeSound():" ;
	b.makeSound(); 
	std::cout << "c.makeSound():" ;
	c.makeSound(); 
	std::cout << "d.makeSound():" ;
	d.makeSound();
	std::cout << "-------------CAT CLASS------------------"<< std::endl;
	Animal *e = new Cat;
	Animal *f = new Cat("Cat");
	Cat z("Rodolfo");
	Animal *g = new Cat(z);
	Cat h("pepe");
	h = z;

	std::cout << "e->getType();" << e->getType() << std::endl;
	std::cout << "f->getType();" << f->getType() << std::endl;
	std::cout << "g->getType();" << g->getType() << std::endl;
	std::cout << "h->getType();" << h.getType() << std::endl;

	std::cout << "e.makeSound():" ;
	e->makeSound();
	std::cout << "f.makeSound():" ;
	f->makeSound();
	std::cout << "g.makeSound():" ;
	g->makeSound();
	std::cout << "h.makeSound():" ;
	h.makeSound();
	std::cout << "-------------DOG CLASS------------------"<< std::endl;
	Animal *i = new Dog;
	Animal *j = new Dog("Dog");
	Dog x("juan");
	Animal *k = new Dog(x);
	Dog l("juanito");
	x = l;

	std::cout << "i->getType();" << i->getType() << std::endl;
	std::cout << "j->getType();" << j->getType() << std::endl;
	std::cout << "k->getType();" << k->getType() << std::endl;
	std::cout << "l->getType();" << l.getType() << std::endl;

	std::cout << "a.makeSound():" ;
	i->makeSound();
	std::cout << "b.makeSound():" ;
	j->makeSound();
	std::cout << "a.makeSound():" ;
	k->makeSound();
	std::cout << "b.makeSound():" ;
	l.makeSound();
	std::cout << "-------------WRONG ANIMAL CLASS------------------"<< std::endl;
	WrongAnimal A;
	WrongAnimal B("PATATA");
	WrongAnimal C(B);
	WrongAnimal D;
	D = C;

	std::cout << "A.getType();" << A.getType() << std::endl;
	std::cout << "B.getType();" << B.getType() << std::endl;
	std::cout << "C.getType();" << C.getType() << std::endl;
	std::cout << "D.getType();" << D.getType() << std::endl;

	std::cout << "A.makeSound():" ;
	A.makeSound();
	std::cout << "B.makeSound():" ;
	B.makeSound(); 
	std::cout << "C.makeSound():" ;
	C.makeSound(); 
	std::cout << "D.makeSound():" ;
	D.makeSound();
	std::cout << "-------------WRONG CAT CLASS------------------"<< std::endl;
	WrongAnimal *E = new WrongCat;
	WrongAnimal *F = new WrongCat("WrongCat");
	WrongCat Z("RODOLFO");
	WrongAnimal *G = new WrongCat(Z);
	WrongAnimal *H = new WrongCat;
	delete H;
	H = G;

	std::cout << "E->getType();" << E->getType() << std::endl;
	std::cout << "F->getType();" << F->getType() << std::endl;
	std::cout << "G->getType();" << G->getType() << std::endl;
	std::cout << "H->getType();" << H->getType() << std::endl;
	std::cout << "Z.getType();" << Z.getType() << std::endl;

	std::cout << "E.makeSound():" ;
	E->makeSound();
	std::cout << "F.makeSound():" ;
	F->makeSound();
	std::cout << "G.makeSound():" ;
	G->makeSound();
	std::cout << "H.makeSound():" ;
	H->makeSound();
	std::cout << "Z.makeSound():" ;
	Z.makeSound();
	std::cout << "----------------------------------------------"<< std::endl;

/* 
	Animal o = 			new WrongCat;
	WrongAnimal Kat = 	new Cat;
	WrongAnimal DoG = 	new Dog;
	Animal An = 		new WrongAnimal;
	WrongAnimal wr = 	new Animal;
 */

	//Cat
	std::cout <<"&e:"<< &e << std::endl;
	delete e;
	std::cout <<"&f:"<< &f << std::endl;
	delete f;
	std::cout <<"&g:"<< &g << std::endl;
	delete g;
	//Dog
	std::cout <<"&i:"<< &i << std::endl;
	delete i; 
	std::cout <<"&j:"<< &j << std::endl;
	delete j;
	std::cout <<"&k:"<< &k << std::endl;
	delete k;
	//WrongCat
	std::cout <<"&E:"<< &E << std::endl;
	delete E;
	std::cout <<"&F:"<< &F << std::endl;
	delete F;
	std::cout <<"&G:"<< &G << std::endl;
	delete G; 
/* 	std::cout <<"&H:"<< &H << std::endl;
	delete H; */
	

}

int main()
{
	//subject();
	owntest();

	return 0;
}