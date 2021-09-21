#include <iostream>
#include <cmath>
#include <stdlib.h>

float approx_pi(int num){
    float in_circle = 0;

    for(int i = 0; i<num; i++){
        float x = ((double)rand() / RAND_MAX);
        float y = ((double)rand() / RAND_MAX);
        float dist = x*x + y*y;

        in_circle = dist <= 1 ? in_circle+1 : in_circle;
    }
    return 4 * in_circle/num;
}

int main(){
    int k = 1;
    float pi = approx_pi(pow(10, k));
    std::cout << pi << std::endl;

    return 0;
}