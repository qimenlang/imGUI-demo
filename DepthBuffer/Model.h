#pragma once
#include <vector>
using namespace std;
struct Vertex
{
	float x, y, z;
	float tu, tv;
	float nx, ny, nz;
};
class Model
{
public:
	Model();
	Model(vector<Vertex>&);
	~Model();

	int m_vertexCount;
	vector<Vertex> vertices;
private:
};
