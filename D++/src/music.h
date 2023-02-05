#include <SFML/Audio.hpp>
#include <iostream>

void music()
{
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("Intro Theme.wav"))
    {
        std::cout << "Failed to load sound" << std::endl;
        return 1;
    }

    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

    while (sound.getStatus() == sf::Sound::Playing)
    {
        // wait until the sound is finished playing
    }

  
}