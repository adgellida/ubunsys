#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>

/**
 * \class DbManager
 *
 * \brief SQL Database Manager class
 *
 * DbManager sets up the connection with SQL database
 * and performs some basics queries. The class requires
 * existing SQL database. You can create it with sqlite:
 * 1. $ sqlite3 config.db
 * 2. sqilte> CREATE TABLE config(ids integer primary key, name text);
 * 3. sqlite> .quit
 */
class DbManager
{
public:
    /**
     * @brief Constructor
     *
     * Constructor sets up connection with db and opens it
     * @param path - absolute path to db file
     */
    DbManager(const QString& path);

    /**
     * @brief Destructor
     *
     * Close the db connection
     */
    ~DbManager();

    bool isOpen() const;

    /**
     * @brief Creates a new 'config' table if it doesn't already exist
     * @return true - 'config' table created successfully, false - table not created
     */
    bool createTable();

    /**
     * @brief Add name data to db
     * @param name - name to add
     * @return true - name added successfully, false - name not added
     */
    bool addName(const QString& name);
    bool addStatus(const QString& status);
    bool addNameStatus(const QString& name, const QString& status);
    bool updateStatus(const QString& name, const QString& status);
    /**
     * @brief Remove name data from db
     * @param name - name to remove.
     * @return true - name removed successfully, false - name not removed
     */
    bool removeName(const QString& name);

    /**
     * @brief Check if "name" exists in db
     * @param name - name to check.
     * @return true - name exists, false - name does not exist
     */
    bool nameExists(const QString& name) const;
    QString getStatus(const QString& name) const;
    /**
     * @brief Print names in db
     */
    void printAllNames() const;

    /**
     * @brief Remove all names from db
     * @return true - all name removed successfully, false - not removed
     */
    bool removeAllNames();

private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
