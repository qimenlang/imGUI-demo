#pragma once
#include <d3d11.h>
#include <d3dx10math.h>
#include <d3dx11async.h>
#include <fstream>
using namespace std;
class IShader
{

public:
	virtual ~IShader() {};

	virtual bool Initialize(ID3D11Device*, HWND) = 0;
	virtual void Shutdown() = 0;
	virtual bool Render(ID3D11DeviceContext*, int, D3DXMATRIX, D3DXMATRIX, D3DXMATRIX) = 0;
private:
	virtual bool InitializeShader(ID3D11Device*, HWND, WCHAR*, WCHAR*) = 0;
	virtual void ShutdownShader() = 0;
	virtual void OutputShaderErrorMessage(ID3D10Blob*, HWND, WCHAR*) = 0;

	virtual bool SetShaderParameters(ID3D11DeviceContext*, D3DXMATRIX, D3DXMATRIX, D3DXMATRIX) = 0;
	virtual void RenderShader(ID3D11DeviceContext*, int) = 0;

};
