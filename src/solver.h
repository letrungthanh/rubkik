#pragma once
#include "rubik.h"
#include <queue>
#include <tuple>
#include <stack>
#include <vector>
#include <unordered_map>

namespace rbk
{
    namespace impl
    {
        /// <summary>
        /// rubik hash number generator
        /// </summary>
        struct hasher
        {
            std::size_t operator()(rubik const& r) const
            {
                return 0;
            }
        };

        /// <summary>
        /// bfs color
        /// </summary>
        enum class color {
            white, gray, black
        };

        /// <summary>
        /// breadth first search
        /// </summary>
        template<class T> auto bfs(T const wis, rubik const& s, rubik const& e)
        {
            using std::vector;
            using std::queue;
            using std::unordered_map;
            using std::tuple;
            using std::stack;
            using std::make_tuple;

            if (s == e)
                return vector<twist>{};

            queue<rubik> Q{};
            unordered_map<rubik, color, hasher> C{};
            unordered_map<rubik, tuple<twist, rubik>, hasher> P{};

            Q.push(s);
            C[s] = color::gray;

            while (!Q.empty())
            {
                auto u = Q.front(); Q.pop();

                for (auto& [w, v] : wis(u))
                {
                    if (C[v] == color::white)
                    {
                        P[v] = make_tuple(w, u);
                        C[v] = color::gray;
                        Q.push(v);

                        if (v == e)
                        {
                            stack<twist> stack{};
                            rubik x{ e };

                            while (P.find(x) != P.end())
                            {
                                auto& [m, n] = P[x];
                                stack.push(m);
                                x = n;
                            }

                            vector<twist> path{};

                            while (!stack.empty())
                            {
                                path.push_back(stack.top()); stack.pop();
                            }

                            return path;
                        }
                    }
                }

                C[u] = color::black;
            }

            return vector<twist>{};
        }
    }

    /// <summary>
    /// solve rubik
    /// </summary>
    template<class T> auto solve(T const wis, rubik const& s, rubik const& e)
    {
        return impl::bfs(wis, s, e);
    }
}