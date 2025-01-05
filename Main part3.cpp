class TrafficManagementSystem
{
private:
    vector<Vehicle> vehicles;
    vector<TrafficBooth> booths;
    EmergencyInfo emergencyInfo;

public:
    void addVehicle()
    {
        string regNum, owner;
        cout << "Enter Registration Number: ";
        cin >> regNum;
        cin.ignore();
        cout << "Enter Owner Name: ";
        getline(cin, owner);
        vehicles.emplace_back(regNum, owner);
        cout << "Vehicle added successfully." << endl;
    }

    void recordViolation()
    {
        string regNum, violation;
        cout << "Enter Vehicle Registration Number: ";
        cin >> regNum;
        cin.ignore();
        cout << "Enter Violation: ";
        getline(cin, violation);

        for (auto& vehicle : vehicles)
        {
            if (vehicle.registrationNumber == regNum)
            {
                vehicle.addViolation(violation);
                cout << "Violation recorded successfully." << endl;
                return;
            }
        }
        cout << "Vehicle not found." << endl;
    }

    void searchVehicle()
    {
        string query;
        cout << "Enter Registration Number or Owner Name: ";
        getline(cin, query);

        if (vehicles.empty())
        {
            cout << "No vehicles registered yet." << endl;
            return;
        }

        for (const auto& vehicle : vehicles)
        {
            if (vehicle.registrationNumber == query || vehicle.ownerName == query)
            {
                vehicle.displayDetails();
                return;
            }
        }
        cout << "Vehicle not found." << endl;
    }

    void addTrafficBooth()
    {
        string location;
        cout << "Enter Booth Location: ";
        getline(cin, location);
        booths.emplace_back(location);
        cout << "Traffic booth added successfully." << endl;
    }

    void simulateBoothEntry()
    {
        string location;
        cout << "Enter Booth Location: ";
        getline(cin, location);

        for (auto& booth : booths)
        {
            if (booth.location == location)
            {
                booth.vehicleEntry();
                cout << "Vehicle entry recorded at " << location << endl;
                return;
            }
        }
        cout << "Booth not found." << endl;
    }

    void simulateBoothExit()
    {
        string location;
        cout << "Enter Booth Location: ";
        getline(cin, location);

        for (auto& booth : booths)
        {
            if (booth.location == location)
            {
                booth.vehicleExit();
                cout << "Vehicle exit recorded at " << location << endl;
                return;
            }
        }
        cout << "Booth not found." << endl;
    }

    void displayEmergencyInfo() const
    {
        emergencyInfo.display();
    }

    void displayAllVehicles() const
    {
        if (vehicles.empty())
        {
            cout << "No vehicles registered." << endl;
        }
        else
        {
            for (const auto& vehicle : vehicles)
            {
                vehicle.displayDetails();
                cout << endl;
            }
        }
    }

    void displayAllBooths() const
    {
        if (booths.empty())
        {
            cout << "No traffic booths registered." << endl;
        }
        else
        {
            for (const auto& booth : booths)
            {
                booth.displayStats();
                cout << endl;
            }
        }
    }
};


int main()
{
  TrafficManagementSystem tsm;
int choice;

do
{
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
cout<<"**'                                                                                                                                '**"<<endl; 
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                            WELCOME TO                                                          '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                SMART TRAFFIC MANAGEMENT SYSTEM                                                 '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                   PRESS YOUR OPTION :-                                                                                         '**"<<endl;
cout<<"**'                                   1.Record Of Vehicle                                                                          '**"<<endl;
cout<<"**'                                   2.Record Of Violation                                                                        '**"<<endl;
cout<<"**'                                   3.Search For Vehicle                                                                         '**"<<endl;
cout<<"**'                                   4.Add Traffic Booth                                                                          '**"<<endl;
cout<<"**'                                   5.Simulate Booth Entry                                                                       '**"<<endl;
cout<<"**'                                   6.Simulate Booth Entry                                                                       '**"<<endl;
cout<<"**'                                   7.Display Emergency Info                                                                     '**"<<endl;
cout<<"**'                                   8.Display All Vehicles                                                                       '**"<<endl;
cout<<"**'                                   9.Display All Booths                                                                         '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                   Enter Your Choice __                                                                                         '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'                                                                                                                                '**"<<endl;
cout<<"**'>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
cout<<"**'>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

cin >> choice;
cin.ignore();
switch (choice)
{
case 1:
    tms.addvehocle();
    break;
case 2:
    tms.recordviolation();
    break;
case3:
    tms.searchVehicle();
    break;
case 4:
    tms.addTrafficBooth();
    break;
case 5:
    tms.simulateBoothEntry();
    break;
case 6:
    tms.simulateBoothExit();
    break;
case 7:
    tms.displayEmergencyInfo();
    break;
case 8:
    tms.displayAllVehicles();
    break;
case 9:
    tms.displayAllBooth();
    break;
case 0:
    cout << "Exiting..." << endl;
    break;
default:
    cout << "Invalid choice.Please try again." << endl;
}
}
while (choice != 0);

return 0;
}





