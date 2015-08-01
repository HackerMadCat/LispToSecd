#ifndef ATOM_H
#define ATOM_H

#include <string>
#include <list>

class Atom
{
private:
    std::string name;
public:
    Atom(std::string name) : name(name) {}
    Atom(const Atom&);
    ~Atom() = default;
public:
    const std::string& Name() const;
public:
    bool operator == (const Atom &) const;
    bool operator != (const Atom &) const;
};

std::list<Atom> StringToList (std::string);
std::string ListToString (std::list<Atom>);

#endif // ATOM_H