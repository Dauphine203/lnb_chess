#include "pieces.hpp"
#include <iostream>

namespace chess
{
	chess_piece::chess_piece(position_type position, color couleur)
		: m_position(position), m_color(couleur)
	{
	}

	chess_piece::~chess_piece()
	{
	}

	bool chess_piece::can_move(const position_type& pos) const = 0
	{
	}

        color chess_piece::get_color() const
	{
		return m_color;
	}

        void chess_piece::move(const position_type& pos)
	{
		m_position = pos;

	}

	const position_type& get_position() const
	{
		return m_position;
	}
}
