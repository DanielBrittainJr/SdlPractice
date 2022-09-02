#pragma once

#ifndef __Game__
#define __Game__

class Game
{
public:
	Game() {}
	~Game() {}

	//set run var to true
	void init() { m_bRunning = true; }

	void render() {}
	void update() {}
	void handleEvents() {}
	void clean() {}

	bool running() { return m_bRunning; }

private:

	bool m_bRunning;


};

#endif /* defined (__Game__)*/
