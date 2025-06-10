/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe4.h"

// Erwartet zwei Vektoren und liefert true, falls diese die gleichen Elemente
// enthalten. Die Reihefolge der Elemente muss dabei nicht gleich sein.
bool same_elements(std::vector<int> a, std::vector<int> b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    else
    {
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (a.at(i) != b.at(i))
            {
                return false;
            }
        }
    }
    return true;
}
