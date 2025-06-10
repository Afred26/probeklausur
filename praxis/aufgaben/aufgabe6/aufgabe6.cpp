/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 *ERREICHBARE PUNKTE : 10
 */

#include "aufgabe6.h"

// Sucht einen Knoten mit dem gegebenen Schlüssel im Baum.
// Liefert einen Pfad zu diesem Knoten als String.
// Der Pfad besteht aus den Buchstaben 'L' und 'R' für links und rechts.
// Er beschreibt den Weg vom Wurzelknoten zum gesuchten Knoten.
// Ist der gesuchte Knoten der Wurzelknoten, wird ein leerer String
// geliefert. Wenn der Knoten nicht gefunden wird, wird ein "X" geliefert.
std::string Node::path(int key_)
{
    std::string result = find(key_);
    if (result.empty())
    {
        return "";
    }
    else if (result.at(result.length() - 1) == 'X')
    {
        return "X";
    }
    else
    {
        return result;
    }
}

std::string Node::find(int key_)
{
    if (this->key == key_)
    {
        return "";
    }
    else if (this->is_empty())
    {
        return "X";
    }
    else if (this->key < key_)
    {
        return "R" + right->find(key_);
    }
    else if (this->key > key_)
    {
        return "L" + left->find(key_);
    }
    return "";
}