/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:53:57 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 01:12:18 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		Zombie(const std::string& name);
		~Zombie();
		void announce() const;
		Zombie* zombieHorde(int N, std::string name);
		void setName(const std::string& newName);
};

#endif