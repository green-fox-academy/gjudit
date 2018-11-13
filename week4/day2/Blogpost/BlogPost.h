
#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

#include <iostream>


class BlogPost {
public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);
    std::string getAuthorName();
    std::string getTitle();
    std::string getText();
    std::string getPublicationdate();

private:
    std::string mAuthorName;
    std::string mTitle;
    std::string mText;
    std::string mPublicationDate;
};


#endif //BLOGPOST_BLOGPOST_H
