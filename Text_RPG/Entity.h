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
	/// ü�� ��������
	/// </summary>
	/// <returns></returns>
	int GetHp();
	
	/// <summary>
	/// ���� ��������
	/// </summary>
	/// <returns></returns>
	int GetDef();

	/// <summary>
	/// ���ݷ� ��������
	/// </summary>
	/// <returns></returns>
	int GetAtk();

	/// <summary>
	/// ü�� ����
	/// </summary>
	/// <param name="hp"></param>
	void SetHp(int hp);

	/// <summary>
	/// ���� ����
	/// </summary>
	/// <param name="def"></param>
	void SetDef(int def);

	/// <summary>
	/// ���ݷ� ����
	/// </summary>
	/// <param name="atk"></param>
	void SetAtk(int atk);

	/// <summary>
	/// ü�� ����
	/// </summary>
	/// <param name="hp"></param>
	void AddHp(int hp);

	/// <summary>
	/// ���� ����
	/// </summary>
	/// <param name="def"></param>
	void AddDef(int def);
	
	/// <summary>
	/// ���ݷ� ����
	/// </summary>
	/// <param name="atk"></param>
	void AddAtk(int atk);
};

