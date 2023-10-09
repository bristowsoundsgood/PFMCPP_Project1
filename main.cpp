#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: television
//  action 1: the television connects to aerial
television.connectToAerial();
//  action 2: the television emits sound
television.emitSound();
//  action 3: the television emits light
television.emitLight();

//  2)
//  Noun: smartphone
//  action 1: the smartphone stores data   
smartphone.storeData();
//  action 2: the smartphone auto-adapts brightness
smartphone.autoAdaptBrightness();
//  action 3: the smartphone loses battery
smartphone.loseBattery();

//  3)
//  Noun: shoe
//  action 1: the shoe protects the foot
shoe.protectFoot();
//  action 2: the shoe conveys fashion
shoe.conveyFashion();
//  action 3: the shoe provides comfort
shoe.provideComfort();

//  4)
//  Noun: wall
//  action 1: the wall separates spaces
wall.separateSpaces();
//  action 2: the wall attenuates sound
wall.attenuateSound();
//  action 3: the wall blocks vision
wall.blockVision();

//  5)
//  Noun: loudspeaker
//  action 1: the loudspeaker rumbles its surroundings
loudspeaker.rumbleSurroundings();
//  action 2: the loudspeaker damages hearing
loudspeaker.damageHearing();
//  action 3: the loudspeaker colours sound
loudspeaker.colourSound();

//  6)
//  Noun: hotel
//  action 1: the hotel provides shelter
hotel.provideShelter();
//  action 2: the hotel charges a guest money
hotel.chargeGuestMoney();
//  action 3: the hotel provides food
hotel.provideFood();

//  7) 
//  Noun: web browser
//  action 1: the web browser caches data 
webBrowser.cacheData();
//  action 2: the web browser connects to servers 
webBrowser.connectToServer();
//  action 3: the web browser displays search results
webBrowser.displaySearchResults();

//  8)
//  Noun: private library
//  action 1: the private library lends books 
privateLibrary.lendBook();
//  action 2: the private library accepts valid members
privateLibrary.acceptValidMember();
//  action 3: the private library rejects invalid members
privateLibrary.rejectInvalidMember();

//  9)
//  Noun: train
//  action 1: the train transports passengers
train.transportPassengers();
//  action 2: the train consumes fuel
train.consumeFuel();
//  action 3: the train follows a track
train.followTrack();

//  10)
//  Noun: spotify
//  action 1: spotify plays music 
spotify.playMusic();
//  action 2: spotify increments stream counts
spotify.incrementStreamCount();
//  action 3: spotify stores user preferences
spotify.storeUserPreference();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
