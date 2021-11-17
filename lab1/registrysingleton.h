#ifndef REGISTRYSINGLETON_H
#define REGISTRYSINGLETON_H
#include "company.h"
#include <QList>

class RegistrySingleton
{
private:
    QList<Company* > companylist_;
    RegistrySingleton(const QList<Company* >& cl) : companylist_(cl) {}
public:
    RegistrySingleton() {}
    RegistrySingleton(RegistrySingleton& other) = delete;
    void operator=(const RegistrySingleton& cr) = delete;
    static RegistrySingleton& getInstance();
    void AddCompany(Company& c);
    Company* getCompanyByIndex(int index) const;
    int getRegistrySize() const;
};


#endif // REGISTRYSINGLETON_H
