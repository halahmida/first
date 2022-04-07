#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("familles");
db.setUserName("hale");//inserer nom de l'utilisateur
db.setPassword("hale");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
