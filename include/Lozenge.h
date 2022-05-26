#ifndef MAKE_A_LOZENGE_LOZENGE_H
#define MAKE_A_LOZENGE_LOZENGE_H
class Lozenge
{
public :
    int Diagonal;
private :
    void MakeTopHalfLozengeScheme() const;
    void MakeBotHalfLozengeScheme() const;
public:
    void MakeLozengeScheme() const;
};
#endif //MAKE_A_LOZENGE_LOZENGE_H
