#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector<char> foo(std::list<Human>& people)
{
    std::vector<char> retval(people.size());

    std::for_each(people.begin(), people.end(),
                  [&retval, i = people.size()](Human& h) mutable {
                      h.birthday();
                      retval[--i] = h.isMonster() ? 'n' : 'y';
                  });

    return retval;
}
