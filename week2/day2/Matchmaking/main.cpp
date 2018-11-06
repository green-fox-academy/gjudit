#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{
    std::vector<std::string> matching;
    int longerListSize =0;
    if (girls.size() < boys.size()){
        longerListSize = boys.size();
    } else {
        longerListSize = girls.size();
    }
    for ( int i = 0; i < longerListSize; i++){
        if (girls.size() > i){
            matching.push_back(girls[i]);
        }
        if (girls.size()>i) {
            matching.push_back(boys[i]);
        }
    }
    return matching;
}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};
    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...
    for(const auto& planet : makingMatches(girls, boys)) {
        std::cout << planet << " ";
    }
    return 0;
}
