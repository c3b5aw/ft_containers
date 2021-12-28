/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c3b5aw <dev@c3b5aw.dev>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:40:17 by c3b5aw            #+#    #+#             */
/*   Updated: 2021/12/28 13:32:51 by c3b5aw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_PAIR_HPP_
#define UTILITY_PAIR_HPP_

namespace ft {
template<
    class T1,
    class T2
> struct pair;

template <typename A, typename B>
pair<A, B> make_pair(const A &a, const B &b) {
	return pair<A, B>(a, b);
}

}  // namespace ft

#endif  // UTILITY_PAIR_HPP_
