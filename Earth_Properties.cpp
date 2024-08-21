#include "Earth_Properties.h"


Earth_Properties::Earth_Properties()
{
	// Constructor created 
}

void Earth_Properties::ShowDetailsOfPlanet(Planet Pobj)
{
	PlaObj.PlanetId = Pobj.PlanetId;
	PlaObj.PlanetName = Pobj.PlanetName;
}
#if 0
Earth_Properties::Earth_Properties(Planet Pobj)
{
	PlaObj.PlanetId = Pobj.PlanetId;
	PlaObj.PlanetName = Pobj.PlanetName;
}
#endif
void Earth_Properties::SetMeasurement(const Measurement& MObj )
{
	MeaObj = MObj;
	
}
void Earth_Properties::SetResourceAvailability(ResourceAvailability RObj)
{
	ResObj = RObj;
	
}
void Earth_Properties::SetInfrastucture(Infrastucture IObj)
{
	InfObj = IObj;
	
	
}
void Earth_Properties::SetElemental(Elemental EObj)
{
	EleObj = EObj;
	
}
void Earth_Properties::SetCriticalHandler(CriticalHandler CObj)
{
	CriObj = CObj;
	
}

Measurement  Earth_Properties::GetMeasurement()
{
	return MeaObj;
}
ResourceAvailability Earth_Properties::GetResourceAvailability()
{
	return ResObj;
}

Infrastucture Earth_Properties::GetInfrastucture()
{
	return InfObj;
}
Elemental Earth_Properties::GetElemental()
{
	return EleObj;
}
CriticalHandler Earth_Properties::GetCriticalHandler()
{
	return CriObj;
}

Planet Earth_Properties::GetPlanet()
{
	return PlaObj;
}

void Earth_Properties::GeneratePlanetSummary()
{
	std::cout << " Planet: " << PlaObj.PlanetName << " Description " << std::endl;
	std::cout << " Planet name :" << PlaObj.PlanetName << std::endl;
	std::cout << " Planet id : " << PlaObj.PlanetId << std::endl;
	std::cout << std::endl;

	std::cout << "Planet: " << PlaObj.PlanetName << " Measurement Description" << std::endl;
	std::cout << "  density : " << MeaObj.density << std::endl;
	std::cout << "  gravity : " << MeaObj.gravity << std::endl;
	std::cout << "  mass : " << MeaObj.mass << std::endl;
	std::cout << "  orbitalPeriod : " << MeaObj.orbitalPeriod << std::endl;
	std::cout << "  PlanetId : " << MeaObj.PlanetId << std::endl;
	std::cout << "  radius : " << MeaObj.radius << std::endl;
	std::cout << "  surfaceArea : " << MeaObj.surfaceArea << std::endl;
	std::cout << "  volume : " << MeaObj.volume << std::endl;
	std::cout << std::endl;

	std::cout << "Planet: " << PlaObj.PlanetName << " ResourceAvailability Description" << std::endl;
	std::cout << "  energyResources : " << ResObj.energyResources << std::endl;
	std::cout << "  foodProductionPotential : " << ResObj.foodProductionPotential << std::endl;
	std::cout << "  mineralResources : " << ResObj.mineralResources << std::endl;
	std::cout << "  waterResources : " << ResObj.waterResources << std::endl;
	std::cout << "  PlanetId : " << ResObj.PlanetId << std::endl;
	std::cout << std::endl;


	std::cout << "Planet: " << PlaObj.PlanetName << " Infrastucture Description" << std::endl;
	std::cout << "  foodSurpportsystem : " << InfObj.foodSurpportsystem << std::endl;
	std::cout << "  habitates : " << InfObj.habitates << std::endl;
	std::cout << "  MedicalSupportsyatem : " << InfObj.MedicalSupportsyatem << std::endl;
	std::cout << "  Researchstation : " << InfObj.Researchstation << std::endl;
	std::cout << "  TransportVehicle : " << InfObj.TransportVehicle << std::endl;
	std::cout << "  PlanetId : " << InfObj.PlanetId << std::endl;
	std::cout << std::endl;

	std::cout << "Planet: " << PlaObj.PlanetName << " Elemental Description" << std::endl;

	std::cout << "  atmosphericComposition : " << EleObj.atmosphericComposition << std::endl;
	std::cout << "  enviromennt : " << EleObj.enviromennt << std::endl;
	std::cout << "  landpercentage : " << EleObj.landpercentage << std::endl;
	std::cout << "  living_things : " << EleObj.living_things << std::endl;
	std::cout << "  oxygen : " << EleObj.oxygen << std::endl;
	std::cout << "  pressure : " << EleObj.pressure << std::endl;
	std::cout << "  radiationLevels : " << EleObj.radiationLevels << std::endl;
	std::cout << "  temprature : " << EleObj.temprature << std::endl;
	std::cout << "  waterpercentage : " << EleObj.waterpercentage << std::endl;
	std::cout << "  PlanetId : " << EleObj.PlanetId << std::endl;
	std::cout << std::endl;

	std::cout << "Planet: " << PlaObj.PlanetName << " CriticalHandler Description" << std::endl;

	std::cout << "  emergencyServices : " << CriObj.emergencyServices << std::endl;
	std::cout << "  radiationProtection : " << CriObj.radiationProtection << std::endl;
	std::cout << "  securityLevel : " << CriObj.securityLevel << std::endl;
	std::cout << "  threatLevel : " << CriObj.threatLevel << std::endl;
	std::cout << "  PlanetId : " << CriObj.PlanetId << std::endl;
	std::cout << std::endl;
}