#include "OtherPlanet_Properties.h"

OtherPlanet_Properties::OtherPlanet_Properties()
{
	;
}

std::vector<std::string> OtherPlanet_Properties ::CheckMeasurement()//OtherPlanet_Properties& otherplanet_object
{
	std::vector<std::string> Measurement_Report;
	OtherPlanet_Properties OpObj;
	std::cout << "Checking measurements" << std::endl;

	if (OpObj.GetMeasurement().density >= EObj.GetMeasurement().density) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has higher Density (" + std::to_string(this->MeaObj.density) + ") than Earth (" + std::to_string(EObj.GetMeasurement().density) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has lower Density (" + std::to_string(this->MeaObj.density) + ") than Earth (" + std::to_string(EObj.GetMeasurement().density) + ")");
	}
	// Gravity check

	if (this->MeaObj.gravity >= EObj.GetMeasurement().gravity) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has higher gravity (" + std::to_string(this->MeaObj.gravity) + ") than Earth (" + std::to_string(EObj.GetMeasurement().gravity) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has lower gravity (" + std::to_string(this->MeaObj.gravity) + ") than Earth (" + std::to_string(EObj.GetMeasurement().gravity) + ")");
	}

	// Mass check

	if (this->MeaObj.mass >= EObj.GetMeasurement().mass) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has higher mass (" + std::to_string(this->MeaObj.mass) + ") than Earth (" + std::to_string(EObj.GetMeasurement().mass) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has lower mass (" + std::to_string(this->MeaObj.mass) + ") than Earth (" + std::to_string(EObj.GetMeasurement().mass) + ")");
	}

	// Orbital period check

	if (this->MeaObj.orbitalPeriod >= EObj.GetMeasurement().orbitalPeriod) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has longer orbital period (" + std::to_string(this->MeaObj.orbitalPeriod) + ") than Earth (" + std::to_string(EObj.GetMeasurement().orbitalPeriod) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has shorter orbital period (" + std::to_string(this->MeaObj.orbitalPeriod) + ") than Earth (" + std::to_string(EObj.GetMeasurement().orbitalPeriod) + ")");
	}

	// Radius check

	if (this->MeaObj.radius >= EObj.GetMeasurement().radius) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has larger radius (" + std::to_string(this->MeaObj.radius) + ") than Earth (" + std::to_string(EObj.GetMeasurement().radius) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has smaller radius (" + std::to_string(this->MeaObj.radius) + ") than Earth (" + std::to_string(EObj.GetMeasurement().radius) + ")");
	}

	// Surface area check

	if (this->MeaObj.surfaceArea >= EObj.GetMeasurement().surfaceArea) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has larger surface area (" + std::to_string(this->MeaObj.surfaceArea) + ") than Earth (" + std::to_string(EObj.GetMeasurement().surfaceArea) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has smaller surface area (" + std::to_string(this->MeaObj.surfaceArea) + ") than Earth (" + std::to_string(EObj.GetMeasurement().surfaceArea) + ")");
	}
	// Volume check

	if (this->MeaObj.volume >= EObj.GetMeasurement().volume) {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has larger volume (" + std::to_string(this->MeaObj.volume) + ") than Earth (" + std::to_string(EObj.GetMeasurement().volume) + ")");
	}
	else {
		Measurement_Report.push_back(this->PlaObj.PlanetName + " has smaller volume (" + std::to_string(this->MeaObj.volume) + ") than Earth (" + std::to_string(EObj.GetMeasurement().volume) + ")");
	}
	return Measurement_Report;
}

std::vector<std::string> OtherPlanet_Properties::CheckResourceAvailability()
{
	// Energy resource check

	std::vector<std::string> Resource_Report;

	if (this->ResObj.energyResources >= EObj.GetResourceAvailability().energyResources) {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has higher energy resources (" + std::to_string(this->ResObj.energyResources) + "%) than Earth (" + std::to_string(EObj.GetResourceAvailability().energyResources) + "%)");
	}
	else {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has lower energy resources (" + std::to_string(this->ResObj.energyResources) + "%) than Earth (" + std::to_string(EObj.GetResourceAvailability().energyResources) + "%)");
	}

	// Food production potential check

	if (this->ResObj.foodProductionPotential >= EObj.GetResourceAvailability().foodProductionPotential) {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has higher food production potential (" + std::to_string(this->ResObj.foodProductionPotential) + ") than Earth (" + std::to_string(EObj.GetResourceAvailability().foodProductionPotential) + ")");
	}
	else {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has lower food production potential (" + std::to_string(this->ResObj.foodProductionPotential) + ") than Earth (" + std::to_string(EObj.GetResourceAvailability().foodProductionPotential) + ")");
	}

	// Mineral resource check

	if (this->ResObj.mineralResources >= EObj.GetResourceAvailability().mineralResources) {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has higher mineral resources (" + std::to_string(this->ResObj.mineralResources) + "%) than Earth (" + std::to_string(EObj.GetResourceAvailability().mineralResources) + "%)");
	}
	else {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has lower mineral resources (" + std::to_string(this->ResObj.mineralResources) + "%) than Earth (" + std::to_string(EObj.GetResourceAvailability().mineralResources) + "%)");
	}
;

	// Water resource check


	if (this->ResObj.waterResources >= EObj.GetResourceAvailability().waterResources) {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has higher water resources (" + std::to_string(this->ResObj.waterResources) + " km³) than Earth (" + std::to_string(EObj.GetResourceAvailability().waterResources) + " km³)");
	}
	else {
		Resource_Report.push_back(this->PlaObj.PlanetName + " has lower water resources (" + std::to_string(this->ResObj.waterResources) + " km³) than Earth (" + std::to_string(EObj.GetResourceAvailability().waterResources) + " km³)");
	}


	return Resource_Report;

}
std::vector<std::string> OtherPlanet_Properties::CheckInfrastucture()
{
	std::vector<std::string> Infrastructure_Report;

	// Habitats check



	if (this->InfObj.habitates >= EObj.GetInfrastucture().habitates) {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has more habitats (" + std::to_string(this->InfObj.habitates)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().habitates) + ")");
	}
	else {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has fewer habitats (" + std::to_string(this->InfObj.habitates)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().habitates) + ")");
	}


	// Research stations check


	if (this->InfObj.Researchstation >= EObj.GetInfrastucture().Researchstation) {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has more research stations (" + std::to_string(this->InfObj.Researchstation)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().Researchstation) + ")");
	}
	else {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has fewer research stations (" + std::to_string(this->InfObj.Researchstation)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().Researchstation) + ")");
	}



	// Transport vehicles check


	if (this->InfObj.TransportVehicle >= EObj.GetInfrastucture().TransportVehicle) {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has more transport vehicles (" + std::to_string(this->InfObj.TransportVehicle)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().TransportVehicle) + ")");
	}
	else {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has fewer transport vehicles (" + std::to_string(this->InfObj.TransportVehicle) + ") than Earth (" + std::to_string(EObj.GetInfrastucture().TransportVehicle) + ")");
	}


	// Medical support systems check

	std::cout << "Medical support systems check start" << std::endl;

	if (this->InfObj.MedicalSupportsyatem >= EObj.GetInfrastucture().MedicalSupportsyatem) {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has more medical support systems (" + std::to_string(this->InfObj.MedicalSupportsyatem)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().MedicalSupportsyatem) + ")");
	}
	else {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has fewer medical support systems (" + std::to_string(this->InfObj.MedicalSupportsyatem)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().MedicalSupportsyatem) + ")");
	}


	// Food support systems check



	if (this->InfObj.foodSurpportsystem >= EObj.GetInfrastucture().foodSurpportsystem) {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has more food support systems (" + std::to_string(this->InfObj.foodSurpportsystem)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().foodSurpportsystem) + ")");
	}
	else {
		Infrastructure_Report.push_back(this->PlaObj.PlanetName + " has fewer food support systems (" + std::to_string(this->InfObj.foodSurpportsystem)
			+ ") than Earth (" + std::to_string(EObj.GetInfrastucture().foodSurpportsystem) + ")");
	}

	return Infrastructure_Report;
}
std::vector<std::string> OtherPlanet_Properties::CheckElemental()
{
	std::vector<std::string> Elemental_Report;

	// Temperature check

	if (this->EleObj.temprature >= EObj.GetElemental().temprature) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher temperature (" + std::to_string(this->EleObj.temprature) + "°C) than Earth (" + std::to_string(EObj.GetElemental().temprature) + "°C)");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower temperature (" + std::to_string(this->EleObj.temprature) + "°C) than Earth (" + std::to_string(EObj.GetElemental().temprature) + "°C)");
	}

	// Pressure check

	if (this->EleObj.pressure >= EObj.GetElemental().pressure) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher pressure (" + std::to_string(this->EleObj.pressure) + " Pa) than Earth (" + std::to_string(EObj.GetElemental().pressure) + " Pa)");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower pressure (" + std::to_string(this->EleObj.pressure) + " Pa) than Earth (" + std::to_string(EObj.GetElemental().pressure) + " Pa)");
	}

	// Environment check

	Elemental_Report.push_back(this->PlaObj.PlanetName + " environment: " + this->EleObj.enviromennt);


	// Oxygen check


	if (this->EleObj.oxygen >= EObj.GetElemental().oxygen) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher oxygen percentage (" + std::to_string(this->EleObj.oxygen) + "%) than Earth (" + std::to_string(EObj.GetElemental().oxygen) + "%)");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower oxygen percentage (" + std::to_string(this->EleObj.oxygen) + "%) than Earth (" + std::to_string(EObj.GetElemental().oxygen) + "%)");
	}


	// Water percentage check


	if (this->EleObj.waterpercentage >= EObj.GetElemental().waterpercentage) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher water percentage (" + std::to_string(this->EleObj.waterpercentage) + "%) than Earth (" + std::to_string(EObj.GetElemental().waterpercentage) + "%)");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower water percentage (" + std::to_string(this->EleObj.waterpercentage) + "%) than Earth (" + std::to_string(EObj.GetElemental().waterpercentage) + "%)");
	}


	// Land percentage check
;

	if (this->EleObj.landpercentage >= EObj.GetElemental().landpercentage) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher land percentage (" + std::to_string(this->EleObj.landpercentage) + "%) than Earth (" + std::to_string(EObj.GetElemental().landpercentage) + "%)");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower land percentage (" + std::to_string(this->EleObj.landpercentage) + "%) than Earth (" + std::to_string(EObj.GetElemental().landpercentage) + "%)");
	}


	// Living things check



	if (this->EleObj.living_things >= EObj.GetElemental().living_things) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher presence of living things (" + std::to_string(this->EleObj.living_things) + ") than Earth (" + std::to_string(EObj.GetElemental().living_things) + ")");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower presence of living things (" + std::to_string(this->EleObj.living_things) + ") than Earth (" + std::to_string(EObj.GetElemental().living_things) + ")");
	}


	// Radiation levels check


	if (this->EleObj.radiationLevels >= EObj.GetElemental().radiationLevels) {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has higher radiation levels (" + std::to_string(this->EleObj.radiationLevels) + " Sv) than Earth (" + std::to_string(EObj.GetElemental().radiationLevels) + " Sv)");
	}
	else {
		Elemental_Report.push_back(this->PlaObj.PlanetName + " has lower radiation levels (" + std::to_string(this->EleObj.radiationLevels) + " Sv) than Earth (" + std::to_string(EObj.GetElemental().radiationLevels) + " Sv)");
	}
;

	// Atmospheric composition check



	Elemental_Report.push_back(this->PlaObj.PlanetName + " atmospheric composition: " + std::to_string(this->EleObj.atmosphericComposition));


	return Elemental_Report;
}
std::vector<std::string> OtherPlanet_Properties::CheckCriticalHandler()
{
	std::vector<std::string> CriticalHandler_Report;

	// Threat level check



	if (this->CriObj.threatLevel >= EObj.GetCriticalHandler().threatLevel) {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has higher threat level (" + std::to_string(this->CriObj.threatLevel) + ") than Earth (" + std::to_string(EObj.GetCriticalHandler().threatLevel) + ")");
	}
	else {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has lower threat level (" + std::to_string(this->CriObj.threatLevel) + ") than Earth (" + std::to_string(EObj.GetCriticalHandler().threatLevel) + ")");
	}

	// Security level check



	if (this->CriObj.securityLevel >= EObj.GetCriticalHandler().securityLevel) {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has higher security level (" + std::to_string(this->CriObj.securityLevel) + ") than Earth (" + std::to_string(EObj.GetCriticalHandler().securityLevel) + ")");
	}
	else {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has lower security level (" + std::to_string(this->CriObj.securityLevel) + ") than Earth (" + std::to_string(EObj.GetCriticalHandler().securityLevel) + ")");
	}


	// Emergency services check


	if (this->CriObj.emergencyServices == EObj.GetCriticalHandler().emergencyServices) {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has the same availability of emergency services as Earth");
	}
	else {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has different availability of emergency services compared to Earth");
	}


	// Radiation protection check


	if (this->CriObj.radiationProtection == EObj.GetCriticalHandler().radiationProtection) {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has the same radiation protection measures as Earth");
	}
	else {
		CriticalHandler_Report.push_back(this->PlaObj.PlanetName + " has different radiation protection measures compared to Earth");
	}


	return CriticalHandler_Report;
}