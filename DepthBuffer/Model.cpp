#include "Model.h"

Model::Model()
{
}

Model::Model(vector<Vertex>& in_vertices)
{
	vertices = in_vertices;
	m_vertexCount = vertices.size();
}

Model::~Model()
{
}
