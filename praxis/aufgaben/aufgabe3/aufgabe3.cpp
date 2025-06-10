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
        std::vector<int> result1 = {this->value};
        std::vector<int> result2 = next->values();
        append(result1, result2);
        return result1;
    }
}

bool append(std::vector<int> &n, std::vector<int> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        n.push_back(m.at(i));
    }
}