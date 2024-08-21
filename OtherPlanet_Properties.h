#pragma once
// this class is use for checking two planet properties and created a report on the bases od there propert.
#include "Earth_Properties.h"
#include "common.h"
class Earth_Properties;

class OtherPlanet_Properties :
    public Earth_Properties
{
    Earth_Properties EObj;// earth planet property object
 
public:

    OtherPlanet_Properties();
    std::vector<std::string> CheckMeasurement();//check the measurement property
    std::vector<std::string> CheckResourceAvailability();//check the resource
    std::vector<std::string> CheckInfrastucture();// check the infreastructure
    std::vector<std::string> CheckElemental();// check the elements
    std::vector<std::string> CheckCriticalHandler();// check the crititacl situation optons
};

