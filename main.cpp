#include <fmt/core.h>
#include <utility>
#include <iostream>
#include "fmt/color.h"

class Entity {
    const bool is_player {};
    const int health_max {};
    const int damage {};
    int health {};
public:
    const std::string name {};

    Entity(std::string name, bool is_player, int health, int damage)
        : name(std::move(name)), is_player(is_player), health_max(health), damage(damage), health(health)
    {}
    void attack(Entity* target) const {
        fmt::print("{} attacks {} for {} damage!\n", this->name, target->name, this->damage);
        if ((target->health - this->damage) >= 0) {
            target->health -= this->damage;
        } else {
            target->health = 0;
            fmt::print("{} is defeated!\n", target->name);
        }
    }
    [[nodiscard]] int get_health() const {
        return this->health;
    }
    [[nodiscard]] int get_health_max() const {
        return this->health_max;
    }
};

int main () {
    Entity player("Player", true, 300, 50);
    Entity enemy("Enemy", false, 200, 30);

    player.attack(&enemy);
    fmt::print("{}: {}/{}\n", enemy.name, enemy.get_health(), enemy.get_health_max());
    //fmt::print("{} is located at {} in memory\n", enemy.name, &enemy); // This produces a WEIRD set of linking errors in fmt. I guess it's because of the pointer
    std::cout << enemy.name << " is located at " << std::hex << &enemy << std::dec << " in memory\n";



    //fmt::print(fg(fmt::color::red), "Whats up");

}

