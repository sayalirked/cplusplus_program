#include "vect_add_one.h"

int IncrementandComputeVectorSum(vector<int> v){
    int total=0;
    AddOnetoEach(v);
    for (auto i:v){
        total+=i;
    }
    return total;
}