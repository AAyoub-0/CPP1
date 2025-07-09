/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:53:28 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 01:23:02 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("Horde Master");
	zombie.announce();
	int N = 5;
	std::string name = "Zombie of the Horde";

	Zombie* horde = zombie.zombieHorde(N, name);
	
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}

	delete[] horde;

	return 0;
}