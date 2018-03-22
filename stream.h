#pragma once
#include <fstream>
#include <sstream>
#include <locale>
#include <codecvt>
#include <cstdint>

#include "fix.h"

namespace tuftmf
{

using char_traits  = std::char_traits<char_type>;

using istream = std::basic_istream<char_type, char_traits>;
using ostream = std::basic_ostream<char_type, char_traits>;

using ifstream = std::basic_ifstream<char_type, char_traits>;
using ofstream = std::basic_ofstream<char_type, char_traits>;

using istringstream = std::basic_istringstream<char_type, char_traits>;
using ostringstream = std::basic_ostringstream<char_type, char_traits>;

template<class _IStream, class _OStream>
void fix(_IStream& is, _OStream& os)
{
    using cvtutf8 = std::codecvt_utf8
        <char_type, 0x10ffff, std::consume_header>;
    is.imbue(std::locale(is.getloc(), new cvtutf8));
    os.imbue(std::locale(os.getloc(), new cvtutf8));
    char_type before = L'\0', current, after;
    is.get(current);
    while (!is.eof())
    {
        is.get(after);
        current = fix(before, current, after);
        os.put(current);
        before = current;
        current = after;
    } // while
}

} // namespace tuftmf
