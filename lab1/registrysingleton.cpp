#include "registrysingleton.h"


RegistrySingleton& RegistrySingleton::getInstance(const QList<Company* >& cl)
{
    static RegistrySingleton instance;
    return instance;
}

void RegistrySingleton::AddCompany(Company& c)
{
    companylist_.append(&c);
}

Company* RegistrySingleton::getCompanyByIndex(int index) const
{
    return companylist_.at(index);
}

int RegistrySingleton::getRegistrySize() const
{
    return companylist_.size();
}
