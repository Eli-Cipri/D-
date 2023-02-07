 #ifndef MUSIC_H
 #define MUSIC_H

#include <SFML/Audio.hpp>
 #include <SFML/System.hpp>
#pragma once

 class Music
 {
 public:
    
    Music()
    {
        
    }
    ~Music();

     
    void playMainMenu();
   void playCrossroads();
   void playBattleFinal();

    

    

 private:
    sf::SoundBuffer m_mainMenuBuffer;
    sf::SoundBuffer m_crossroadsBuffer;
    sf::SoundBuffer m_battleFinalBuffer;

    sf::Sound m_mainMenuSound;
    sf::Sound m_crossroadsSound;
    sf::Sound m_battleFinalSound;

 };

 #endif