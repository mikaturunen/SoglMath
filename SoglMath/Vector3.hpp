#pragma once


#include <cmath>
#include "SoglMathCommon.hpp"


namespace Sogl {

//!  3D Vector.
/*!
  A header only 3D vector class.
*/
class Vector3 {
    public:
        /* X component of the vector */
        float x;
        /* Y component of the vector */
        float y;
        /* Z component of the vector */
        float z;

    public:
        Vector3() {
            x = y = z = 0.0f;
        }

        Vector3(const float &x, const float &y, const float &z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        Vector3(const Vector3 &v) {
            x = v.x;
            y = v.y;
            z = v.z;
        }

        ~Vector3() {
        }


    public:
        /*!
          Reverses the Vector.
        */
        inline void Reverse() {
            x *= -1.0f;
            y *= -1.0f;
            z *= -1.0f;
        }

        /*!
          Returns the length of the Vector (magnitude).
        */
        inline float Length() const {
            return sqrt(POWER2(x) + POWER2(y) + POWER2(z));
        }

        /*!
            Normalizes the Vector so that the Length of the Vector is 1.
         */
        inline void Normalize() {
            float l = 1.0f / Length();
            x *= l;
            y *= l;
            z *= l;
        }

        /*!
            Dot product of two vectors.
         */
        static inline float Dot( const Vector3 &v1, const Vector3 &v2 )
        {
            return( (v1.x*v2.x) +
                    (v1.y*v2.y) +
                    (v1.z*v2.z) );
        }

        /*!
            Cross product of two Vectors.
            Perpedingular Vector of the two.
         */
        static inline Vector3 Cross( const Vector3 &v1, const Vector3 &v2 )
        {
            Vector3 v(0,0,0);

            v.x = (v1.y * v2.z) - (v1.z * v2.y);
            v.y = (v1.z * v2.x) - (v1.x * v2.z);
            v.z = (v1.x * v2.y) - (v1.y * v2.x);

            return v;
        }
};


// operator overloads
Vector3 operator+(const Vector3 &lhs, const Vector3 &rhs) {
    Vector3 v(lhs.x + rhs.x,
              lhs.y + rhs.y,
              lhs.z + rhs.z);
    return v;
}

Vector3 operator-(const Vector3 &lhs, const Vector3 &rhs) {
    Vector3 v(lhs.x - rhs.x,
              lhs.y - rhs.y,
              lhs.z - rhs.z);
    return v;
}

Vector3 operator*(const Vector3 &lhs, const float &rhs) {
    Vector3 v(lhs.x * rhs,
              lhs.y * rhs,
              lhs.z * rhs);
    return v;
}

Vector3 operator/(const Vector3 &lhs, const float &rhs) {
    Vector3 v(lhs.x / rhs,
              lhs.y / rhs,
              lhs.z / rhs);
    return v;
}


};  // namespace sogl

