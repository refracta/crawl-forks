#include "AppHdr.h"

#include "season.h"

/**
* Halloween or Hallowe'en (/ˌhæləˈwiːn, -oʊˈiːn, ˌhɑːl-/; a contraction of
* "All Hallows' Evening"),[6] also known as Allhalloween,[7] All Hallows' Eve,
* [8] or All Saints' Eve,[9] is a yearly celebration observed in a number of
* countries on 31 October, the eve of the Western Christian feast of All
* Hallows' Day... Within Allhallowtide, the traditional focus of All Hallows'
* Eve revolves around the theme of using "humor and ridicule to confront the
* power of death."[12]
*
* Typical festive Halloween activities include trick-or-treating (or the
* related "guising"), attending costume parties, decorating, carving pumpkins
* into jack-o'-lanterns, lighting bonfires, apple bobbing, visiting haunted
* house attractions, playing pranks, telling scary stories, and watching
* horror films.
*
* @return  Whether the current day is Halloween. (Cunning players may reset
*          their system clocks to manipulate this. That's fine.)
*/
bool is_halloween()
{
    const time_t curr_time = time(nullptr);
    const struct tm *date = TIME_FN(&curr_time);
    // tm_mon is zero-based in case you are wondering
    return date->tm_mon == 9 && date->tm_mday == 31;
}
