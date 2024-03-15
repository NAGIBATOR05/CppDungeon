//
// Created by Амир Кашапов on 24.02.2024.
//

#ifndef CPPDUNGEON_CHEST_H
#define CPPDUNGEON_CHEST_H
#include "events/UsableEvent.h"
#include "changers/InventoryChanger.h"
class Player;
class Chest:public events::UsableEvent, public changers::InventoryChanger{
    bool m_used = false;
    bool comp(std::set<std::shared_ptr<actions::Action>>::iterator actionIterator);
public:
    void turn(Player *player) override;
    void use(Player *player) override;
    std::vector<std::vector<char>> draw() override;
};
#endif //CPPDUNGEON_CHEST_H
