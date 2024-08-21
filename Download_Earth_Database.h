#pragma once

#include "Earth_Properties.h"
#include"OtherPlanet_Properties.h"
#include"Common.h"
// structure of properties of planet 
struct Properties
{
	Planet PlaObj;
	Measurement MeaObj;
	ResourceAvailability ResObj;
	Infrastucture InfObj;
	Elemental EleObj;
	CriticalHandler CriObj;
};
// structe of connectinal member with sql
struct Connection_Details
{
	const std::string server = "tcp://127.0.0.1:3305"; // or change to 3306 if default
	const std::string username = "root";
	const std::string password = "password";

	sql::Driver* driver;
	sql::Connection* con;
	sql::Statement* stmt1;
	sql::Statement* stmt2;
	sql::PreparedStatement* pstmt;
	sql::ResultSet* res1;
	sql::ResultSet* res2;
};

class Download_Earth_Database
{
	Connection_Details connector;//conneceting obj
    Earth_Properties EP_database;//earth property object
	OtherPlanet_Properties OP_database;//otherplanet prorperty  object
	Properties Pro_Obj;//properties object

public:

	Download_Earth_Database();
	void connect();// connnecting the sql server with a application 
	void Installing_Planet_table();// installing basic detail of planets  from planet table
    void Installing_Measurement_Table();// installing measurements detail of planets  from measurements table
	void Installing_ResourceAvailability_Table();// installing ResourceAvailability detail of planets  from ResourceAvailability table
	void Installing_Elemental_Table();// installing Elemental detail of planets  from Elemental table
	void Installing_CriticalHandler_Table();// installing CriticalHandler detail of planets  from CriticalHandler table
	void Installing_Infrastucture_Table(); // installing infrastructure detail of planets  from infrastructure table
	OtherPlanet_Properties send_otherplanet_database(); // sending otheer planet database to otherplanet object
};

