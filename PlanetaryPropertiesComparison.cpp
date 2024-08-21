// sql_c++_try1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// this project is created fro comparing two planets onthe basis of some criteria like esorces ,enviroment 
// etc on the bases of earth .
// in this project we installed the table of plenats properies .
// youcan compare two planeyt and check the reports,
//
#include "Earth_Properties.h"
#include "OtherPlanet_Properties.h"
#include "Download_Earth_Database.h"
#include <cstdlib>
#include<conio.h>
#include"Common.h"
bool Running = true;

void  Print_Introduction()
{
    std::cout << "This aplication is use for Plenertry property comparision" << std::endl;
    std::cout << "in this application we already insalled the Property of two planet which we will compare" << std::endl;
    std::cout << " we are comparing the propertiess of the planet on the basis of followikg criteria " << std::endl;
    std::cout << "1 Measurement criteria to check the report press 1 " << std::endl;
    std::cout << "2 ResourceAvailability criteria to check the report press 2" << std::endl;
    std::cout << "3 CriticalHandler criteria to check the report press 3" << std::endl;
    std::cout << "4 Elemental criteria to check the report press 4" << std::endl;
    std::cout << "5 Infrastructure criteria to check the report press 5 " << std::endl;
    std::cout << "6 Check the all The summmery of the Earth based on criteria" << std::endl;
    std::cout << "7 Check the all The summmery of the other planet based on criteria" << std::endl;
    std::cout << "  exit " << std::endl;
}
int main()
{
    int choice;
    Download_Earth_Database dbobj;
    Earth_Properties ep;
    std::vector<std::string> Planet_Measurement_report;
    std::vector<std::string> Planet_ResourceAvailability_report;
    std::vector<std::string> Planet_CriticalHandler_report;
    std::vector<std::string> Planet_Elemental_report;
    std::vector<std::string> Planet_Infrastructure_report;
    dbobj.connect();
    dbobj.Installing_Planet_table();
    dbobj.Installing_Measurement_Table();
    dbobj.Installing_ResourceAvailability_Table();
    dbobj.Installing_CriticalHandler_Table();
    dbobj.Installing_Elemental_Table();
    dbobj.Installing_Infrastucture_Table();
    OtherPlanet_Properties Planet_Comparater_Obj = dbobj.send_otherplanet_database();
    while (Running)
    {
        system("cls");
        Print_Introduction();
        std::cout << "please enter your choice" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                    
                    if (Planet_Measurement_report.empty())
                    {
                        Planet_Measurement_report = Planet_Comparater_Obj.CheckMeasurement();
                    }

                    system("cls");
                    do{
                        for (auto Measure_analyser : Planet_Measurement_report)
                        {
                            std::cout << Measure_analyser << std::endl;
                        }
                        std::cout << "press Space and enter for exit" << std::endl;

                    } while (getchar() != 32);
                    break;

            case 2:
                    if (Planet_ResourceAvailability_report.empty())
                    {
                        Planet_ResourceAvailability_report = Planet_Comparater_Obj.CheckResourceAvailability();
                    }

                    system("cls");
                    do
                    {
                        for (auto Resource_analyser : Planet_ResourceAvailability_report)
                        {
                            std::cout << Resource_analyser << std::endl;
                        }
                        std::cout << "press Space and enter for exit" << std::endl;
                    } while (getchar() != 32);
                    break;

            case 3:
                    if (Planet_CriticalHandler_report.empty())
                    {
                        Planet_CriticalHandler_report = Planet_Comparater_Obj.CheckCriticalHandler();
                    }

                    system("cls");
                    do {
                        for (auto Critical_analyser : Planet_CriticalHandler_report)
                        {
                            std::cout << Critical_analyser << std::endl;
                        }
                        std::cout << "press Space and enter for exit" << std::endl;
                    } while (getchar() != 32);
                    break;

             case 4:
                    if (Planet_Elemental_report.empty())
                    {
                        Planet_Elemental_report = Planet_Comparater_Obj.CheckElemental();
                    }

                    system("cls");
                    do {
                        for (auto Elemental_analyser : Planet_Elemental_report)
                        {
                            std::cout << Elemental_analyser << std::endl;
                        }
                        std::cout << "press Space and enter for exit" << std::endl;
                    } while (getchar() != 32);
                    break;

             case 5:
                    if (Planet_Infrastructure_report.empty())
                    {
                        Planet_Infrastructure_report = Planet_Comparater_Obj.CheckInfrastucture();
                    }

                    system("cls");
                    do
                    {
                        for (auto infra_analyser : Planet_Infrastructure_report)
                        {
                            std::cout << infra_analyser << std::endl;
                        }
                        std::cout << "press Space and enter for exit" << std::endl;
                    } while (getchar() != 32);
                    break;

             case 6:
                 do {
                     std::cout << "completete report of the earth" << std::endl;
                     ep.GeneratePlanetSummary();
                     std::cout << "press Space and enter for exit" << std::endl;
                 } while (getchar() != 32);
                 break;

             case 7:
                 do {
                     std::cout << "completete report of the planet" << std::endl;
                     Planet_Comparater_Obj.GeneratePlanetSummary();
                     std::cout << "press Space and enter for exit" << std::endl;
                 } while (getchar() != 32);
                 break;

             case 8:
                 Running = false;
                 std::cout << "thank you for visting" << std::endl;
                 break;
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
