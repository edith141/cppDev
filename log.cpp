#include <iostream>

class Log
{

public:
    enum logLevel
    {
        logLevelAll = 0, 
        logLevelWarnings, 
        logLevelErrors
    };

private:
    logLevel m_logLevel;

public:
// constructors
    Log()
    {
        m_logLevel = logLevelAll;
    };

    Log(logLevel level)
    {
        m_logLevel = level;
    };

    // m_logLevel = 1;

    // m_logLevel = logLevelAll;

public:
    void warn(char* msg) 
    {
        if (m_logLevel <= logLevelWarnings) 
            std::cout << "[WARNING]: " << msg << std::endl;
    }

    void error(char* msg) 
    {
        if (m_logLevel <= logLevelErrors) 
            std::cout << "[ERROR]: " << msg << std::endl;
    }

    void log(char* msg) 
    {
        if (m_logLevel <= logLevelAll) 
            std::cout << msg << std::endl;
    }

    void setLogLevel(logLevel logLevel)
    {
        m_logLevel = logLevel;
    }
};

int score = 10;

int main() 
{
    Log logger;
    logger.setLogLevel(logger.logLevelAll);
    logger.warn("this is a warining");
    logger.error("error");
    logger.log("log");
    // int b;
    // int score = 11;
    std::cout << "\n" << score << std::endl;
    // std::cin >> b;
    // std::cout << b;
}
