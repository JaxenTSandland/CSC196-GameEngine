#include "Player.h"
#include "Engine.h"
#include "Bullet.h"
#include "Enemy.h"
#include "Player.h"
#include "Scene.h"

void Enemy::Update(float dt)
{
	Player* player = m_scene->GetActor<Player>();

	if (player)
	{
		Vector2 direction = player->GetTransform().position - m_transform.position;
		m_velocity = direction.Normalized() * m_speed * dt;
		m_transform.rotation = direction.Angle();
	}

	Actor::Update(dt);

}
