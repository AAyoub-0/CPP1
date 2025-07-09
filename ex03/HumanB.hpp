/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 02:11:05 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 02:21:26 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon &weapon);
		std::string getName() const;
		Weapon *getWeapon() const;
};

#endif