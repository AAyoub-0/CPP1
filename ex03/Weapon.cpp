/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 01:58:11 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 02:18:30 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("Sword") {}

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

std::string Weapon::getType() { return type; }

void Weapon::setType(std::string type) { this->type = type; }
