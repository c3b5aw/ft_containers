/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_iterator.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c3b5aw <dev@c3b5aw.dev>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 07:44:49 by c3b5aw            #+#    #+#             */
/*   Updated: 2021/12/28 17:13:21 by c3b5aw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_RB_ITERATOR_HPP_
#define TREE_RB_ITERATOR_HPP_

namespace ft {

#include "rb_node.hpp"

template <class T>
class rb_tree_iterator {
 public:
	typedef rb_node<T> &reference;
	typedef rb_node<T> *pointer;

 private:
	pointer	_root;
	pointer	_base;

 public:
	rb_tree_iterator()
		:	_root(NULL), _base(NULL) {}
	rb_tree_iterator(pointer root, pointer node)
		:	_root(root), _base(node) {}

	rb_tree_iterator(const rb_tree_iterator& other)
		:	_root(other._root),
			_base(other._base) {}

	rb_tree_iterator &operator=(const rb_tree_iterator& rhs) {
		if (this != &rhs) {
			_root = rhs._root;
			_base = rhs._base;
		}
		return *this;
	}

	~rb_tree_iterator() {}

	/* const_iterator cast support */
	operator rb_tree_iterator<T const>() const {
		return rb_tree_iterator<T const>(_root, _base);
	}

	bool	operator== (const rb_tree_iterator& rhs) const {
		return _base == rhs._base;
	}
	bool	operator!= (const rb_tree_iterator& rhs) const {
		return _base != rhs._base;
	}

	reference	operator*		() const {
		return _base->value;
	}

	pointer		operator->	() const {
		return &_base->value;
	}

	rb_tree_iterator&	operator++ () {
		if (_base)
			_base = _base->next();
		return *this;
	}
	rb_tree_iterator	operator++ (int) {
		rb_tree_iterator tmp(*this);
		++(*this);
		return tmp;
	}

	rb_tree_iterator&	operator-- () {
		if (_base)
			_base = _base->prev();
		else
			_base = rb_node<T>::max_leaf(_root);
		return *this;
	}
	rb_tree_iterator	operator-- (int) {
		rb_tree_iterator tmp(*this);
		--(*this);
		return tmp;
	}

	pointer get_base() const {
		return _base;
	}
};

}  // namespace ft

#endif  // TREE_RB_ITERATOR_HPP_
