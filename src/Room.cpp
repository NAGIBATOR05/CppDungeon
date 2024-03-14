//
// Created by kait on 3/11/24.
//
#include "Room.h"
#include "EmptyCell.h"
#include "ChooseRoomEvent.h"
#include "Chest.h"
#include <vector>
#include <vector>
#include <random>

int random(int low, int high)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

void Room::generateEvents(){
    if(random(1,2) == 1) {
        m_events.push_back(std::shared_ptr<Event>(new EmptyCell));
    }else{
        m_events.push_back(std::shared_ptr<Event>(new Chest));
    }
    if(random(1,2) == 1) {
        m_events.push_back(std::shared_ptr<Event>(new EmptyCell));
    }else{
        m_events.push_back(std::shared_ptr<Event>(new Chest));
    }
    m_events.push_back(std::shared_ptr<Event>(new ChooseRoomEvent));
}