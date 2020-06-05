#ifndef COMMON_VECTOR3_H
#define COMMON_VECTOR3_H

#include <Common/CommonDLL.h>

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

    // assignment operator

    // dot product
    float dot(const Vector3& v2) const;
    Vector3 cross(const Vector3& v2) const ;
    
    
private:
    float m_x;
    float m_y;
    float m_z;
};

} // namespace evolution

#endif
