#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "Triangle.h"
#include "Vector3d.cpp"

class OBJparser 
{
public:
    static void ReadFile ( std::string file_name, std::vector < Triangle > &triangles ) 
    {
        std::ifstream objfile;
        std::string line_type;
        std::vector < Vector3D > vertices;
        std::string tmp_x, tmp_y, tmp_z;
        std::string tmp_v1, tmp_v2, tmp_v3;

        objfile.open( file_name, std::ios::out );

        objfile >> line_type;
        while ( line_type == "v" || line_type == "f" )
        {
            if ( line_type == "v" )
            {
                objfile >> tmp_x >> tmp_y >> tmp_z;
                Vector3D tmp_vertex ( strtod( tmp_x.c_str(), NULL ), strtod( tmp_y.c_str(), NULL ), strtod( tmp_z.c_str(), NULL ) );
                vertices.push_back( tmp_vertex );
            }
            else if ( line_type == "f" )
            {
                objfile >> tmp_v1 >> tmp_v2 >> tmp_v3;
                Triangle tmp_triangle;
                tmp_triangle.vertices[ 0 ] = vertices[ std::stoi( tmp_v1 ) - 1 ];
                tmp_triangle.vertices[ 1 ] = vertices[ std::stoi( tmp_v2 ) - 1 ];
                tmp_triangle.vertices[ 2 ] = vertices[ std::stoi( tmp_v3 ) - 1 ];
                triangles.push_back( tmp_triangle );
            }


            objfile >> line_type;
        }

        return;
    }
};