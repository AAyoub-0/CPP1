/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 01:44:25 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 01:52:31 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable: " 	<< &str 		<< std::endl;
	std::cout << "The memory address held by stringPTR: " 		<< stringPTR 	<< std ::endl;
	std::cout << "The memory address held by stringREF: " 		<< &stringREF 	<< std::endl;
	
	std::cout << "The value of the string variable: "  			<< str 			<< std::endl;
	std::cout << "The value pointed to by stringPTR: " 			<< *stringPTR 	<< std::endl;
	std::cout << "The value pointed to by stringREF: " 			<< stringREF 	<< std::endl;
	
	return 0;
}