/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:37:44 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 00:44:35 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie zombie1("Zombie1");
	zombie1.announce();
	
	Zombie* zombie2 = zombie1.newZombie("Zombie2");
	if (zombie2) {
		zombie2->announce();
		delete zombie2;
	}
	zombie1.randomChump("Zombie3");
	
	return 0;
}