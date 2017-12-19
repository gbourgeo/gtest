#pragma once

class Character
{
public:
	Character(double life, double shield, double damage, double speed);
	virtual ~Character();

	void	Attack( Character &target ) const;
	void	ReceiveDamages(double damage);
	double	GetLife(void) const;
	double	GetShield(void) const;
	double	GetDamage( void ) const;
	double	GetSpeed( void ) const;
	void	SetLife(double life);
	void	SetShield(double shield);
	void	SetDamage(double damage);
	void	SetSpeed(double speed);
	bool	IsDead(void) const;

protected:
	double		_life;
	double		_shield;
	double		_damage;
	double		_speed;
};

