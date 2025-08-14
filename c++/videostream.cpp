#include <iostream>
using namespace std;

class StreamingUser
{

protected:
    string user_email;
    int subscription_date;
    string watch_history;

public:
    StreamingUser()
    {
        cout << "this is a defaulat constructor for streaming user" << endl;
    }

    StreamingUser()
    {
        cout << "this is a parameterised constructor for streaming user" << endl;
    }

    void watchVideo()
    {
        cout << "you can watch videos form here" << endl;
    }
    void createPlaylist()
    {
        cout << "you can watch videos from here" << endl;
    }
    void createPlaylist()
    {
        cout << "create playlist" << endl;
    }

    void getUserInfo()
    {
        cout << "get user info" << endl;
    }
};

int main()
{
}

// Create a video streaming platform user system.
// Base class StreamingUser
// protected: userEmail, subscriptionDate, watchHistory
// public: constructor, watchVideo(), createPlaylist(), getUserInfo()

// Derived class PremiumSubscriber
// private: downloadLimit, adFreeStatus, hdQuality
// public: constructor, downloadVideo(), watchInHD(), getPremiumFeatures()

// Create basic and premium subscriber objects
// Demonstrate how premium users get additional features
// Show constructor parameter passing for subscription details
