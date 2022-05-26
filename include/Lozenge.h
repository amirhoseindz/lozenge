#ifndef MAKE_A_LOZENGE_LOZENGE_H
#define MAKE_A_LOZENGE_LOZENGE_H
class Lozenge
{
private :
    int Diagonal;
    void MakeTopHalfLozengeScheme() const;
    void MakeBotHalfLozengeScheme() const;
public:
    Lozenge (int diagonal);
    void MakeLozengeScheme() const;
};
#endif //MAKE_A_LOZENGE_LOZENGE_H
