#ifndef PIECES_HPP
#define pieces_HPP

#include <string>
#include <vector>

namespace chess
{
using color=char;
  class chess_piece
    {
    public:

        virtual ~chess_piece();

        chess_piece(const chess_piece&) = delete;
        // 4 trucs à faire pour ça , copie, opérateur copie , delete et un autre.

        virtual bool can_move(const position_type& pos) const = 0;

        color get_color() const;

        void move(const position_type& pos);
        const position_type& get_position() const;

    private:

        position_type m_position;
        color m_color;
    }; 
    
     
}

#endif
