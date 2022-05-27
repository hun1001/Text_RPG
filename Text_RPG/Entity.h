#pragma once
#include "DefaultValue.h"
#include "UtilFunc.h"

class Entity
{
public:
	Entity();
	Entity(int hp, int mp, int atk, int def);
	virtual ~Entity();
protected:
	int m_hp;
	int m_mp;
	int m_atk;
	int m_def;
public:
	virtual void Attack(Entity* target);
	
	/// <summary>
	/// 체력 가져오기
	/// </summary>
	/// <returns></returns>
	int GetHp();
	
	/// <summary>
	/// 방어력 가져오기
	/// </summary>
	/// <returns></returns>
	int GetDef();

	/// <summary>
	/// 공격력 가져오기
	/// </summary>
	/// <returns></returns>
	int GetAtk();

	/// <summary>
	/// 체력 설정
	/// </summary>
	/// <param name="hp"></param>
	void SetHp(int hp);

	/// <summary>
	/// 방어력 설정
	/// </summary>
	/// <param name="def"></param>
	void SetDef(int def);

	/// <summary>
	/// 공격력 설정
	/// </summary>
	/// <param name="atk"></param>
	void SetAtk(int atk);

	/// <summary>
	/// 체력 덧셈
	/// </summary>
	/// <param name="hp"></param>
	void AddHp(int hp);

	/// <summary>
	/// 방어력 덧셈
	/// </summary>
	/// <param name="def"></param>
	void AddDef(int def);
	
	/// <summary>
	/// 공격력 덧셈
	/// </summary>
	/// <param name="atk"></param>
	void AddAtk(int atk);
};

