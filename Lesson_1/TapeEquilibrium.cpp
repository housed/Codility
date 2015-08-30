#include <cmath>

using namespace std;

int solution(vector<int> &A) {
    if (A.size() == 1) {
        return A[0];   
    }
    
    if (A.size() == 2) {
        return abs(A[0] - A[1]);   
    }
    
    int left_sum = A[0], 
        right_sum = 0;
    for (unsigned i = 1; i < A.size(); i++) {
        right_sum += A[i];   
    }
    
    unsigned difference = 0, 
             minimal_difference = 9999;
    
    for (unsigned j = 1; j < A.size(); j++) {
        difference = abs(left_sum - right_sum);
        
        if (difference < minimal_difference) {
            minimal_difference = difference;   
        }
        
        left_sum += A[j];
        right_sum -= A[j];
    }
    
    return minimal_difference;
}
