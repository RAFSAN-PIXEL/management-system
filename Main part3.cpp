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





