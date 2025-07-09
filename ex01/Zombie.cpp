/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 01:01:14 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 01:12:29 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed Zombie") {}

Zombie::Zombie(const std::string& name) : name(name) {
	std::cout << name << " is created." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& newName) {
	name = newName;
}
