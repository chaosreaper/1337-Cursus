/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:51:10 by hdrabi            #+#    #+#             */
/*   Updated: 2022/05/17 14:40:27 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_
# define _CAT_

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &C);
        Cat &operator=(const Cat &C);
        virtual ~Cat();
        virtual void makeSound() const;
        Brain *getBrain() const;
};

#endif