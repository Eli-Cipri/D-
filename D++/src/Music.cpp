 #include "Music.h"


 Music::Music()
{
  
}

Music::~Music()
 {

 }
 

 void Music::playMainMenu()
    {
        m_mainMenuSound.play();
        while (m_mainMenuSound.getStatus() == sf::Sound::Playing)
        {
            sf::sleep(sf::seconds(0.1f));
        }
    }

void Music::playCrossroads()
    {
        m_crossroadsSound.play();
        while (m_crossroadsSound.getStatus() == sf::Sound::Playing)
        {
            sf::sleep(sf::seconds(0.1f));
        }
    }

void Music::playBattleFinal()
    {
        m_battleFinalSound.play();
        while (m_battleFinalSound.getStatus() == sf::Sound::Playing)
        {
            sf::sleep(sf::seconds(0.1f));
        }
    } 
