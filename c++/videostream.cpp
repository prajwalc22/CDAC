#include <iostream>
using namespace std;

class StreamingUser
{
protected:
    string userEmail;
    int subscriptionDate;
    string watchHistory;

public:
    StreamingUser()
    {
        cout << "this is a default constructor for streaming user" << endl;
    }
    StreamingUser(string email, int subs_date, string history)
    {
        userEmail = email;
        subscriptionDate = subs_date;
        watchHistory = history;
        cout << "this is a parameterised constructor for streaming user" << endl;
    }
    void watchVideo()
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

class PremiumSubscriber : public StreamingUser
{
private:
    int downloadLimit;
    string adFreeStatus;
    string hdQuality;

public:
    PremiumSubscriber()
    {
        cout << "default constructor for premiumsubs" << endl;
    }
    PremiumSubscriber(int limit, string status, string quality, string email, int subs_date, string history) : StreamingUser(email, subs_date, history)
    {
        downloadLimit = limit;
        adFreeStatus = status;
        hdQuality = quality;
        cout << "para constructor for premiumsubs" << endl;
    }
    void downloadVideo()
    {
        cout << "downloading video with limit: " << downloadLimit << endl;
    }
    void watchInHD()
    {
        cout << "watching in " << hdQuality << " quality" << endl;
    }
    void getPremiumFeatures()
    {
        cout << "Premium features: Download limit " << downloadLimit << ", Ad-free " << adFreeStatus << ", HD Quality " << hdQuality << endl;
    }
};

int main()
{
    StreamingUser basicUser("user@example.com", 20231201, "Movie1, Series1");
    basicUser.watchVideo();
    basicUser.createPlaylist();
    basicUser.getUserInfo();

    cout << endl;

    PremiumSubscriber premiumUser(50, "Yes", "4K", "premium@example.com", 20231115, "Movie1, Movie2, Series1, Series2");
    premiumUser.watchVideo();
    premiumUser.createPlaylist();
    premiumUser.getUserInfo();
    premiumUser.downloadVideo();
    premiumUser.watchInHD();
    premiumUser.getPremiumFeatures();

    return 0;
}