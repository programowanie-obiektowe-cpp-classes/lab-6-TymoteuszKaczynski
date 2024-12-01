#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

     std::for_each(people.begin(), people.end(), [](Human &people){people.birthday();});
     std::transform(people.begin(), people.end(), retval.begin(), [](Human &people){if (people.isMonster()) {
        return 'n';
    } else {
        return 'y';
    }} );
     std::reverse(retval.begin(), retval.end());
    return retval;
}
