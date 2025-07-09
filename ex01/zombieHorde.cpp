/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 01:05:57 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 01:13:56 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];
	std::cout << "Creating a horde of " << N << " zombies named '" << name << "'." << std::endl;
	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
	}
	return horde;
}
