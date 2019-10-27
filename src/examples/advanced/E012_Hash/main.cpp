/**
 * Hashing example
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_set>

struct Person
{
    std::string first_name;
    std::string last_name;
};

bool operator==(const Person& lhs, const Person& rhs)
{
    return lhs.first_name == rhs.first_name && lhs.last_name == rhs.last_name;
}

struct MyHash
{
    std::size_t operator()(Person const& p) const noexcept
    {
        std::size_t fst = std::hash<std::string> { }(p.first_name);
        std::size_t snd = std::hash<std::string> { }(p.last_name);
        return fst ^ (snd * 2);
    }
};

namespace std
{
#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCInconsistentNamingInspection"
template <>
struct hash<Person>
{
    std::size_t operator()(Person const& p) const noexcept
    {
        std::size_t fst = std::hash<std::string> { }(p.first_name);
        std::size_t snd = std::hash<std::string> { }(p.last_name);
        return fst ^ (snd * 2);
    }
};
#pragma clang diagnostic pop
}

int main()
{
    std::string str = "String value";
    std::size_t str_hash = std::hash<std::string> { }(str);
    std::cout << std::quoted(str) << " : " << str_hash << '\n';

    Person p = { "Abraham", "Lincoln" };
    std::cout << "{ first_name: " << std::quoted(p.first_name) << ", last_name: " << std::quoted(p.last_name)
              << "}: " << MyHash { }(p) << " | " << std::hash<Person> { }(p) << '\n';

    std::unordered_set<Person> persons = { p, { "Mustafa", "Ataturk" }, { "Mahatma", "Gandhi" } };
    for (auto& person : persons)
    {
        std::cout << "{ first_name: " << std::quoted(person.first_name) << ", last_name: "
                  << std::quoted(person.last_name)
                  << "}\n";
    }

    return 0;
}
