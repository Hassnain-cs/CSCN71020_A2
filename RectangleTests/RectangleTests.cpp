#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Temporary function implementations for testing
int getPerimeter(int* length, int* width) {
    return 2 * (*length + *width);
}

int getArea(int* length, int* width) {
    return (*length) * (*width);
}

void setLength(int input, int* length) {
    // According to requirements, should only accept 1-99
    if (input >= 1 && input <= 99) {
        *length = input;
    }
}

void setWidth(int input, int* width) {
    // According to requirements, should only accept 1-99
    if (input >= 1 && input <= 99) {
        *width = input;
    }
}

namespace RectangleTests
{
    TEST_CLASS(RectangleTests)
    {
    public:

        // Task 1 Tests
        TEST_METHOD(Test_GetPerimeter_ValidInput_ReturnsCorrectValue)
        {
            // Arrange
            int length = 5;
            int width = 3;
            int expected = 16; // 2*(5+3) = 16

            // Act
            int actual = getPerimeter(&length, &width);

            // Assert
            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(Test_GetArea_ValidInput_ReturnsCorrectValue)
        {
            // Arrange
            int length = 5;
            int width = 3;
            int expected = 15; // 5*3 = 15

            // Act
            int actual = getArea(&length, &width);

            // Assert
            Assert::AreEqual(expected, actual);
        }

        // Task 2 Tests - setLength function
        TEST_METHOD(Test_SetLength_ValidMiddleValue_SetsCorrectly)
        {
            // Arrange
            int length = 0;
            int input = 50;

            // Act
            setLength(input, &length);

            // Assert
            Assert::AreEqual(input, length);
        }

        TEST_METHOD(Test_SetLength_ValidMinimumValue_SetsCorrectly)
        {
            // Arrange
            int length = 0;
            int input = 1; // Minimum allowed value

            // Act
            setLength(input, &length);

            // Assert
            Assert::AreEqual(input, length);
        }

        TEST_METHOD(Test_SetLength_ValidMaximumValue_SetsCorrectly)
        {
            // Arrange
            int length = 0;
            int input = 99; // Maximum allowed value

            // Act
            setLength(input, &length);

            // Assert
            Assert::AreEqual(input, length);
        }

        // Task 2 Tests - setWidth function
        TEST_METHOD(Test_SetWidth_ValidMiddleValue_SetsCorrectly)
        {
            // Arrange
            int width = 0;
            int input = 25;

            // Act
            setWidth(input, &width);

            // Assert
            Assert::AreEqual(input, width);
        }

        TEST_METHOD(Test_SetWidth_ValidMinimumValue_SetsCorrectly)
        {
            // Arrange
            int width = 0;
            int input = 1; // Minimum allowed value

            // Act
            setWidth(input, &width);

            // Assert
            Assert::AreEqual(input, width);
        }

        TEST_METHOD(Test_SetWidth_ValidMaximumValue_SetsCorrectly)
        {
            // Arrange
            int width = 0;
            int input = 99; // Maximum allowed value

            // Act
            setWidth(input, &width);

            // Assert
            Assert::AreEqual(input, width);
        }
    };
}