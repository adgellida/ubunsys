#include <dbmanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

DbManager::DbManager(const QString &path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

DbManager::~DbManager()
{
    if (m_db.isOpen())
    {
        m_db.close();
    }
}

bool DbManager::isOpen() const
{
    return m_db.isOpen();
}

bool DbManager::createTable()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE config(id INTEGER PRIMARY KEY, name TEXT, status TEXT);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'config': one might already exist.";
        success = false;
    }

    return success;
}

bool DbManager::addName(const QString& name)
{
    bool success = false;

    if (!name.isEmpty())
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO config (name) VALUES (:name)");
        queryAdd.bindValue(":name", name);

        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add name failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add name failed: name cannot be empty";
    }

    return success;
}

bool DbManager::addStatus(const QString& status)
{
    bool success = false;

    if (!status.isEmpty())
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO config (status) VALUES (:status)");

        queryAdd.bindValue(":status", status);

        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add status failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add status failed: status cannot be empty";
    }

    return success;
}

QString DbManager::getStatus(const QString& name) const
{
    //bool exists = false;

    QString status;

    QSqlQuery query;
    query.prepare("SELECT status FROM config WHERE name = (:name)");

    query.bindValue(":name", name);
    //query.bindValue(":status", status);

    if (query.exec())
    {
        while (query.next())
        {
            status = query.value(0).toString();
            //int salary = query.value(1).toInt();
            qDebug() << "El valor real es " + status;
            //Debug() << name << salary;
        }
    }
    else
    {
        qDebug() << "No existe noooo:";
    }

    //return exists;

    return status;
}

bool DbManager::updateStatus(const QString& name, const QString& status)
{
    bool success = false;

    if (!name.isEmpty() && !status.isEmpty())
    {
        QSqlQuery queryAdd;

        queryAdd.prepare("UPDATE config SET status = (:status) WHERE name = (:name)");

        queryAdd.bindValue(":name", name);
        queryAdd.bindValue(":status", status);

        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add status failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add status failed: status cannot be empty";
    }

    return success;
}

bool DbManager::addNameStatus(const QString& name, const QString& status)
{
    bool success = false;

    if (!name.isEmpty() && !status.isEmpty())
    {
        QSqlQuery queryAdd;

        //queryAdd.prepare("INSERT INTO config (status) VALUES (:status)");

        queryAdd.prepare("INSERT INTO config (name, status) VALUES (:name, :status)");

        //queryAdd.prepare("INSERT INTO config (name, status) VALUES ('textEditor', 'nano')");

        //queryAdd.prepare("UPDATE config SET status = 'Disabled' WHERE name = 'firewall'");

        queryAdd.bindValue(":name", name);
        queryAdd.bindValue(":status", status);

        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add NameStatus failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add NameStatus failed: status cannot be empty";
    }

    return success;
}

bool DbManager::removeName(const QString& name)
{
    bool success = false;

    if (nameExists(name))
    {
        QSqlQuery queryDelete;
        queryDelete.prepare("DELETE FROM config WHERE name = (:name)");
        queryDelete.bindValue(":name", name);
        success = queryDelete.exec();

        if(!success)
        {
            qDebug() << "remove name failed: " << queryDelete.lastError();
        }
    }
    else
    {
        qDebug() << "remove name failed: name doesnt exist";
    }

    return success;
}

void DbManager::printAllNames() const
{
    qDebug() << "Names in db:";
    QSqlQuery query("SELECT * FROM config");
    int idName = query.record().indexOf("name");
    while (query.next())
    {
        QString name = query.value(idName).toString();
        qDebug() << "===" << name;
    }
}

bool DbManager::nameExists(const QString& name) const
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT name FROM config WHERE name = (:name)");
    checkQuery.bindValue(":name", name);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }
    else
    {
        qDebug() << "name exists failed: " << checkQuery.lastError();
    }

    return exists;
}

bool DbManager::removeAllNames()
{
    bool success = false;

    QSqlQuery removeQuery;
    removeQuery.prepare("DELETE FROM config");

    if (removeQuery.exec())
    {
        success = true;
    }
    else
    {
        qDebug() << "remove all names failed: " << removeQuery.lastError();
    }

    return success;
}
