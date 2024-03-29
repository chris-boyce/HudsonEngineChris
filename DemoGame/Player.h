#pragma once
#include <Hudson.h>
enum playerDirections { Down = 1, Left, Right, Up };
class Player : public Hudson::Entity::Behaviour, public Hudson::Common::IEditable
{
	
private:
	Hudson::Render::SpriteComponent* _playerSprite;
	double _playerAnimSpeed = 0.8;
	double _playerAnimTimer = 0;
	playerDirections playerDirection = Down;

	
public:
	Player(Hudson::Render::SpriteComponent* playerSprite, double animSpeed = 0.8);
	~Player() override;

	void OnCreate() override;
	void OnTick(const double& dt) override;
	void OnDestroy() override;

	void DrawPropertyUI() override;



};

