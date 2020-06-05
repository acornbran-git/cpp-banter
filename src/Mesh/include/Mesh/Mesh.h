#ifndef MESH_MESH_H
#define MESH_MESH_H

#include <Mesh/MeshDLL.h>

#include <Common/Vector3.h>
#include <string>
#include <vector>

namespace evolution
{
class MESH_EXPORT Mesh {
public:
	Mesh();
    
    // IO
    void load(const std::string & filename);
    void save(const std::string& filename) const;
    
private:
    std::vector<Vector3> m_vertices;
    std::vector<Vector3> m_normals;
};

} // namespace evolution

#endif
