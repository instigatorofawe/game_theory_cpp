#ifndef COMBINATORICS_H
#define COMBINATORICS_H

#include <vector>

template <typename T>
std::vector<std::vector<T>> enumerate_combos(std::vector<T> items, int k)
{
    std::vector<std::vector<T>> result;
    // TODO

    return result;
}

template <typename T>
std::vector<std::vector<T>> enumerate_permutations(std::vector<T> items)
{
    auto n = items.size();
    if (n == 1)
    {
        // std::vector<std::vector<T>> result = {items};
        // return result;
        return {items};
    }

    std::vector<std::vector<T>> result;
    // TODO

    return result;
}

template <typename T>
std::vector<T> combine_vectors(std::vector<T> a, std::vector<T> b)
{
    std::vector<T> result;
    result.reserve(a.size() + b.size());
    result.insert(result.end(), a.begin(), a.end());
    result.insert(result.end(), b.begin(), b.end());
    return result;
}

template <typename T>
std::vector<std::vector<T>> concatenate(std::vector<T> prefix, std::vector<std::vector<T>> postfix)
{
    std::vector<std::vector<T>> result;
    // TODO

    return result;
}

#endif