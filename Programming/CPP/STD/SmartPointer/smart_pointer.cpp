
#include <iostream>
#include <memory>

class UtilityClass
{
private:
    /* data */
public:
    UtilityClass(/* args */);
    ~UtilityClass();
    void Operation(int value)
    {
        value=value*1000;
        std::cout << "New value: " << value << "\n"; 
    }
};

UtilityClass::UtilityClass(/* args */)
{
}

UtilityClass::~UtilityClass()
{
}

class UsingClass
{
private:
    /* data */
public:
    UsingClass(/* args */);
    ~UsingClass();

    std::shared_ptr<UtilityClass> utiInst;

    void function1(int value)
    {
        utiInst->Operation(value);
    }

    std::shared_ptr<UtilityClass> getInst()
    {
        return utiInst;
        // auto p = utiInst.get();
        // return *p;
    }
    
};

UsingClass::UsingClass(/* args */)
{
    utiInst = std::make_shared<UtilityClass>();
}

UsingClass::~UsingClass()
{
}


int main()
{

    UsingClass inst; 
    inst.function1(12); 
    auto uti_inst = inst.getInst();
    uti_inst->Operation(15);
    inst.function1(12); 
}
