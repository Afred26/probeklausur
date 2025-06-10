/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe2.h"

// Liefert die Laenge der Liste, beginnend mit `this`.
size_t Element::length()
{
    if (is_empty())
    {
        return 0;
    }
    else
    {
        return next->length() + 1;
    }
}
