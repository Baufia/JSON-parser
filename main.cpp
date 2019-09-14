#include <iostream>
#include <any>

class JSON: {
private:

public:
    JSON(const std::string &s, bool isFile){
        if(isFile) {
            parseFile(s);
        }
        else {
            parse(s);
        }
    }

    bool isArray() const{
        if()
    }

    bool isObject() const {

    }

    std::any& operator[] (const std::string &key){

    }

    std::any& operator[] (int index){

    }

    static JSON parse (const std::string &s){
        bool isKey = false;
        
    }

    static JSON parseFile (const std::string & path){

    }
};

int main() {

    return 0;
}