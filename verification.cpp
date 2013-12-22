#define BOOST_TEST_MODULE hello_world
#include <boost/test/included/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>
#include <iostream>
using boost::test_tools::output_test_stream;

// forward declaration
void PrintHelloWorld();

BOOST_AUTO_TEST_SUITE(hello_world_suite)

// copied from stack overflow
struct cout_redirect {
    cout_redirect( std::streambuf * new_buffer )
        : old( std::cout.rdbuf( new_buffer ) )
    { }

    ~cout_redirect( ) {
        std::cout.rdbuf( old );
    }

private:
    std::streambuf * old;
};

BOOST_AUTO_TEST_CASE(output_is_hello_world) {

    output_test_stream output;
    {
    cout_redirect guard(output.rdbuf());
    PrintHelloWorld();
    }

    BOOST_CHECK_MESSAGE(output.is_equal("Hello World!"), "Output content is not equal to \"Hello World!\"");
}

BOOST_AUTO_TEST_SUITE_END()

