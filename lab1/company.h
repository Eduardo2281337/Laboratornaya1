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
    enum type { Private, Government,  Public };
    virtual type getCompanyType() = 0;
    virtual double getTaxPerMonth() = 0;
    QString getCompanyName() const { return name_; }
    QVector<QString> getCompanyOwners() const { return owners_; };
    double getIncome() const { return income_; }
    double getArea() const { return area_; }
    int getNumberOfEmployess() const { return numberOfEmployees_; }
    virtual ~Company() {}
};

class PrivateCompany : public Company
{
public:
    PrivateCompany(QString &name, QVector<QString> &owners,
                   double income = 0, double area = 0, int numberOfEmployees = 0);
    type getCompanyType();
    double getTaxPerMonth();
};

class GovernmentCompany : public Company
{
public:
    GovernmentCompany(QString &name, QVector<QString> &owners,
                     double income = 0, double area = 0, int numberOfEmployees = 0);
    type getCompanyType();
    double getTaxPerMonth();
};

class PublicCompany : public Company
{
public:
    PublicCompany(QString &name, QVector<QString> &owners,
                   double income = 0, double area = 0, int numberOfEmployees = 0);
    type getCompanyType();
    double getTaxPerMonth();
};




#endif // COMPANY_H
