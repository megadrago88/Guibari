#include "imgui.h"
#include "Imgui\SFML\imgui-SFML.h"

#include <Windows.h>
#include <dwmapi.h>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

#pragma comment(lib,"dwmapi.lib")//Acts like I had put it in linker

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR lpCmdLine, INT nCmdShow)
{

	sf::RenderWindow window(sf::VideoMode(640, 480), "",sf::Style::None);
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);//cap at 60 
	ImGui::SFML::Init(window);	

	/*
	Transparent "mode" using DWM
	*/
	MARGINS margins;
	margins.cxLeftWidth = -1;
	SetWindowLong(window.getSystemHandle(), GWL_STYLE, WS_POPUP | WS_VISIBLE);
	DwmExtendFrameIntoClientArea(window.getSystemHandle(), &margins);
	
	/*TODO: ADD way to stop it from going out of bounds
		get size of imgui window
		get size of screen
		get current pos
		get prev. pos and calc a vector of their difference
		or calc it's distance to max screen size
		or calc the diffrence between end of window and screen and =< 0 reset to previous position (or the end of the screen) TEST THIS!
		or (MOST LIKELY) have it snap back within bounds but at the same y-position as out of bounds (Right and left sides) or the same x-position inbounds ad out of bounds (Top and bottom)
	*/

	window.resetGLStates(); // call it if you only draw ImGui. Otherwise not needed.
	sf::Clock deltaClock;
	sf::Vector2i grabbedOffset;
	bool grabbedWindow = false;
	bool isOpen = true;
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			ImGui::SFML::ProcessEvent(event);

			if (event.type == sf::Event::Closed) {
				window.close();
			}
			else if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape)
					window.close();
			}
			else if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					grabbedOffset = window.getPosition() - sf::Mouse::getPosition();
					grabbedWindow = true;
				}
			}
			else if (event.type == sf::Event::MouseButtonReleased)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
					grabbedWindow = false;
			}
			else if (event.type == sf::Event::MouseMoved)
			{
				if (grabbedWindow)
					window.setPosition(sf::Mouse::getPosition() + grabbedOffset);
			}
		}

		ImGui::SFML::Update(window, deltaClock.restart());
		ImGui::SetNextWindowSize(ImVec2(400,400));
		ImGui::SetNextWindowPosCenter();
		ImGui::Begin("Guibari",&isOpen,ImVec2(400,400),1.0f,ImGuiWindowFlags_NoCollapse|ImGuiWindowFlags_NoResize|ImGuiWindowFlags_MenuBar|ImGuiWindowFlags_NoSavedSettings); // begin window
		
		if (!isOpen) break;



		ImGui::End(); // end window

		window.clear(sf::Color::Transparent); // fill background with color
		ImGui::SFML::Render(window);
		window.display();
	}

	ImGui::SFML::Shutdown();
}