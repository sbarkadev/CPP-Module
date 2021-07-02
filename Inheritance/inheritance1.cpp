#include <string>

class Animal {
    private:
        int _numberOfLegs;

    public:
        Animal();
        Animal(Animal const &);
        Animal & operator=(Animal const &);
        ~Animal();

        void run(int distance);
        void call();
        void eat(std::string const & what);
        void walk(int distance);
};

// Cat class inherits from the Animal class publicly
//Cat is an animal
class Cat :  public Animal {
    public:
        Cat();
        Cat(Cat const &);
        Cat & operator = (Cat const &);
        ~Cat();

        void scornSomeone(std::string const & target);
};

// Pony is ana animal and it inherits from Animal publicly
class Pony {
    public:
        Pony();
        Pony(Pony const &);
        Pony & operator=(Pony const &);
        ~Pony();

        void doMagic(std::string const & target);
};

class Otter : public Animal {
    public : 
        Otter();
        Otter(Otter const &);
        Otter & operator = (Otter const &);
        ~Otter();
};