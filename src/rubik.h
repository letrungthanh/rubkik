#pragma once
#include <iterator>
#include <algorithm>
#include <initializer_list>

namespace rbk
{
    class      rubik;
    enum class color;
    enum class twist;

    /// <summary>
    /// rubik color
    /// </summary>
    enum class color
    {
        rgw,
        gwr,
        wrg,
        rwb,
        wbr,
        brw,
        ryg,
        ygr,
        gry,
        rby,
        byr,
        yrb,
        owg,
        wgo,
        gow,
        obw,
        bwo,
        wob,
        ogy,
        gyo,
        yog,
        oyb,
        ybo,
        boy,
    };

    /// <summary>
    /// twist - uppercase = clockwise, lowercase = counter clockwise
    /// Uu UP
    /// Ff Front
    /// Ll Left
    /// Dd Down
    /// Bb Back
    /// Rr Right
    /// </summary>
    enum class twist
    {
        U,
        u,
        R,
        r,
        F,
        f,
        L,
        l,
        B,
        b,
        D,
        d,
    };

    /// <summary>
    /// rubik 2x2x2
    /// </summary>
    class rubik
    {
        color clr[24]{
            color::rgw,
            color::gwr,
            color::wrg,
            color::rwb,
            color::wbr,
            color::brw,
            color::ryg,
            color::ygr,
            color::gry,
            color::rby,
            color::byr,
            color::yrb,
            color::owg,
            color::wgo,
            color::gow,
            color::obw,
            color::bwo,
            color::wob,
            color::ogy,
            color::gyo,
            color::yog,
            color::oyb,
            color::ybo,
            color::boy,
        };

    public:
 //                      *--------|--------*
 //                      * ulb=13 | ubr=17 *
 //                      *--------|--------*
 //                      * ufl= 2 | urf= 4 *
 //    *--------|--------* -------|--------*--------|--------|--------|--------*
 //    * lbu=14 | luf= 1 | flu= 0 | fur= 3 | rfu= 5 | rub=16 | bru=15 | bul=12 *
 //    *--------|--------|--------|--------|--------|--------|--------|--------*
 //    * ldb=19 | lfd= 8 | fdl= 6 | frd= 9 | rdf=10 | rbd=23 | bdr=21 | bld=18 *
 //    *--------|--------* -------|--------*--------|--------|--------|--------*
 //                      * dlf= 7 | dfr=11 *
 //                      *--------|--------*
 //                      * dbl=20 | drb=22 *
 //                      *--------|--------*
        static constexpr int flu =  0;
        static constexpr int luf =  1;
        static constexpr int ufl =  2;
        static constexpr int fur =  3;
        static constexpr int urf =  4;
        static constexpr int rfu =  5;
        static constexpr int fdl =  6;
        static constexpr int dlf =  7;
        static constexpr int lfd =  8;
        static constexpr int frd =  9;
        static constexpr int rdf = 10;
        static constexpr int dfr = 11;
        static constexpr int bul = 12;
        static constexpr int ulb = 13;
        static constexpr int lbu = 14;
        static constexpr int bru = 15;
        static constexpr int rub = 16;
        static constexpr int ubr = 17;
        static constexpr int bld = 18;
        static constexpr int ldb = 19;
        static constexpr int dbl = 20;
        static constexpr int bdr = 21;
        static constexpr int drb = 22;
        static constexpr int rbd = 23;
    
    public:
        auto begin() {
            return std::begin(clr);
        }

        auto end() {
            return std::end(clr);
        }

        auto begin() const {
            return std::begin(clr);
        }

        auto end() const {
            return std::end(clr);
        }

        rubik() = default;
        rubik(rubik const&) = default;

        rubik(std::initializer_list<color>&& input) {
            std::copy_n(std::begin(input), 24, std::begin(clr));
        }

        auto& operator[](int index) {
            return clr[index];
        }

        auto& operator[](int index) const {
            return clr[index];
        }

    public:
        /// <summary>
        /// Up clockwise
        /// </summary>
        rubik U() const;
        /// <summary>
        /// Up counter clockwise
        /// </summary>
        rubik u() const;
        /// <summary>
        /// Left clockwise
        /// </summary>
        rubik L() const;
        /// <summary>
        /// Left counter clockwise
        /// </summary>
        rubik l() const;
        /// <summary>
        /// Front clockwise
        /// </summary>
        rubik F() const;
        /// <summary>
        /// Front counter clockwise
        /// </summary>
        rubik f() const;
        /// <summary>
        /// Right clockwise
        /// </summary>
        rubik R() const;
        /// <summary>
        /// Right counter clockwise
        /// </summary>
        rubik r() const;
        /// <summary>
        /// Back clockwise
        /// </summary>
        rubik B() const;
        /// <summary>
        /// Back counter clockwise
        /// </summary>
        rubik b() const;
        /// <summary>
        /// Down clockwise
        /// </summary>
        rubik D() const;
        /// <summary>
        /// Down counter clockwise
        /// </summary>
        rubik d() const;
    };

    inline bool operator==(rubik const& lhs, rubik const& rhs) {
        return std::equal(std::begin(lhs), std::end(lhs), std::begin(rhs));
    }

    inline bool operator!=(rubik const& lhs, rubik const& rhs) {
        return !(lhs == lhs);
    }
}