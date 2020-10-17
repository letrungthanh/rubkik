#include <gtest/gtest.h>
#include <rubik.h>
#include <solver.h>

#include <tuple>
#include <vector>

using std::vector;
using std::tuple;

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

    TEST(solve, Uu) {
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

        auto Uu = [](rubik const& x) {
            return vector<tuple<twist, rubik>>{
                { twist::U, x.U() },
                { twist::u, x.u() },
            };
        };

        auto steps{ solve(Uu, r.U(), r) };

        EXPECT_EQ(steps.size(), 1);
        EXPECT_EQ(steps[0], twist::u);
    }

    TEST(solve, uU) {
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

        auto uU = [](rubik const& x) {
            return vector<tuple<twist, rubik>>{
                { twist::U, x.U() },
                { twist::u, x.u() },
            };
        };

        auto steps{ solve(uU, r.u(), r) };

        EXPECT_EQ(steps.size(), 1);
        EXPECT_EQ(steps[0], twist::U);
    }

    TEST(solve, Ll) {
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

        auto Ll = [](rubik const& x) {
            return vector<tuple<twist, rubik>>{
                { twist::L, x.L() },
                { twist::l, x.l() },
            };
        };

        auto steps{ solve(Ll, r.L(), r) };

        EXPECT_EQ(steps.size(), 1);
        EXPECT_EQ(steps[0], twist::l);
    }

    TEST(solve, lL) {
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

        auto lL = [](rubik const& x) {
            return vector<tuple<twist, rubik>>{
                { twist::L, x.L() },
                { twist::l, x.l() },
            };
        };

        auto steps{ solve(lL, r.l(), r) };

        EXPECT_EQ(steps.size(), 1);
        EXPECT_EQ(steps[0], twist::L);
    }

    TEST(solve, Ff) {
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

        auto Ff = [](rubik const& x) {
            return vector<tuple<twist, rubik>>{
                { twist::F, x.F() },
                { twist::f, x.f() },
            };
        };

        auto steps{ solve(Ff, r.F(), r) };

        EXPECT_EQ(steps.size(), 1);
        EXPECT_EQ(steps[0], twist::f);
    }

    TEST(solve, fF) {
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

        auto Ff = [](rubik const& x) {
            return vector<tuple<twist, rubik>>{
                { twist::F, x.F() },
                { twist::f, x.f() },
            };
        };

        auto steps{ solve(Ff, r.f(), r) };

        EXPECT_EQ(steps.size(), 1);
        EXPECT_EQ(steps[0], twist::F);
    }
}