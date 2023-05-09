#include "Object.h"

Object::Object():name("none"),tag("none"){};

Object::Object(string name,string tag)
{
    this->name = name;
    this->tag = tag;
};

    /* pure virtual function */
virtual bool triggerEvent(Object*) = 0;

    /* Set & Get function*/
void setName(string name)
{
    this->name = name;
};
void setTag(string tag)
{
    this->tag = tag;
};

string getName()
{
    return this->name;
};

string getTag()
{
    return this->tag;
};
