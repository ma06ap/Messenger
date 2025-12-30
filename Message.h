//
// Created by matin on 12/30/25.
//

#ifndef MESSENGER_MESSAGE_H
#define MESSENGER_MESSAGE_H

#include <string>
using namespace std;

class Message {
private:
    int senderId;
public:
    virtual bool isText() = 0;
    virtual bool isVoice() = 0;
};

class TextMessage : public Message {
private:
    string text;
public:
    bool isText() override { return true; }
    bool isVoice() override { return false; }
};

class VoiceMessage : public Message {
private:
    int duration;
public:
    bool isText() override { return false; }
    bool isVoice() override { return true; }
};

#endif //MESSENGER_MESSAGE_H