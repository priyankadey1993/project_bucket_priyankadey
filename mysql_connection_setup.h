#pragma once
#if 0
#include"Common.h"
using namespace std;

class mysql_connection_setup
{
public:
	const string server = "tcp://127.0.0.1:3305"; // or change to 3306 if default
	const string username = "root";
	const string password = "password";

	sql::Driver* driver;
	sql::Connection* con;
	sql::Statement* stmt;
	sql::PreparedStatement* pstmt;
	sql::ResultSet* res;
	
	void connect();
//	void createTable(string str);
//	void insertTable(string str);
//	void showTable(string str);

};

#endif;