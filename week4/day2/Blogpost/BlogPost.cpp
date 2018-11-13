

#include "BlogPost.h"

BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate) {
    mAuthorName = authorName;
    mTitle = title;
    mText = text;
    mPublicationDate = publicationDate;
}

std::string BlogPost::getAuthorName() {
    return mAuthorName;
}

std::string BlogPost::getTitle() {
    return mTitle;
}

std::string BlogPost::getText() {
    return mText;
}

std::string BlogPost::getPublicationdate() {
    return mPublicationDate;
}