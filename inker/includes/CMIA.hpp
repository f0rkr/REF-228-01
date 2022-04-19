#pragma once

# include <iostream>

/**
 * @brief Fourty two namespace
 */
namespace ft {
    /**
     * @brief Command line interface arguments class
     * Parse all command line arguments
     */
    class CMIA {
        private:
            std::string     _hostName;

        public:
            CMIA(void) {};
            CMIA(const CMIA &) {};
            ~CMIA(void) {}

            
            std::string getHostName( void ) { return (_hostName);};
    };
}