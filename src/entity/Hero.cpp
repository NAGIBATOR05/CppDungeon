//
// Created by Амир Кашапов on 18.03.2024.
//
#include "entity/Hero.h"
entity::Hero::Hero(std::string name, std::map<int, int> characteristics,
                   std::set<std::shared_ptr<skillDesigns::Skill>> skills): Entity(name, characteristics, skills) {}