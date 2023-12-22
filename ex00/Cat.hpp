/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:05:47 by imontero          #+#    #+#             */
/*   Updated: 2023/12/20 10:40:17 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &copy);
		~Cat(void);

		Cat & operator =(Cat const &rhs);

		void		makeSound(void) const;
};





#endif
