Written mostly for binary osu! databases. Can, however, be also used for other stuff. The string function might not work then though.


#Usage
###Implement haeders

    #include "../Binary-Reader/BinaryReader.hpp"
    #include "../Binary-Reader/file_stream.hpp" //To use it for files
The library also allows to easily add support for different types of data like a vector. 
###Create reader

    BinaryReader<data_type> reader(arguments_for_construction_of_data_type);
    BinaryReader<file_stream> reader("osu_replay.osr", std::ios::in | std::ios::binary);    //Any arguments that initialise an ifstream
    
###Read stuff

    int32_t v1 = reader.read_int32();
    int64_t v2 = reader.read_int64();
    std:.string str = reader.read_string();
    bool b = reader.read_type<bool>();
    
