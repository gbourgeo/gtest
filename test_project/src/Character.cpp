#include "Character.hh"
#include <iostream>

Character::Character( double life, double shield, double damage, double speed ):
	_life(life),
	_shield(shield),
	_damage(damage),
	_speed(speed)
{
#ifdef TESTING
	std::cout << "in testing mode" << std::endl;
#endif
}

Character::~Character()
{
}

void Character::Attack(Character &target) const
{
	target.ReceiveDamages(this->_damage);
}

void Character::ReceiveDamages( double damage )
{
	if (damage > 0) {
		this->_shield -= damage;
		if (this->_shield < 0) {
			this->_life += this->_shield;
			this->_shield = 0;
			if (this->_life < 0)
				this->_life = 0;
		}
	}
}

double Character::GetLife(void) const
{
	return this->_life;
}

double Character::GetShield(void) const
{
	return this->_shield;
}

double Character::GetDamage(void) const
{
	return this->_damage;
}

double Character::GetSpeed(void) const
{
	return this->_speed;
}

void Character::SetLife(double life)
{
	this->_life = life;
}

void Character::SetShield(double shield)
{
	this->_shield = shield;
}

void Character::SetDamage(double damage)
{
	this->_damage = damage;
}

void Character::SetSpeed(double speed) {
	this->_speed = speed;
}

bool Character::IsDead(void) const {
	return this->_life <= 0;
}