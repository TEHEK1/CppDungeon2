//
// Created by artem on 08.03.2024.
//
#include "Player.h"
#include "Monitor.h"
#include "Position.h"
#include "Inventory.h"
#include "Action.h"
#include "Entity.h"
#include <memory>

std::vector<std::shared_ptr<Entity>> Player::getHeroes() {
    return m_heroes;
}

Monitor* Player::getMonitor() {
    return m_monitor;
}

Position Player::getPosition() {
    return m_position;
}

std::shared_ptr<Squad> Player::getSquad() {
    return m_squad;
}

Inventory Player::getInventory() {
    return m_inventory;
}

Map* Player::getMap() {
    return m_map;
}