#include "game.h"
#include "Shader.h"
#include "Connection.h"
#include "modelLoader.h"
#include "Model.h"
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/transform.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "objLoader.h"
#include <vector>
Shader * m_Shader;
modelLoader * test;
Model * firstModel;
glm::mat4 position;
double lastTime;
int nbFrames = 0;
GLuint MatrixID;
GLuint ViewMatrixID;
GLuint ModelMatrixID;
// remember don't create any variables here before the gl context is created
// otherwise you will get invalid memory access exception
vector<GLuint*> bufferHolder;
/*Camera Constants*/
// Initial position : on +Z
glm::vec3 position = glm::vec3(0, 0, 5);
// Initial horizontal angle : toward -Z
float horizontalAngle = 3.14f;
// Initial vertical angle : none
float verticalAngle = 0.0f;
// Initial Field of View
float initialFoV = 45.0f;

float speed = 3.0f; // 3 units / second
float mouseSpeed = 0.005f;
/*End of Camera Constants*/
// set up vertex data (and buffer(s)) and configure vertex attributes
// ------------------------------------------------------------------
float vertices[] = {
	0.5f,  0.5f, 0.0f,  // top right
	0.5f, -0.5f, 0.0f,  // bottom right
	-0.5f, -0.5f, 0.0f,  // bottom left
	-0.5f,  0.5f, 0.0f   // top left 
};
unsigned int indices[] = {  // note that we start from 0!
	0, 1, 3,  // first Triangle
	1, 2, 3   // second Triangle
};
unsigned int VBO, VAO, EBO;


void draw() {
	// Measure speed
	double currentTime = glfwGetTime();
	nbFrames++;
	if (currentTime - lastTime >= 1.0) { // If last prinf() was more than 1sec ago
										 // printf and reset
		printf("%f ms/frame\n", 1000.0 / double(nbFrames));
		nbFrames = 0;
		lastTime += 1.0;
	}
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Use our shader
	glUseProgram(m_Shader->m_ShaderID);

	// Compute the MVP matrix from keyboard and mouse input
	
	glm::mat4 ProjectionMatrix = getProjectionMatrix();
	glm::mat4 ViewMatrix = getViewMatrix();
	glm::mat4 ModelMatrix = glm::mat4(1.0);
	glm::mat4 MVP = ProjectionMatrix * ViewMatrix * ModelMatrix;
	// Index buffer
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, *bufferHolder[1]);
	// Draw the triangles !
	glDrawElements(
		GL_TRIANGLES,      // mode
		indices.size(),    // count
		GL_UNSIGNED_SHORT,   // type
		(void*)0           // element array buffer offset
	);
}

void update() {

}

void onLoad() {
	m_Shader = new Shader("Simple.vert", "Simple.frag");
	objl::Loader loader;
	loader.LoadFile("models/utah-teapot.obj");
	for (int x = 0; x < loader.LoadedMeshes.size(); x++) {
		objl::Mesh curMesh = loader.LoadedMeshes[x];
		GLuint * holder = new GLuint[2];
		glGenBuffers(2, holder);
		bufferHolder.push_back(&holder[0]);
		bufferHolder.push_back(&holder[1]);
		glBindBuffer(GL_ARRAY_BUFFER, *bufferHolder[0]);
		glBufferData(GL_ARRAY_BUFFER, curMesh.Vertices.size() * sizeof(glm::vec3), &curMesh.Vertices[0], GL_STATIC_DRAW);
		
		// element buffer
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, *bufferHolder[1]);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, curMesh.Indices.size() * sizeof(unsigned int), &curMesh.Indices[0], GL_STATIC_DRAW);

		glEnableVertexAttribArray(1);
		// 1rst attribute buffer : vertices
		glEnableVertexAttribArray(1);
		glBindBuffer(GL_ARRAY_BUFFER, *bufferHolder[0]);
		glVertexAttribPointer(
			0,                  // attribute
			3,                  // size
			GL_FLOAT,           // type
			GL_FALSE,           // normalized?
			0,                  // stride
			(void*)0            // array buffer offset
		);

	}
	
	ModelMatrixID = glGetUniformLocation(m_Shader->m_ShaderID, "M");
	ViewMatrixID = glGetUniformLocation(m_Shader->m_ShaderID, "V");
	ModelMatrixID = glGetUniformLocation(m_Shader->m_ShaderID, "M");

	lastTime = glfwGetTime();
}

void unLoad() {
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
}

void sendOpinion()
{
	Connection * m_connection = new Connection();
	delete m_connection;
}

void getAnswer()
{
}
