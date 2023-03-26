* Facade Design Example (by ChatGPT):

```c++
#include <iostream>
using namespace std;

// Subsystem 1
class VideoFile {
public:
    void playVideo() {
        cout << "Playing video..." << endl;
    }
};

// Subsystem 2
class AudioFile {
public:
    void playAudio() {
        cout << "Playing audio..." << endl;
    }
};

// Facade
class MultimediaPlayer {
public:
    void play() {
        VideoFile video;
        AudioFile audio;
        video.playVideo();
        audio.playAudio();
    }
};

// Client code
int main() {
    MultimediaPlayer player;
    player.play();  // only need to call one method
    return 0;
}
```