#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::for_each(humans.begin(), humans.end(),
                  [&result, i = humans.size()](Human& h) mutable {
                      h.birthday();
                      result[--i] = h.isMonster() ? 'n' : 'y';
                  });

    return retval;
}
