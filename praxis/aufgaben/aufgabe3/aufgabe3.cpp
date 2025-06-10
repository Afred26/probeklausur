/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"

// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{

    if (is_empty())
    {
        return {};
    }
    else
    {
        return append({this->value}, next->values());
    }
}

std::vector<int> append(std::vector<int> n, std::vector<int> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        n.push_back(m.at(i));
    }
    return n;
}