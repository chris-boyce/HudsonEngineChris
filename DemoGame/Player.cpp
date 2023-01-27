#include "Player.h"

Player::Player(Hudson::Render::SpriteComponent* playerSprite, double animSpeed) : Behaviour("PlayerTest")
{
	_playerSprite = playerSprite;
	_playerAnimSpeed = 0.1;
	playerDirection = Down;
}

Player::~Player()
{
}

void Player::OnCreate()
{
}

void Player::OnTick(const double& dt)
{
	playerDirection = Down;
	if (playerDirection == NULL)
	{
		std::cout << "Is Broken" << "\n";
	}
	else
	{
		std::cout << "Is Working" << "\n";
	}
	// TODO: remove this when OnCreate is implemented
	
	//Todo Check way the player is walking
	_playerAnimTimer += dt;


	if (_playerAnimTimer >= _playerAnimSpeed)
	{
		_playerAnimTimer -= _playerAnimSpeed;
		int _gridX = _playerSprite->GetGridPos().x;
		int _gridY = _playerSprite->GetGridPos().y;

		//std::cout << playerDirection << "\n";
		glm::vec2 spriteGridSize = _playerSprite->GetGridSize();
		if (_gridX < spriteGridSize.x - 1)
		{
			
			_gridX ++;
			
		}
		else
		{
			_gridX = 0;
			_gridY++;
		}
		if (_gridY > spriteGridSize.y - 1)
		{
			_gridY = 0;
		}
		_playerSprite->SetGridPos(glm::vec2(_gridX, _gridY));
	}
	
	




	
}

void Player::OnDestroy()
{
}

void Player::DrawPropertyUI()
{
}
