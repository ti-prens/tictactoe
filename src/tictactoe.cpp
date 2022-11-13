#include <windows.h>
#include <iostream>

#include "model.h"
#include "view.h"
#include "controller.h"

using namespace std;

int EXIT = 0; 
Controller main_controller;


int main(int argc, char **argv){

    main_controller.OnLoad();

    while(!EXIT){

        main_controller.GetInput();
        Sleep(200);
    }
    
    return 0;
}

/*
@startuml
scale 1
class Event {
    +startTime: DateTime
    +venue: string
    +registrationClosed: boolean
    -notifyAttendes()
}

class ApplicationUser {
    -userName: string
    -password: string
    +isLocked: boolean
    -suggestRandomPasswod()
    +changeProfilePic()
}

class Speaker {
    +openForSpeaking: boolean
    -callForAction()
    +applyAsSpokePerson()
}

class Topic {
    +title: string
    +sourceCodeUrl: string
    +downloadMaterials()
}

class Attendee {
    -eventAttended: number
    -suggestEventBasedOnPreference()
    +registerForTicket()
}

ApplicationUser <|-- Speaker
ApplicationUser <|-- Attendee
Speaker "1" *-- "*" Topic
Event "1" o-- "*" Speaker
Event "1" o-- "*" Attendee
@enduml
*/