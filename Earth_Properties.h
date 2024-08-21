#pragma once
#include "common.h"
struct Planet
{
	int PlanetId;
	std::string PlanetName;
};
// measurement structre use for calculation of geoggrapghy of planet .
struct Measurement
{
	int PlanetId; // planet id
	int radius;
	long volume;
	long mass;
	int orbitalPeriod;
	float gravity;           // Surface gravity in m/s^2
	float surfaceArea;       // Surface area in square kilometers
	float density;
};
// this structure check the resources of the planet
struct ResourceAvailability
{
	int PlanetId;
	float mineralResources;  // Mineral resources available in percentage
	float energyResources;   // Energy resources available in percentage
	float waterResources;    // Water resources available in cubic kilometers
	float foodProductionPotential; // Potential for food production
};
// this structurecheck tinfrasture or any constrution which already we intsalled or not
struct Infrastucture
{
	int PlanetId;
	int habitates;
	int Researchstation;
	int TransportVehicle;
	int MedicalSupportsyatem;
	int foodSurpportsystem;
};
// it check the elemntal propery of the planet
struct Elemental
{
	int PlanetId;
	int64_t temprature;
	float pressure;
	std::string enviromennt;
	float oxygen;
	float waterpercentage;
	float landpercentage;
	float living_things;
	float radiationLevels;
	float atmosphericComposition;
};
//this structure check the important the perscentage of handlineg the deadline or critical situations
struct CriticalHandler
{
	int PlanetId;
	float threatLevel;       // Threat level from natural disasters (1-10)
	float securityLevel;     // Security level for human safety (1-10)
	bool emergencyServices;  // Availability of emergency services (true/false)
	bool radiationProtection; // Radiation protection measures (true/false)
};

class Earth_Properties
{
protected:
	Planet PlaObj;// planet detail object
	Measurement MeaObj;// Measurement detail object
	ResourceAvailability ResObj;// ResourceAvailability detail object
	Infrastucture InfObj;// Infrastucture detail object
	Elemental EleObj;// Elemental detail object
	CriticalHandler CriObj;// 	CriticalHandler  detail object

public:
	Earth_Properties();
	void ShowDetailsOfPlanet(Planet Pobj) ;// set the planet id and name
	//Earth_Properties(Planet Pobj);
	void SetMeasurement(const Measurement& MObj);// set measurement criteria
	void SetResourceAvailability(ResourceAvailability RObj);// set resourcs criteria
	void SetInfrastucture(Infrastucture IObj);// set insftrastrure criteria
	void SetElemental(Elemental EObj);// set elemental criteria
	void SetCriticalHandler(CriticalHandler CObj);// set critetiacl criteria
   
	Measurement GetMeasurement();// get meaurement variable.
	ResourceAvailability GetResourceAvailability();// get resourcs variable.
	Infrastucture GetInfrastucture();// get insftrastrure variable.
	Elemental GetElemental();// get elemental variable.
	CriticalHandler GetCriticalHandler();// get critetiacl variable.
	Planet GetPlanet();// get planet variable.
	void GeneratePlanetSummary();// show the full  report of  planet criteria

};

