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
Shader * m_Shader;
modelLoader * test;
Model * firstModel;
glm::mat4 position;
// remember don't create any variables here before the gl context is created
// otherwise you will get invalid memory access exception


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
	GLuint m_ColourLocation = glGetUniformLocation(m_Shader->m_ShaderID, "pColour");
	GLuint m_PositionLocation = glGetUniformLocation(m_Shader->m_ShaderID, "uPosition");
	// render
		// ------
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	// draw our first triangle
	glUseProgram(m_Shader->m_ShaderID);

	glUniformMatrix4fv(m_PositionLocation, 2, GL_FALSE, glm::value_ptr(position));
	glUniform4f(m_ColourLocation, 1, 0, 0, 1);
	glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
							//glDrawArrays(GL_TRIANGLES, 0, 6);
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	firstModel->Draw();
	// glBindVertexArray(0); // no need to unbind it every time 
}

void update() {

}

void onLoad() {
	m_Shader = new Shader("Simple.vert", "Simple.frag");
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);


	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	//Matrix4.CreateScale(0.1f) *Matrix4.CreateTranslation(0, 0, -5f) * Matrix4.CreateTranslation(3f, 4, -0.5f)
	position = glm::scale(glm::vec3(0.1f, 0.1f, 0.1f)) * glm::translate(glm::vec3(0,0,-5)) * glm::translate(glm::vec3(3,4,-0.5f));	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	
	glBindVertexArray(0);
	test = new modelLoader ("models/utah-teapot.obj");
	firstModel = new Model();
	firstModel->setModelLoader(test);
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
