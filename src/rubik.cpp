#include "rubik.h"

namespace rbk
{
    rubik rubik::U() const
    {
        rubik c{ *this };

        c[rubik::ulb] = clr[rubik::ufl];
        c[rubik::ubr] = clr[rubik::ulb];
        c[rubik::urf] = clr[rubik::ubr];
        c[rubik::ufl] = clr[rubik::urf];
        c[rubik::luf] = clr[rubik::fur];
        c[rubik::lbu] = clr[rubik::flu];
        c[rubik::bul] = clr[rubik::luf];
        c[rubik::bru] = clr[rubik::lbu];
        c[rubik::rub] = clr[rubik::bul];
        c[rubik::rfu] = clr[rubik::bru];
        c[rubik::fur] = clr[rubik::rub];
        c[rubik::flu] = clr[rubik::rfu];

        return c;
    }

    rubik rubik::u() const
    {
        rubik c{ *this };

        c[rubik::ufl] = clr[rubik::ulb];
        c[rubik::ulb] = clr[rubik::ubr];
        c[rubik::ubr] = clr[rubik::urf];
        c[rubik::urf] = clr[rubik::ufl];
        c[rubik::fur] = clr[rubik::luf];
        c[rubik::flu] = clr[rubik::lbu];
        c[rubik::luf] = clr[rubik::bul];
        c[rubik::lbu] = clr[rubik::bru];
        c[rubik::bul] = clr[rubik::rub];
        c[rubik::bru] = clr[rubik::rfu];
        c[rubik::rub] = clr[rubik::fur];
        c[rubik::rfu] = clr[rubik::flu];

        return c;
    }

    rubik rubik::L() const
    {
        rubik c{ *this };

        c[rubik::lbu] = clr[rubik::ldb];
        c[rubik::luf] = clr[rubik::lbu];
        c[rubik::lfd] = clr[rubik::luf];
        c[rubik::ldb] = clr[rubik::lfd];
        c[rubik::fdl] = clr[rubik::ufl];
        c[rubik::flu] = clr[rubik::ulb];
        c[rubik::ufl] = clr[rubik::bul];
        c[rubik::ulb] = clr[rubik::bld];
        c[rubik::bul] = clr[rubik::dbl];
        c[rubik::bld] = clr[rubik::dlf];
        c[rubik::dbl] = clr[rubik::fdl];
        c[rubik::dlf] = clr[rubik::flu];

        return c;
    }

    rubik rubik::l() const
    {
        rubik c{ *this };

        c[rubik::ldb] = clr[rubik::lbu];
        c[rubik::lbu] = clr[rubik::luf];
        c[rubik::luf] = clr[rubik::lfd];
        c[rubik::lfd] = clr[rubik::ldb];
        c[rubik::ufl] = clr[rubik::fdl];
        c[rubik::ulb] = clr[rubik::flu];
        c[rubik::bul] = clr[rubik::ufl];
        c[rubik::bld] = clr[rubik::ulb];
        c[rubik::dbl] = clr[rubik::bul];
        c[rubik::dlf] = clr[rubik::bld];
        c[rubik::fdl] = clr[rubik::dbl];
        c[rubik::flu] = clr[rubik::dlf];

        return c;
    }

    rubik rubik::F() const
    {
        rubik c{ *this };

        c[rubik::flu] = clr[rubik::fdl];
        c[rubik::fur] = clr[rubik::flu];
        c[rubik::frd] = clr[rubik::fur];
        c[rubik::fdl] = clr[rubik::frd];
        c[rubik::lfd] = clr[rubik::dfr];
        c[rubik::luf] = clr[rubik::dlf];
        c[rubik::ufl] = clr[rubik::lfd];
        c[rubik::urf] = clr[rubik::luf];
        c[rubik::rfu] = clr[rubik::ufl];
        c[rubik::rdf] = clr[rubik::urf];
        c[rubik::dfr] = clr[rubik::rfu];
        c[rubik::dlf] = clr[rubik::rdf];

        return c;
    }

    rubik rubik::f() const
    {
        rubik c{ *this };

        c[rubik::fdl] = clr[rubik::flu];
        c[rubik::flu] = clr[rubik::fur];
        c[rubik::fur] = clr[rubik::frd];
        c[rubik::frd] = clr[rubik::fdl];
        c[rubik::dfr] = clr[rubik::lfd];
        c[rubik::dlf] = clr[rubik::luf];
        c[rubik::lfd] = clr[rubik::ufl];
        c[rubik::luf] = clr[rubik::urf];
        c[rubik::ufl] = clr[rubik::rfu];
        c[rubik::urf] = clr[rubik::rdf];
        c[rubik::rfu] = clr[rubik::dfr];
        c[rubik::rdf] = clr[rubik::dlf];

        return c;
    }

    rubik rubik::R() const
    {
        rubik c{ *this };

        

        return c;
    }

    rubik rubik::r() const
    {
        rubik c{ *this };

        

        return c;
    }

    rubik rubik::D() const
    {
        rubik c{ *this };



        return c;
    }

    rubik rubik::d() const
    {
        rubik c{ *this };



        return c;
    }

    rubik rubik::B() const
    {
        rubik c{ *this };



        return c;
    }

    rubik rubik::b() const
    {
        rubik c{ *this };



        return c;
    }
}
