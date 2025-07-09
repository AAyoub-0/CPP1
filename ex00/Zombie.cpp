/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:31:28 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 00:37:24 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed Zombie") {
	std::cout << "Zombie created with default name: " << name << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "Zombie created with name: " << name << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

std::string Zombie::getName() const {
	return name;
}
