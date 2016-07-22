Written mostly for binary osu! databases. Can, however, be also used for other stuff. The string function might not work then though.


#Usage
Create reader

    BinaryReader<file_stream> reader(file, std::ios::in | std::ios::binary);
    
Read stuff

    int32_t v1 = reader.read_int32();
    int64_t v2 = reader.read_int64();
    std:.string str = reader.read_string();
    bool b = reader.read_type<bool>();
    
