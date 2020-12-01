
namespace chess
{
    class pawn : public chess_piece
    {
    public:

        bool can_move(const position_type& pos) const override;

    };

}
