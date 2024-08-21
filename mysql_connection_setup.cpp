#include "mysql_connection_setup.h"
#if 0
void mysql_connection_setup::connect()
{

    try
    {
        driver = get_driver_instance();
        con = driver->connect(server, username, password);
        con->setSchema("Planet_Database");
        
        cout << "connected to server " << endl;
        cout << "Con" << con << endl;
    }
    catch (sql::SQLException& e)
    {
        cout << "Could not connect to server. Error message: " << e.what() << endl;
        system("pause");
        return;
    }
}


void mysql_connection_setup::createTable(string str)
{
    
   
    std::string value1 = "serial PRIMARY KEY";
    std::string value2 = "VARCHAR(50)";
    std::string value3 = "DOUBLE PRECISION";
    std::string value4 = "INTEGER";


    std::string Dropstr = "DROP TABLE IF EXISTS " + str;
    std::string Createstr = "CREATE TABLE " + str + " ("
        + "itemid " + value1 + ", "
        + "itemName " + value2 + ", "
        + "price " + value3 + ", "
        + "qty " + value4 + ");";
    try {
        stmt = con->createStatement();
        stmt->execute(Dropstr.c_str());
        cout << "Finished dropping table (if existed)" << endl;
        stmt->execute(Createstr.c_str());
        cout << "Finished creating table" << endl;
        delete stmt;
    }
    catch (sql::SQLException& e)
    {
        cout << "SQL error: in Create Table" << e.what() << endl;
        delete con;
        system("pause");
        return ;
    }
}

void mysql_connection_setup::insertTable(string str)
{
    string insertstr = "INSERT INTO " + str + "(itemName, price,qty) VALUES(?, ?,?)";

    try {
        pstmt = con->prepareStatement(insertstr.c_str());
        while (1)
        {
            string name;
            int price;
            int qty;
            cout << "enter the item name" << endl;
            cin >> name;
            cout << "marks" << endl;
            cin >> price;
            cout << "qty" << endl;
            cin >> qty;
            pstmt->setString(1, name);
            pstmt->setInt(2, price);
            pstmt->setInt(3, qty);
            pstmt->execute();
            cout << " row inserted." << endl;

            char ch;
            cout << "if you completed your data insertion type y" << endl;
            cin >> ch;
            if (ch == 'y')
            {
                delete pstmt;break;
            }
        }
       // delete con;
    }
    catch (sql::SQLException& e)
    {
        cout << "SQL error: " << e.what() << endl;
        delete con;
        system("pause");
        return ;
    }
    
}

void mysql_connection_setup::showTable(string str)
{
    string showstr = "select * from " +str+";";
    stmt = con->createStatement();
    
    res = stmt->executeQuery(showstr.c_str());
    while (res->next())
    {
       int id = res->getInt("itemid");
        string name = res->getString("itemName");
        int price = res->getInt("price");
        int qty = res->getInt("qty");

        cout   << "ID: " << id <<", Name: " << name <<" ,price "<< price << ", qty: " << qty << endl;

    }
    delete stmt;
    delete res;
    delete con;
}
#endif