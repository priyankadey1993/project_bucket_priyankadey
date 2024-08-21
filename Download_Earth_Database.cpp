#include "Download_Earth_Database.h"

Download_Earth_Database::Download_Earth_Database()
{

}
void Download_Earth_Database::connect()
{
    try
    {
        connector.driver = get_driver_instance();
        connector.con = connector.driver->connect(connector.server, connector. username, connector.password);
        connector.con->setSchema("Planet_Database");

        std::cout << "connected to server " << std::endl;
        //std::cout << "Con" << connector.con << std::endl;
    }
    catch (sql::SQLException& e)
    {
        std::cout << "Could not connect to server. Error message: " << e.what() << std::endl;
        system("pause");
        return;
    }
}
void Download_Earth_Database::Installing_Planet_table()
{
    std::string str = "Planet";
    std::string query1 = "select * from " + str + " where PlanetID = 1;";
    std::string query2 = "select * from " + str + " where PlanetID = 2;";
    std::cout << query1 << std::endl;

    connector.stmt1 = connector.con->createStatement();

    connector.res1 = connector.stmt1->executeQuery(query1.c_str());

    while (connector.res1->next())
    {
        Pro_Obj.PlaObj.PlanetId = connector.res1->getInt("PlanetID");
        Pro_Obj.PlaObj.PlanetName = connector.res1->getString("PlanetName");
    }
    EP_database.ShowDetailsOfPlanet(Pro_Obj.PlaObj);

    connector.stmt2 = connector.con->createStatement();

    connector.res2 = connector.stmt1->executeQuery(query2.c_str());

    while (connector.res2->next())
    {
        Pro_Obj.PlaObj.PlanetId = connector.res2->getInt("PlanetID");
        Pro_Obj.PlaObj.PlanetName = connector.res2->getString("PlanetName");
    }
    OP_database.ShowDetailsOfPlanet(Pro_Obj.PlaObj);
    // EP_database()
    delete connector.stmt1;
    delete connector.res1;
    delete connector.stmt2;
    delete connector.res2;
}

void Download_Earth_Database::Installing_Measurement_Table()
{
    std::string str = "Measurement";
    std::string query1 = "select * from " + str + " where PlanetID = 1;";
    std::string query2 = "select * from " + str + " where PlanetID = 2;";

    connector.stmt1 = connector.con->createStatement();
    connector.res1 = connector.stmt1->executeQuery(query1.c_str());
    while (connector.res1->next())
    {
        Pro_Obj.MeaObj.density = connector.res1->getDouble("Density");
        Pro_Obj.MeaObj.gravity = connector.res1->getDouble("Gravity");
        Pro_Obj.MeaObj.mass = connector.res1->getDouble("Mass");
        Pro_Obj.MeaObj.orbitalPeriod = connector.res1->getInt("OrbitalPeriod");
        Pro_Obj.MeaObj.PlanetId = connector.res1->getInt("PlanetID");
        Pro_Obj.MeaObj.radius = connector.res1->getDouble("Radius");
        Pro_Obj.MeaObj.volume = connector.res1->getDouble("Volume");
    }
    EP_database.SetMeasurement(Pro_Obj.MeaObj);
    connector.stmt2 = connector.con->createStatement();
    connector.res2 = connector.stmt2->executeQuery(query2.c_str());
    while (connector.res2->next())
    {
        Pro_Obj.MeaObj.density = connector.res2->getDouble("Density");
        Pro_Obj.MeaObj.gravity = connector.res2->getDouble("Gravity");
        Pro_Obj.MeaObj.mass = connector.res2->getDouble("Mass");
        Pro_Obj.MeaObj.orbitalPeriod = connector.res2->getInt("OrbitalPeriod");
        Pro_Obj.MeaObj.PlanetId = connector.res2->getInt("PlanetID");
        Pro_Obj.MeaObj.radius = connector.res2->getDouble("Radius");
        Pro_Obj.MeaObj.volume = connector.res2->getDouble("Volume");
    }
    OP_database.SetMeasurement(Pro_Obj.MeaObj);

    delete connector.stmt1;
    delete connector.res1;
    delete connector.stmt2;
    delete connector.res2;
   // delete connector.con;
}

void Download_Earth_Database::Installing_ResourceAvailability_Table()
{
    std::string str = "ResourceAvailability";
    
    std::string query1 = "select * from " + str + " where PlanetID = 1;";
    std::string query2 = "select * from " + str + " where PlanetID = 2;";
   
    connector.stmt1 = connector.con->createStatement();
    connector.res1 = connector.stmt1->executeQuery(query1.c_str());
    while (connector.res1->next())
    {
        Pro_Obj.ResObj.energyResources = connector.res1->getDouble("EnergyResources");
        Pro_Obj.ResObj.mineralResources = connector.res1->getDouble("MineralResources");
        Pro_Obj.ResObj.waterResources = connector.res1->getDouble("WaterResources");
        Pro_Obj.ResObj.foodProductionPotential = connector.res1->getInt("FoodProductionPotential");
        Pro_Obj.ResObj.PlanetId = connector.res1->getInt("PlanetID");
    }
    EP_database.SetResourceAvailability(Pro_Obj.ResObj);
    connector.stmt2 = connector.con->createStatement();
    connector.res2 = connector.stmt2->executeQuery(query2.c_str());
    while (connector.res2->next())
    {
        Pro_Obj.ResObj.energyResources = connector.res2->getDouble("EnergyResources");
        Pro_Obj.ResObj.mineralResources = connector.res2->getDouble("MineralResources");
        Pro_Obj.ResObj.waterResources = connector.res2->getDouble("WaterResources");
        Pro_Obj.ResObj.foodProductionPotential = connector.res2->getInt("FoodProductionPotential");
        Pro_Obj.ResObj.PlanetId = connector.res2->getInt("PlanetID");
    }
    OP_database.SetResourceAvailability(Pro_Obj.ResObj);

    delete connector.stmt1;
    delete connector.res1;
    delete connector.stmt2;
    delete connector.res2;
}

void Download_Earth_Database::Installing_Elemental_Table()
{
    std::string str = "Elemental";
    std::string query1 = "select * from " + str + " where PlanetID = 1;";
    std::string query2 = "select * from " + str + " where PlanetID = 2;";

    connector.stmt1 = connector.con->createStatement();
    connector.res1 = connector.stmt1->executeQuery(query1.c_str());
    while (connector.res1->next())
    {
        Pro_Obj.EleObj.temprature = connector.res1->getDouble("Temperature");
        Pro_Obj.EleObj.pressure = connector.res1->getDouble("Pressure");
        Pro_Obj.EleObj.enviromennt = connector.res1->getString("Environment");
        Pro_Obj.EleObj.oxygen = connector.res1->getDouble("Oxygen");
        Pro_Obj.EleObj.PlanetId = connector.res1->getInt("PlanetID");
        Pro_Obj.EleObj.waterpercentage = connector.res1->getDouble("WaterPercentage");
        Pro_Obj.EleObj.landpercentage = connector.res1->getDouble("LandPercentage");
        Pro_Obj.EleObj.living_things = connector.res1->getInt("LivingThings");
        Pro_Obj.EleObj.radiationLevels = connector.res1->getInt("RadiationLevels");
        Pro_Obj.EleObj.atmosphericComposition = connector.res1->getInt("AtmosphericComposition");
    }
    EP_database.SetElemental(Pro_Obj.EleObj);
    
    connector.stmt2 = connector.con->createStatement();
    connector.res2 = connector.stmt2->executeQuery(query2.c_str());
    while (connector.res2->next())
    {
        Pro_Obj.EleObj.temprature = connector.res2->getDouble("Temperature");
        Pro_Obj.EleObj.pressure = connector.res2->getDouble("Pressure");
        Pro_Obj.EleObj.enviromennt = connector.res2->getString("Environment");
        Pro_Obj.EleObj.oxygen = connector.res2->getDouble("Oxygen");
        Pro_Obj.EleObj.PlanetId = connector.res2->getInt("PlanetID");
        Pro_Obj.EleObj.waterpercentage = connector.res2->getDouble("WaterPercentage");
        Pro_Obj.EleObj.landpercentage = connector.res2->getDouble("LandPercentage");
        Pro_Obj.EleObj.living_things = connector.res2->getInt("LivingThings");
        Pro_Obj.EleObj.radiationLevels = connector.res2->getInt("RadiationLevels");
        Pro_Obj.EleObj.atmosphericComposition = connector.res2->getInt("AtmosphericComposition");
    }
    OP_database.SetElemental(Pro_Obj.EleObj);
    
    delete connector.stmt1;
    delete connector.res1;
    delete connector.stmt2;
    delete connector.res2;
 
}

void Download_Earth_Database::Installing_CriticalHandler_Table()
{
    std::string str = "CriticalHandler";
    std::string query1 = "select * from " + str + " where PlanetID = 1;";
    std::string query2 = "select * from " + str + " where PlanetID = 2;";
    connector.stmt1 = connector.con->createStatement();
    connector.res1 = connector.stmt1->executeQuery(query1.c_str());
    while (connector.res1->next())
    {
        Pro_Obj.CriObj.threatLevel = connector.res1->getDouble("ThreatLevel");
        Pro_Obj.CriObj.securityLevel = connector.res1->getDouble("SecurityLevel");
        Pro_Obj.CriObj.emergencyServices = connector.res1->getInt("EmergencyServices");
        Pro_Obj.CriObj.radiationProtection = connector.res1->getInt("RadiationProtection");
        Pro_Obj.CriObj.PlanetId = connector.res1->getInt("PlanetID");
    }
    EP_database.SetCriticalHandler(Pro_Obj.CriObj);

    connector.stmt2 = connector.con->createStatement();
    connector.res2 = connector.stmt2->executeQuery(query2.c_str());
    while (connector.res2->next())
    {
        Pro_Obj.CriObj.threatLevel = connector.res2->getDouble("ThreatLevel");
        Pro_Obj.CriObj.securityLevel = connector.res2->getDouble("SecurityLevel");
        Pro_Obj.CriObj.emergencyServices = connector.res2->getInt("EmergencyServices");
        Pro_Obj.CriObj.radiationProtection = connector.res2->getInt("RadiationProtection");
        Pro_Obj.CriObj.PlanetId = connector.res2->getInt("PlanetID");
    }
    OP_database.SetCriticalHandler(Pro_Obj.CriObj);

    delete connector.stmt1;
    delete connector.res1;
    delete connector.stmt2;
    delete connector.res2;
   
}

void Download_Earth_Database::Installing_Infrastucture_Table()
{
    std::string str = "Infrastucture";
    std::string query1 = "select * from " + str + " where PlanetID = 1;";
    std::string query2 = "select * from " + str + " where PlanetID = 2;";
    if (connector.con == nullptr)
    {
        std::cout << "Con is null" << std::endl;
        return;
    }
    connector.stmt1 = connector.con->createStatement();
    connector.res1 = connector.stmt1->executeQuery(query1.c_str());
    while (connector.res1->next())
    {
        Pro_Obj.InfObj.habitates = connector.res1->getInt("Habitats");
        Pro_Obj.InfObj.foodSurpportsystem = connector.res1->getInt("FoodSupportSystems");
        Pro_Obj.InfObj.MedicalSupportsyatem= connector.res1->getInt("MedicalSupportSystems");
        Pro_Obj.InfObj.Researchstation= connector.res1->getInt("ResearchStations");
        Pro_Obj.InfObj.TransportVehicle = connector.res1->getInt("TransportVehicles");
        Pro_Obj.InfObj.PlanetId = connector.res1->getInt("PlanetID");
    }
    EP_database.SetInfrastucture(Pro_Obj.InfObj);

    connector.stmt2 = connector.con->createStatement();
    connector.res2 = connector.stmt2->executeQuery(query2.c_str());
    while (connector.res2->next())
    {
        Pro_Obj.InfObj.habitates = connector.res2->getInt("Habitats");
        Pro_Obj.InfObj.foodSurpportsystem = connector.res2->getInt("FoodSupportSystems");
        Pro_Obj.InfObj.MedicalSupportsyatem = connector.res2->getInt("MedicalSupportSystems");
        Pro_Obj.InfObj.Researchstation = connector.res2->getInt("ResearchStations");
        Pro_Obj.InfObj.TransportVehicle = connector.res2->getInt("TransportVehicles");
        Pro_Obj.InfObj.PlanetId = connector.res2->getInt("PlanetID");
    }
    OP_database.SetInfrastucture(Pro_Obj.InfObj);

    delete connector.stmt1;
    delete connector.res1;
    delete connector.stmt2;
    delete connector.res2;

}
OtherPlanet_Properties Download_Earth_Database::send_otherplanet_database()
{
    return OP_database;
}