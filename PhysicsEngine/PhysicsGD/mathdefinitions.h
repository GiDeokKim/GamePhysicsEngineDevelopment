#pragma once
#include "precision.h"
#include <cmath>

namespace PhysicsGD
{
	class Vector3
	{
	public:
		real x;		//	x축 방향 좌표 값
		real y;		//	y축 방향 좌표 값
		real z;		//	z축 방향 좌표 값

	private:
		real pad = 0;	//	4 워드 맞춤을 위해 덧붙임

	// 생성자 및 연산 재정의
	public:
		Vector3();									// zero vector로 설정하게 디폴트 생성자 구성
		Vector3(const real x_entry,
				const real y_entry, 
				const real z_entry);				//	주어진 원소 값으로 vector를 생성하는 명시적 생성자
		void	operator*=(const real _value);		//	vector를 주어진 scalar value만큼 곱
		Vector3 operator*(const real _value);		//	대상 vector에 주어진 scalar value만큼 곱한 vector를 return
		void	operator+=(const Vector3& _vector);	//	주어진 vector만큼 더하기
		Vector3 operator+(const Vector3& _vector);	//	주어진 vector만큼 더한 vector를 return
		void	operator-=(const Vector3& _vector);	//	주어진 vector만큼 빼기
		Vector3 operator-(const Vector3& _vector);	//	주어진 vector만큼 뺀 vector를 return

	public:
		void invert();							//	모든 원소의 부호를 반대로 변경
		void normalize();						//	zero vector가 아닌 vector를 unit vector로 변환
		real magnitude();						//	vector의 크기를 계산
		real SquareMagnitude();					//	vector의 크기의 제곱을 계산

	};
}
