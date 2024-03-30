#include "labeledsales.hpp"

LabeledSales::nbad_index::nbad_index(const std::string &lb, int ix, const std::string &s) : Sales::bad_index(ix, s)
{
    lbl = lb;
}

LabeledSales::LabeledSales(const std::string &lb, int yy) : Sales(yy)
{
    label = lb;
}

LabeledSales::LabeledSales(const std::string &lb, int yy, const double *gr, int n) : Sales(yy, gr, n)
{
    label = lb;
}

double LabeledSales::operator[](int i) const
{
    if (i < 0 || i >= MONTHS)
        throw nbad_index(Label(), i);
    return Sales::operator[](i);
}

double& LabeledSales::operator[](int i)
{
    if (i < 0 || i >= MONTHS)
        throw nbad_index(Label(), i);
    return Sales::operator[](i);
}
