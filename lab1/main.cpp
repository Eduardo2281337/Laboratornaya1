#include <QCoreApplication>
#include <QTextStream>
#include "company.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream out(stdout);
    QVector<QString> ownersm;
    QString name = "Nornikel";
    ownersm.append(QString::fromUtf8("Vladimir Potanin"));

    PrivateCompany pc(name, ownersm, 100000, 40000, 300);
    return 0;
}
