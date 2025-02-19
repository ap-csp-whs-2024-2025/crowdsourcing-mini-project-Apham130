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
    std::cout << x << std::endl;
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
            returnThing = "The longest song is " + titles[0] + " by " + artists[0] + " at " + std::to_string(0) + " seconds long.";
            return returnThing;
        } else 
        {
            std::string returnThing;
            returnThing = "The longest song is " + titles[1] + " by " + artists[1] + " at " + std::to_string(1) + " seconds long.";
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
        for (int index = 1; index == length(secondss); index = index + 1)
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
            returnThing = "The shortest song is " + titles[0] + " by " + artists[0] + " at " + std::to_string(0) + " seconds long.";
            return returnThing;
        } else 
        {
            std::string returnThing;
            returnThing = "The longest song is " + titles[1] + " by " + artists[1] + " at " + std::to_string(1) + " seconds long.";
            return returnThing;
        }
    } 
    return "404";
}

int main()
{
    std::vector<std::string> titles = {};
    std::vector<std::string> artists = {};
    std::vector<int> secondss = {};
    int endCondition = true;
    while (endCondition)
    {   
        std::string title, artist;
        int seconds;

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
            endCondition = false;
        }
        std::cin.ignore();
        display(artists);
        display(titles);
        display(secondss);
    }
    display(artists);
    display(titles);
    display(secondss);
    
    
    
    std::cout << "The total duration of all the songs is " << totalDuration(secondss) << "." << std::endl;
    std::cout << "The average length of a song is " << averageDuration(secondss) << "." << std::endl;
    std::cout << longestSong(titles, artists, secondss) << std::endl;
    std::cout << shortestSong(titles, artists, secondss) << std::endl;



    return 0;
}
