 #include "Music.h"


 Music::Music()
{
  
}

Music::~Music()
 {

 }
 
 void Music::inItSounds()
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
    m_mainMenuSound.setLoop(true);

    m_crossroadsSound.setBuffer(m_crossroadsBuffer);
    m_crossroadsSound.setVolume(80);
    m_crossroadsSound.setLoop(true);

    m_battleFinalSound.setBuffer(m_battleFinalBuffer);
    m_battleFinalSound.setVolume(80);
    m_battleFinalSound.setLoop(true);
 }
 
 void Music::playMainMenu()
 {
     m_mainMenuSound.play();
 }
 
 void Music::playCrossroads()
 {
     m_crossroadsSound.play();
     
 }
 
 void Music::playBattleFinal()
 {
     m_battleFinalSound.play();
     
 }
 
 void Music::stopMusicMenu()
 {
     m_mainMenuSound.stop();
 }
 
 void Music::stopMusicCrr()
 {
     m_crossroadsSound.stop();
     
 }
 
 void Music::stopMusicFb()
 {
     m_battleFinalSound.stop();
     
 }
 


