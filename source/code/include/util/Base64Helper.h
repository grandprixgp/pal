
/*--------------------------------------------------------------------------------
    Copyright (c) Microsoft Corporation.  All rights reserved. 
    
*/
/**
    \file      Base64Helper.h  

    \brief     Provides the definition for the Base64Helper class
    
    \date      04-18-12 12:20:41
    
*/
/*----------------------------------------------------------------------------*/

#ifndef BASE64HELPER_H
#define BASE64HELPER_H

#include <string>
#include <vector>

namespace util
{
    /*----------------------------------------------------------------------------*/
    /**
       This class provides Base64 encoding and decoding
                
       \date       04-18-12 12:20:36
       \author     ShivkS
    */
    class Base64Helper
    {
    public:
        Base64Helper() {};
        virtual ~Base64Helper() {};
                
        /*----------------------------------------------------------------------------*/
        /**
           Encode the input as a Base64 string
           \param [in] input Input stream to encode
           \param [out] encodedString The base64 encoded string
        */
        static void Encode(std::vector<unsigned char>& input, std::string& encodedString);

        /*----------------------------------------------------------------------------*/
        /**
           Decode the input string
           \param [in] encodedInput The base64 encoded input to decode
           \param [out] decodedOutput The decoded output
           \return True if the decoding was successful
        */
        static bool Decode(const std::string& encodedInput, std::vector<unsigned char>& decodedOutput);
                
    };
}

#endif /* BASE64HELPER_H */
/*----------------------------E-N-D---O-F---F-I-L-E---------------------------*/
