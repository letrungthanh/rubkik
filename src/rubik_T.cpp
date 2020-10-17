#include <gtest/gtest.h>
#include <rubik.h>

namespace rbk
{
    TEST(U, normal) {
        rubik c{
            color::brw, color::rwb, color::wbr,
            color::bwo, color::wob, color::obw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::gwr, color::wrg, color::rgw,
            color::gow, color::owg, color::wgo,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.U(), c);
    }

    TEST(L, normal) {
        rubik c{
            color::wgo, color::gow, color::owg,
            color::rwb, color::wbr, color::brw,
            color::wrg, color::rgw, color::gwr,
            color::rby, color::byr, color::yrb,
            color::yog, color::ogy, color::gyo,
            color::obw, color::bwo, color::wob,
            color::ygr, color::gry, color::ryg,
            color::oyb, color::ybo, color::boy,
        };

        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.L(), c);
    }

    TEST(F, normal) {
        rubik c{
            color::ryg, color::ygr, color::gry,
            color::rgw, color::gwr, color::wrg,
            color::rby, color::byr, color::yrb,
            color::rwb, color::wbr, color::brw,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.F(), c);
    }

    TEST(u, normal) {
        rubik c{
            color::gow, color::owg, color::wgo,
            color::gwr, color::wrg, color::rgw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::bwo, color::wob, color::obw,
            color::brw, color::rwb, color::wbr,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.u(), c);
    }

    TEST(l, normal) {
        rubik c{
            color::ygr, color::gry, color::ryg,
            color::rwb, color::wbr, color::brw,
            color::yog, color::ogy, color::gyo,
            color::rby, color::byr, color::yrb,
            color::wrg, color::rgw, color::gwr,
            color::obw, color::bwo, color::wob,
            color::wgo, color::gow, color::owg,
            color::oyb, color::ybo, color::boy,
        };

        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.l(), c);
    }

    TEST(f, normal) {
        rubik c{
            color::rwb, color::wbr, color::brw,
            color::rby, color::byr, color::yrb,
            color::rgw, color::gwr, color::wrg,
            color::ryg, color::ygr, color::gry,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.f(), c);
    }

    TEST(Uu, normal) {
        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.U().u(), r);
        EXPECT_EQ(r.u().U(), r);
    }

    TEST(Ff, normal) {
        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.F().f(), r);
        EXPECT_EQ(r.f().F(), r);
    }

    TEST(Ll, normal) {
        rubik r{
            color::rgw, color::gwr, color::wrg,
            color::rwb, color::wbr, color::brw,
            color::ryg, color::ygr, color::gry,
            color::rby, color::byr, color::yrb,
            color::owg, color::wgo, color::gow,
            color::obw, color::bwo, color::wob,
            color::ogy, color::gyo, color::yog,
            color::oyb, color::ybo, color::boy,
        };

        EXPECT_EQ(r.L().l(), r);
        EXPECT_EQ(r.l().L(), r);
    }
}