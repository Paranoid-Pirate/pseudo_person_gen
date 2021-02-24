#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <iterator>
#include <algorithm>
#pragma once

class PersonGenerator
{
    protected:
    static void shuffleArray(std::vector<std::string>& array)
    {
        int n, i;
        n = array.size();
        for (i = n-1; i > 0; --i) {
        std::swap(array[i], array[std::rand() % (i+1)]);
        }
    }
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
    public:
};
