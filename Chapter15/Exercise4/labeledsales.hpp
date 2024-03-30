#ifndef LABELEDSALES_HPP
#define LABELEDSALES_HPP

#include "sales.hpp"


class LabeledSales : public Sales
{
public:
    class nbad_index : public Sales::bad_index
    {
    private:
        std::string lbl;
    public:
        nbad_index(const std::string& lb, int ix,
                   const std::string& s = "Index error in LabeledSales object\n");
        const std::string& label_val() const { return lbl; }
        virtual ~nbad_index() throw() {}
    };

    explicit LabeledSales(const std::string& lb = "none", int yy = 0);
    LabeledSales(const std::string& lb, int yy, const double* gr, int n);
    virtual ~LabeledSales() {}
    const std::string& Label() const { return label; }
    virtual double operator[](int i) const;
    virtual double& operator [](int i);
private:
    std::string label;
};

#endif // LABELEDSALES_HPP
