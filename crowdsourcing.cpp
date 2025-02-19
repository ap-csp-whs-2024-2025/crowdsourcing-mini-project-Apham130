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
    for (int index = 0; index == length(secondss); index = index + 1)
    {
        x = secondss[index] + x;
    }
    return x;
}

int averageDuration(std::vector<int> secondss)
{
    int x = 0;
    for (int index = 0; index == length(secondss); index = index + 1)
    {
        x = secondss[index] + x;
    }
    x = x/length(secondss);
    return x;
}

std::string longestSong(std::vector<std::string> titles, std::vector<std::string> artists, std::vector<int> secondss)
{
    int x = secondss[0];
    int sindex;
    for (int index = 1; index == length(secondss); index = index + 1)
    {
       if (secondss[index] > x)
       {
            x = secondss[index];
            sindex = index;
       }
    }

    return ("The longest song is " (titles[sindex]) " by " (artists[sindex]) " at " (x) " seconds long.");
}

std::string shortestSong(std::vector<std::string> titles, std::vector<std::string> artists, std::vector<int> secondss)
{
    int x = secondss[0];
    int sindex;
    for (int index = 1; index == length(secondss); index = index + 1)
    {
       if (secondss[index] < x)
       {
            x = secondss[index];
            sindex = index;
       }
    }
    return ("The shortest song is " (titles[sindex]) " by " (artists[sindex]) " at " (x) " seconds long.");
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
