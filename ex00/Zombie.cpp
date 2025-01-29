/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiampav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:59:23 by nkiampav          #+#    #+#             */
/*   Updated: 2025/01/29 09:59:24 by nkiampav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Zombie
{
private:
    std::string name;
public:
    Zombie( std::string n) : name(n) {}
    void    announce( void )
    {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ" << std::endl;
    }
};
