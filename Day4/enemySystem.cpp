#include <iostream>
#include <vector>
#include <string>

// Enemy entity (like a game object)
struct Enemy {
    std::string name;
    int health;
};

// Print all enemies in the level
void printEnemies(const std::vector<Enemy>& enemies) {
    if (enemies.empty()) {
        std::cout << "No enemies remaining in the level!\n";
        return;
    }

    std::cout << "Enemies in level:\n";
    for (const Enemy& e : enemies) {
        std::cout << "- " << e.name << " (HP: " << e.health << ")\n";
    }
}

// Spawn an enemy into the vector
void spawnEnemy(std::vector<Enemy>& enemies, const std::string& name, int hp) {
    enemies.push_back({name, hp});
}

// Remove an enemy by name (realistic gameplay system)
void removeEnemyByName(std::vector<Enemy>& enemies, const std::string& name) {
    for (size_t i = 0; i < enemies.size(); i++) {
        if (enemies[i].name == name) {
            enemies.erase(enemies.begin() + i);
            std::cout << name << " removed from the level!\n";
            return;
        }
    }

    std::cout << name << " not found in the enemy list.\n";
}

int main() {

    std::vector<Enemy> enemies;

    // Step 1: Spawn enemies
    spawnEnemy(enemies, "Goblin", 100);
    spawnEnemy(enemies, "Orc", 80);
    spawnEnemy(enemies, "Dragon", 180);

    // Step 2: Print all enemies
    printEnemies(enemies);

    // Step 3: Simulate defeating Orc
    std::cout << "\nOrc defeated! Removing...\n";
    removeEnemyByName(enemies, "Orc");

    // Step 4: Print remaining enemies
    std::cout << "\nAfter removal:\n";
    printEnemies(enemies);

    return 0;
}
