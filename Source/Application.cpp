#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    gladLoadGL();

    std::cout << glGetString(GL_VERSION) << std::endl;

    float positions[6] =
    {
        // Cartesian plan coordinates to our triangle
        -0.5f, -0.5f, // bottom left corner
         0.0f,  0.5f, // middle top corner
         0.5f, -0.5f  // bottom right corner
    };

    unsigned int buffer;

    // Creates a buffer and stores it in the before declarated variable "buffer".
    glGenBuffers(1, &buffer);

    // Bind is basically: select this specific buffer, buffer beign a previously generated buffer.
    glBindBuffer(GL_ARRAY_BUFFER, buffer);

    // Here we put the actual data to a triangle in our previously created buffer
    // LINK: https://docs.gl/gl4/glBufferData
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glDrawArrays(GL_TRIANGLES, 0, 3);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}