/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int totalDuration(std::vector<int> secondss)
{
    int x = 0;
    for (int index = 0; index < length(secondss); index = index + 1)
    {
        x = secondss[index] + x;
    }
    return x;
}

double averageDuration(std::vector<int> secondss)
{
    double x = 0;
    for (int index = 0; index < length(secondss); index = index + 1)
    {
        x = secondss[index] + x;
    }
    x = x/length(secondss);
    return x;
}

std::string longestSong(std::vector<std::string> titles, std::vector<std::string> artists, std::vector<int> secondss)
{
    if (length(titles) > 2) 
    {
        int x = secondss[0];
        int sindex;
        std::string returnThing;
        for (int index = 1; index < length(secondss); index = index + 1)
        {
           if (secondss[index] > x)
           {
                x = secondss[index];
                sindex = index;
           }
        }
        returnThing = "The longest song is " + titles[sindex] + " by " + artists[sindex] + " at " + std::to_string(x) + " seconds long.";
        return (returnThing);
    } else if (length(titles) == 2)
    {
        if (secondss[0] > secondss[1])
        {
            std::string returnThing;
            returnThing = "The longest song is " + titles[0] + " by " + artists[0] + " at " + std::to_string(secondss[0]) + " seconds long.";
            return returnThing;
        } else 
        {
            std::string returnThing;
            returnThing = "The longest song is " + titles[1] + " by " + artists[1] + " at " + std::to_string(secondss[1]) + " seconds long.";
            return returnThing;
        }
    } else 
    {
        return ("You only have 1 one song, it is both your longest and shortest song.");
    }
    return "404";
}

std::string shortestSong(std::vector<std::string> titles, std::vector<std::string> artists, std::vector<int> secondss)
{
    if (length(titles) > 2) 
    {
        int x = secondss[0];
        int sindex;
        std::string returnThing;
        for (int index = 1; index < length(secondss); index = index + 1)
        {
           if (secondss[index] < x)
           {
                x = secondss[index];
                sindex = index;
           }
        }
        returnThing = "The shortest song is " + titles[sindex] + " by " + artists[sindex] + " at " + std::to_string(x) + " seconds long.";
        return (returnThing);
    } else if (length(titles) == 2)
    {
        if (secondss[0] < secondss[1])
        {
            std::string returnThing;
            returnThing = "The shortest song is " + titles[0] + " by " + artists[0] + " at " + std::to_string(secondss[0]) + " seconds long.";
            return returnThing;
        } else 
        {
            std::string returnThing;
            returnThing = "The longest song is " + titles[1] + " by " + artists[1] + " at " + std::to_string(secondss[1]) + " seconds long.";
            return returnThing;
        }
    } 
    return "404";
}

int main()
{
    bool endProgram = false;
    std::vector<std::string> titles = {};
    std::vector<std::string> artists = {};
    std::vector<int> secondss = {};
    std::string title;
    std::string artist;
    int seconds;
    std::cout << "Welcome to the song crowdsourcing experiment!";
    while (!(endProgram))
    {
        int input = 0;
        
        std::cout << "\nWhat would you like to do?\n\n"
                  << "1. Enter a song\n"
                  << "2. Search for a song\n"
                  << "3. Remove a song\n"
                  << "4. Display all songs\n"
                  << "5. End Program\n\n > ";
        std::cin >> input; 
        std::cin.ignore();

        if (input == 1)
        {
            while (input == 1)
            {   
                std::cout << "Enter the song's title:\n > ";
                std::getline(std::cin, title);
                std::cout << "Enter the song's main artist:\n > ";
                std::getline(std::cin, artist);
                std::cout << "Enter the song's duration in seconds:\n > ";
                std::cin >> seconds;
                append(titles, title);
                append(artists, artist);
                append(secondss, seconds);

                std::string yn = "y"; 
                std::cout << "Do you want to enter another song? (y/n)\n > ";
                std::cin >> yn;
                if (yn == "n")
                {
                    input = 0;
                }
                std::cin.ignore();
            }
        } else if (input == 2) // search
        {
            endProgram = true; // placeholder
        } else if (input == 3) //remove
        {
            int indexRemove;
            display(titles);
            std::cin >> indexRemove;
            indexRemove = indexRemove + 1;
            input = 0;
            
        } else if (input == 4) //display
        {
            display(titles);
            input = 0; 
        } else if (input == 5) //end
        {
            endProgram = true;
        }
 
    }
    
    
    std::cout << "The total duration of all the songs is " << totalDuration(secondss) <<  " seconds." << std::endl;
    std::cout << "The average length of a song is " << averageDuration(secondss) << " seconds." << std::endl;
    std::cout << longestSong(titles, artists, secondss) << std::endl;
    std::cout << shortestSong(titles, artists, secondss) << std::endl;



    return 0;
}
