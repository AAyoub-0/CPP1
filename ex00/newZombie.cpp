/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:37:26 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 00:50:31 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
	std::cout << "Zombie " << name << " ate a brain!" << std::endl;
	Zombie* newZombie = new Zombie(name);
	return newZombie;
}
