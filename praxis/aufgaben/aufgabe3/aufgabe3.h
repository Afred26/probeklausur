#ifndef AUFGABE_3_H
#define AUFGABE_3_H

#include <cstddef>
#include <vector>

/// fügt vector m an vector n an.
std::vector<int> append(std::vector<int> n, std::vector<int> m);

/// Repräsentiert ein Element in einer verketteten Liste.
struct Element
{
    int value;
    Element *next;

    /// Liefert `true`, wenn `this` ein Dummy, also this->next == nullptr ist.
    bool is_empty() { return next == nullptr; }

    /// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
    /// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
    std::vector<int> values();
};

#endif
