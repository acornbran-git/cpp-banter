#ifndef COMMON_VECTOR3_H
#define COMMON_VECTOR3_H

#include <Common/CommonDLL.h>
#include <math.h>

namespace evolution
{
class COMMON_EXPORT Vector3 {
public:
  
    Vector3() 
        : m_x(0.0f), 
        m_y(0.0f),
        m_z(0.0f) 
    {}

    Vector3(float x, float y, float z)
        : m_x(x),
        m_y(y),
        m_z(z)
    {}

    // copy constructor
    Vector3(const Vector3& vect) 
        : m_x(vect.m_x),
        m_y(vect.m_y),
        m_z(vect.m_z)
    {}
    
    // assignment operator
    void operator = (const Vector3& vect) {
        m_x = vect.m_x;
        m_y = vect.m_y;
        m_z = vect.m_z;
    }

    float mag() const  {
        return sqrt(pow(m_x,2)+ pow(m_y,2)+ pow(m_z,2));
    }
    
    Vector3 norm() const {
        float x = m_x;
        float y = m_y;
        float z = m_z;
        const float length = mag();
        x /= length;
        y /= length;
        z /= length;
        return Vector3(x, y, z);
    }

    // dot product
    float dot(Vector3& v2) const {
        const Vector3 v1Unit(this->norm());
        const Vector3 v2Unit(v2.norm());
        return ((v1Unit.m_x * v2Unit.m_x) + (v1Unit.m_y * v2Unit.m_y) + (v1Unit.m_z * v2Unit.m_z));
    }

    Vector3 cross(const Vector3& vect2) const {
        const Vector3 v1Unit(this->norm());
        const Vector3 v2Unit(vect2.norm());
        float x = v1Unit.m_y * v2Unit.m_z - v1Unit.m_z * v2Unit.m_y;
        float y = v1Unit.m_z * v2Unit.m_x - v1Unit.m_x * v2Unit.m_z;
        float z = v1Unit.m_x * v2Unit.m_y - v1Unit.m_y * v2Unit.m_x;
        return Vector3(x, y, z);
    }
     
private:
    float m_x;
    float m_y;
    float m_z;
};

} // namespace evolution

#endif