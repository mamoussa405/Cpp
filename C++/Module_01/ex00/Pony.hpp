/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:52:10 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/13 10:38:27 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_H
# define _PONY_H
# include <iostream>
class Pony{
    private:
        unsigned int            _weight;
        unsigned int            _heigth;
        std::string const       _color;
        std::string const       _type;
    public:
        Pony(void);
        Pony(unsigned int, unsigned int, std::string const, std::string const);
        ~Pony();
        void getProperties(void) const;
};
void ponyOnTheStack();
void ponyOnTheHeap();
#endif
