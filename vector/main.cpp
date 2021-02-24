/// <summary>
/// Author:
/// Date:
/// Summary:
/// 
/// Estimated time:
/// Total Time taken:
/// 
/// session 1:
/// session 2:
/// </summary>


#include "MYVector2.h"
#include <SFML/Graphics.hpp>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-main-d.lib")
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-main.lib")
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif //_DEBUG 



int main()
{
	sf::Vector2f A{ 0.0f,0.0f }; // using capitals for test vectors
	sf::Vector2f B{ 0.0f,0.0f }; // these vectors will be used for tests	
	sf::Vector2f C{ 0.0f,0.0f };
	sf::Vector2f D{ 0.0f,0.0f };
	float value{ 0.0f };	// result value of some tests

// vector length +++++++++++++++++++++++++++++++++++++++++++++++++++++
	// expect 5.0
	A = sf::Vector2f{ 3.0f, 4.0f };
	value = vectorLength(A);
	// expect root 2
	A = sf::Vector2f{ 1.0f, 1.0f };
	value = vectorLength(A);

// next method +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	return EXIT_SUCCESS;
}
