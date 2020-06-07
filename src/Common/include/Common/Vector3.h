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

    // copy constructor
    Vector3(const Vector3& vect) 
        : m_x(vect.m_x),
        m_y(vect.m_y),
        m_z(vect.m_z)
    {}
    
    // assignment operator

    void operator = (const Vector3& vect)
    {
        m_x = vect.m_x;
        m_y = vect.m_y;
        m_z = vect.m_z;
    }

    // dot product
    float dot(const Vector3& v2) const
    {
        float magV1 = pow((pow(m_x, 2.0) + pow(m_y, 2.0) + pow(m_z, 2.0)), 0.5);
        float magV2 = pow((pow(v2.m_x, 2.0) + pow(v2.m_y, 2.0) + pow(v2.m_z, 2.0)), 0.5);
        float theta = (m_x*v2.m_x + m_y*v2.m_y + m_z*v2.m_z)/(magV1*magV2);
        return theta;
    }
    Vector3 cross(const Vector3& v2) const ;
    
    
private:
    float m_x;
    float m_y;
    float m_z;
};

} // namespace evolution

#endif
