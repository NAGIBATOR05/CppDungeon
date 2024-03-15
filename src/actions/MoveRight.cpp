//
// Created by kait on 3/12/24.
//
#include "actions/MoveRight.h"
#include "navigation/Map.h"
#include "player/Player.h"

namespace actions {

    void MoveRight::act(Player *player) {
        setPosition(player, player -> getMap() -> moveRight(player->getPosition()));
        Cell * temp = player->getMap()->getCell(player->getPosition());
        temp->generateEvents();
        for(int i = 0; i < temp->getEvents().size(); i++) {
            temp->getEvents()[i]->turn(player, i);
        }
        returnToDefault(player);
    }
}//namespace actions