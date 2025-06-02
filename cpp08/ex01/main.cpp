#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed random number generator
    srand(time(0));

    // Test 1: Basic functionality with small numbers
    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Test 1 - Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 1 - Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 1 - Error: " << e.what() << std::endl;
    }

    // Test 2: Attempt to add too many numbers
    try {
        Span sp(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // Should throw exception
    } catch (const std::exception& e) {
        std::cout << "Test 2 - Expected error: " << e.what() << std::endl;
    }

    // Test 3: Empty span
    try {
        Span sp(5);
        sp.shortestSpan();
    } catch (const std::exception& e) {
        std::cout << "Test 3 - Expected error: " << e.what() << std::endl;
    }

    // Test 4: Single number
    try {
        Span sp(5);
        sp.addNumber(42);
        sp.longestSpan();
    } catch (const std::exception& e) {
        std::cout << "Test 4 - Expected error: " << e.what() << std::endl;
    }

    // Test 5: Large number test (10000 numbers)
    try {
        Span sp(10000);
        for (int i = 0; i < 10000; ++i) {
            sp.addNumber(rand() % 1000000);
        }
        std::cout << "Test 5 - Large numbers shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 5 - Large numbers longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 5 - Error: " << e.what() << std::endl;
    }

    // Test 6: Duplicate numbers
    try {
        Span sp(5);
        sp.addNumber(10);
        sp.addNumber(10);
        sp.addNumber(10);
        std::cout << "Test 6 - Shortest span with duplicates: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 6 - Longest span with duplicates: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 6 - Error: " << e.what() << std::endl;
    }

    // Test 7: Negative numbers
    try {
        Span sp(5);
        sp.addNumber(-5);
        sp.addNumber(-10);
        sp.addNumber(0);
        sp.addNumber(5);
        std::cout << "Test 7 - Shortest span with negatives: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 7 - Longest span with negatives: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 7 - Error: " << e.what() << std::endl;
    }

    // Test 8: Copy constructor test
    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        
        Span sp_copy(sp); // Create copy
        sp_copy.addNumber(9); // Add to copy
        sp_copy.addNumber(11); // Add to copy
        
        std::cout << "Test 8 - Original shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 8 - Copy shortest span: " << sp_copy.shortestSpan() << std::endl;
        std::cout << "Test 8 - Original longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Test 8 - Copy longest span: " << sp_copy.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 8 - Error: " << e.what() << std::endl;
    }

    // Test 9: Assignment operator test
    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        
        Span sp_assigned(3); // Different max_size initially
        sp_assigned = sp; // Assign
        sp_assigned.addNumber(9); // Add to assigned object
        
        std::cout << "Test 9 - Original shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 9 - Assigned shortest span: " << sp_assigned.shortestSpan() << std::endl;
        std::cout << "Test 9 - Original longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Test 9 - Assigned longest span: " << sp_assigned.longestSpan() << std::endl;
        
        // Test self-assignment
        sp_assigned = sp_assigned;
        std::cout << "Test 9 - Self-assignment shortest span: " << sp_assigned.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 9 - Error: " << e.what() << std::endl;
    }

    return 0;
}
