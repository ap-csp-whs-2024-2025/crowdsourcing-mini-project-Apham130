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
    for (index = 0; index = length(secondss); index = index + 1)
    {

    }
    return 0;
}

int averageDuration(std::vector<int> secondss)
{

    return 0;
}

std::string longestSong(std::vector<std::string> titles, std::vector<std::string> artists, std::vector<int> secondss)
{
    
    return ("The longest song is ");
}

std::string shortestSong(std::vector<std::string> titles, std::vector<std::string> artists, std::vector<int> secondss)
{
    
    return ("The shortest song is ");
}

int main()
{
    int endCondition = true;
    while (endCondition)
    {   
        std::string title, artist;
        int seconds;
        std::vector<std::string> titles = {};
        std::vector<std::string> artists = {};
        std::vector<int> secondss = {};
        
        std::cout << "Enter the song's title:\n > ";
        std::cin >> title;
        std::cout << "Enter the song's main artist:\n > ";
        std::cin >> artist;
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
    }




    return 0;
}
