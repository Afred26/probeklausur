/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe1.h"

// Prüft, ob die Werte in v in absteigender Reihenfolge sortiert sind.
bool is_sorted_ascending(std::vector<int> const &v)
{
    for (int i = 0; i + 1 < v.size(); i++)
    {
        if (v.at(i) > v.at(i + 1))
        {
            return false;
        }
    }
    return true;
}
