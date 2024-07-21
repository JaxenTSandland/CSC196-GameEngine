#pragma once
#include "Scene.h"
#include "Engine.h"

class Game
{
public:
	enum class eState
	{
		Title,
		Level1,
		Level2,
		Level3
	};

public:
	Game() = default;
	Game(Engine* engine) { m_engine = engine; }

	void Initialize();
	void Shutdown();
	void Update(float dt);
	void Draw(Renderer& renderer);

protected:
	eState m_state{ eState::Title };
	Scene* m_scene{ nullptr };
	Engine* m_engine{ nullptr };
	float m_respawnTimer{ 0 };

};