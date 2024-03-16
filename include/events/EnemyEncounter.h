//
// Created by Амир Кашапов on 24.02.2024.
//

#ifndef UNTITLED_ENEMYENCOUNTER_H
#define UNTITLED_ENEMYENCOUNTER_H
#include "entity/Entity.h"
#include "events/Event.h"
#include <vector>
class Enemy;
class Player;
namespace events {
    class EnemyEncounter : public Event {
    public:
        EnemyEncounter();

        void turn(Player *) override;

        std::vector<std::shared_ptr<entity::Entity>> getEnemies();

        std::vector<std::vector<char>> draw() override;

    private:
        void _enemyMove(Player *, std::shared_ptr<entity::Entity>);

        int _start_enemies;
        int _start_heroes;
        std::vector<std::shared_ptr<entity::Entity>> _enemies;
        std::vector<int> _priority;
    };
} // namespace events
#endif //UNTITLED_ENEMYENCOUNTER_H
