 #include "Music.h"


 Music::Music()
{
    // Load sound files
        if (!m_mainMenuBuffer.loadFromFile("Main_Menu.wav"))
        {
            // Error handling
        }
        if (!m_crossroadsBuffer.loadFromFile("Exploring.wav"))
        {
            // Error handling
        }
        if (!m_battleFinalBuffer.loadFromFile("BattleFinal.wav"))
        {
            // Error handling
        }

        m_mainMenuSound.setBuffer(m_mainMenuBuffer);
        m_mainMenuSound.setVolume(80);

        m_crossroadsSound.setBuffer(m_crossroadsBuffer);
        m_crossroadsSound.setVolume(80);

        m_battleFinalSound.setBuffer(m_battleFinalBuffer);
        m_battleFinalSound.setVolume(80);
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
