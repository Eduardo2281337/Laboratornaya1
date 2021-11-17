#ifndef COMPANY_H
#define COMPANY_H
#include <QString>
#include <QVector>

class Company
{
private:
    QString name_;
    QVector<QString> owners_;
    double income_;
    double area_;
    int numberOfEmployees_;
public:
    Company(QString &name, QVector<QString> &owners, double income = 0, double area = 0, int numOfEmps = 0);
    enum type { Private, Multinational, Government };
    virtual type getCompanyType() = 0;
    virtual double getTaxPerMonth() = 0;
    QString getCompanyName() const { return name_; }
    QVector<QString> getCompanyOwners() const { return owners_; };
    double getIncome() const { return income_; }
    double getArea() const { return area_; }
    int getNumberOfEmployess() const { return numberOfEmployees_; }
    virtual ~Company() {}
};


#endif // COMPANY_H
