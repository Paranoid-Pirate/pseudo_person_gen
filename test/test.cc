#include <iostream>
#include <chrono>
#include <random>
#include <vector>


    int randomNumGen(const int MAX_NUM, const int MIN_NUM){
        std::random_device rd;
        std::mt19937::result_type seed = rd() ^ (
            (std::mt19937::result_type)
            std::chrono::duration_cast<std::chrono::seconds>(
                std::chrono::system_clock::now().time_since_epoch()
                ).count() +
            (std::mt19937::result_type)
            std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::high_resolution_clock::now().time_since_epoch()
                ).count() );
        std::mt19937 gen(seed);
        std::uniform_int_distribution<unsigned> distrib(MIN_NUM, MAX_NUM);
        return distrib(gen);
    }
    std::string getRandomElement(std::vector <std::string> array){
        const int maxnum = array.size() - 1;
        const int minum = 0;
        std::string randomoutput = array[static_cast<std::size_t>(randomNumGen(maxnum, minum))];
        return randomoutput;
    }

class NameGen{
    private:
    std::vector <std::string> maleFirstNames {"Dave","Dave2","dave3","dave4",};
    std::vector <std::string> maleLastNames {"James","James2","James3","james4",};
    std::vector <std::string> femaleFirstnames {"Jane1", "Jane2", "Jane3", "jane4"};
    std::vector <std::string> femaleLastNames {"Janes1", "Janes2", "Janes3", "Janes4"};
    public:
    std::string nameGenerator(bool maleOrFemale){
        std::string fullname;
        if (maleOrFemale == true){
            return fullname = getRandomElement(maleFirstNames) + " " + getRandomElement(maleLastNames);
        } else {
            return fullname = getRandomElement(femaleFirstnames) + " " + getRandomElement(femaleLastNames);
        }
    }
};

int main(){
    NameGen nmgen;
    std::cout<<nmgen.nameGenerator(true)<<std::endl;
}