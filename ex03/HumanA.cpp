/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 02:10:07 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 02:21:51 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon) {
	this->weapon = weapon;
}

std::string HumanA::getName() const {
	return name;
}

Weapon &HumanA::getWeapon() const {
	return weapon;
}
