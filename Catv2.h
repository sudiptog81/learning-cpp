#include <string>
using namespace std;

#ifndef CATV2_H
#define CATV2_H

class Catv2
{
  private:
    // Member Variables
    string privateVar;
    unsigned int age;

  public:
    // Class Constructors
    Catv2()
    {
        setAge(0);
        setPrivateVar("");
    };
    Catv2(int x, string y)
    {
        setAge(x);
        setPrivateVar(y);
    };
    // Class Accessors
    unsigned int getAge() const;
    string getPrivateVar() const;
    void setAge(int _age);
    void setPrivateVar(string _owner);
    // Class Methods
    void meow();
    void scratch();
};

#endif