#pragma once

#define _USE_MATH_DEFINES
#include <cmath>
#include "SoglMathCommon.hpp"

namespace Sogl {

//!  2D Vector.
/*!
  A header only 2D vector class.
*/
class Vector2 {
    public:
        /* X component of Vector */
        float x;
        /* Y component of Vector */
        float y;

    public:
        Vector2() {
            x = y = 0.0f;
        }

        Vector2(const float &x, const float &y) {
            this->x = x;
            this->y = y;
        }

        Vector2(const Vector2 &v) {
            x = v.x;
            y = v.y;
        }

    public:
        /*!
            Reverses the Vector.
        */
        void Reverse() {
            x *= -1.0f;
            y *= -1.0f;
        }

        /*!
            Returns the length of the Vector (magnitude).
        */
        float Length() const {
            return sqrt(POWER2(x) + POWER2(y));
        }


        /*!
            Normalizes the Vector so that the Length of the Vector is 1.
         */
        inline void Normalize() {
            float l = 1.0f / Length();
            x *= l;
            y *= l;
        }

        /*!
            Produces anti-clockwise Vector.
        */
        inline void AntiClockwisePerpedingular() {
            float tmp = x;
            x = -y;
            y = tmp;
        }

        /*!
            Produces clockwise Vector.
        */
        inline void ClockwisePerpedingular() {
            float tmp = x;
            x = y;
            y = -tmp;
        }

		// operator overloads
		Vector2 operator+( const Vector2 &rhs) {
			Vector2 v(x + rhs.x,
					  y + rhs.y);
			return v;
		}

		Vector2 operator-(const Vector2 &rhs) {
			Vector2 v(x - rhs.x,
					  y - rhs.y);
			return v;
		}

		Vector2 operator*(const float &rhs) {
			Vector2 v(x * rhs,
					  y * rhs);
			return v;
		}

		Vector2 operator/(const float &rhs) {
			Vector2 v(x / rhs,
					  y / rhs);
			return v;
		}
};

}; // namespace sogl

