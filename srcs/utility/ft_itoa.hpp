/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c3b5aw <dev@c3b5aw.dev>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:53:44 by c3b5aw            #+#    #+#             */
/*   Updated: 2021/11/12 03:44:50 by c3b5aw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Convert interer to string

	Used by:
		- vector.hpp
*/

#ifndef UTILITY_FT_ITOA_HPP_
#define UTILITY_FT_ITOA_HPP_

#include <string>
#include <sstream>

template <typename T>
std::string ft_itoa(T n) {
	std::stringstream ss;

	ss << n;
	return ss.str();
}

#endif  // UTILITY_FT_ITOA_HPP_
