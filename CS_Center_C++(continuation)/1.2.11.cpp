struct Animal : virtual Unit
{
public:
    Animal(std::string const & name, size_t id) : Unit(id), name_(name){}
    std::string const& name() const {return name_; }
private:
    std::string name_;
};

struct Man : virtual Unit
{
public:
    explicit Man(size_t id) : Unit(id){}
};

struct Bear : Animal
{
    explicit Bear(size_t id) : Unit(id), Animal("bear", id){}
};

struct Pig : Animal
{
    explicit Pig(size_t id) : Unit(id), Animal("pig", id){}
};

struct ManBearPig : Bear, Pig, Man
{
    explicit ManBearPig(size_t id) : Unit(id), Man(id), Bear(id), Pig(id){}
};
