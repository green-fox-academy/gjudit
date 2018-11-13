

#include "PostIt.h"


PostIt::PostIt(){
    std::cout << "Post-its" << std::endl;
}

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor){
    mbackgroundColor = backgroundColor;
    mtext = text;
    mtextColor = textColor;
    std::cout << "a post it created" << std::endl;
}
std::string PostIt::getbackgroundColor(){
    return mbackgroundColor;
}

std::string PostIt::gettext(){
    return mtext;
}

std::string PostIt::gettextcolor(){
    return mtextColor;
}