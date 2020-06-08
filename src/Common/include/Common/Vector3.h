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

    float mag()
    {
        float mag=sqrt(pow(m_x,2)+ pow(m_y,2)+ pow(m_z,2));
        return mag;
    }
    
    Vector3 norm()
    {
        Vector3 norm;
        norm.m_x = m_x / mag();
        norm.m_y = m_y / mag();
        norm.m_z = m_z / mag();
        return norm;
    }

    // dot product
    float dot(const Vector3& v2) const
    {
        float theta;
        return theta;
    }
    Vector3 cross(const Vector3& v2) const;
    
    
private:
    float m_x;
    float m_y;
    float m_z;
};

} // namespace evolution

#endif
