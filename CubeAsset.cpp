#include "CubeAsset.h"

CubeAsset::CubeAsset() 
  : GameAsset(
	      string("shaders/hello-gl.v.glsl")
	      , string("shaders/hello-gl.f.glsl")
	      )
{
  CubeAsset(0, 0, 0);
}

CubeAsset::CubeAsset(float x, float y, float z) {

  // A default "unit" triangular pyramid
  num_vertices = 8;
  num_triangles = 12;
  g_vertex_buffer_data = new GLfloat[num_vertices * 3]; // 4 points per vertex
  g_element_buffer_data = new GLushort[num_triangles * 3]; // three vertices per triangle

  g_vertex_buffer_data[0] = -0.5;
  g_vertex_buffer_data[1] = -0.5;
  g_vertex_buffer_data[2] = 0.5;

  g_vertex_buffer_data[3] = 0.5;
  g_vertex_buffer_data[4] = -0.5;
  g_vertex_buffer_data[5] = 0.5;

  g_vertex_buffer_data[6] = 0.0;
  g_vertex_buffer_data[7] = -0.5;


  g_element_buffer_data[0] = 0;
  g_element_buffer_data[1] = 1;
  g_element_buffer_data[2] = 2;

  g_element_buffer_data[3] = 2;
  g_element_buffer_data[4] = 3;
  g_element_buffer_data[5] = 0;

  g_element_buffer_data[6] = 1;
  g_element_buffer_data[7] = 5;
  g_element_buffer_data[8] = 6;

  g_element_buffer_data[0] = 5;
  g_element_buffer_data[1] = 4;
  g_element_buffer_data[2] = 1;

  g_element_buffer_data[3] = 1;
  g_element_buffer_data[4] = 0;
  g_element_buffer_data[5] = 4;

  g_element_buffer_data[6] = 0;
  g_element_buffer_data[7] = 2;
  g_element_buffer_data[8] = 3;

  g_element_buffer_data[0] = 3;
  g_element_buffer_data[1] = 7;
  g_element_buffer_data[2] = 4;

  g_element_buffer_data[3] = 7;
  g_element_buffer_data[4] = 3;
  g_element_buffer_data[5] = 0;

  g_element_buffer_data[6] = 3;
  g_element_buffer_data[7] = 2;
  g_element_buffer_data[8] = 7;

  g_element_buffer_data[0] = 7;
  g_element_buffer_data[1] = 6;
  g_element_buffer_data[2] = 2;

  g_element_buffer_data[3] = 7;
  g_element_buffer_data[4] = 6;
  g_element_buffer_data[5] = 5;

  g_element_buffer_data[6] = 5;
  g_element_buffer_data[7] = 4;
  g_element_buffer_data[8] = 7;




  make_resources();
}

CubeAsset::~CubeAsset() {
  // TODO: do something nice here.
}

void CubeAsset::update() {
}

void CubeAsset::draw() {
//  std::cout << "x: " << bbox->getCentre()->getX() << "\ty: " << bbox->getCentre()->getY() << "\tz:" << bbox->getCentre()->getZ() << std::endl;
  GameAsset::draw();
}
