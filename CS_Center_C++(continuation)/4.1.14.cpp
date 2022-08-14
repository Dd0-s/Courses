#include <string>
#include <sstream>
#include <exception>

struct bad_from_string : std::exception 
{ 
    bad_from_string(char const * s) : msg(s) {}
    char const * what() const noexcept { return msg.c_str(); }
    std::string msg;
};

template<class T>
T from_string(std::string const& s)
{
    std::istringstream is(s);
    
    is.exceptions(std::istringstream::failbit | std::istringstream::badbit);
    
    is >> std::noskipws;
    
    T t;
    try 
    {
        is >> t;
    } 
    catch (std::istringstream::failure & f)
    {
        throw bad_from_string(f.what());
    }
    try
    {
        char c = 0;
        is >> c;  
    } 
    catch (std::istringstream::failure & f)
    {
        return t;
    }
    throw bad_from_string("Conversion error");
}
