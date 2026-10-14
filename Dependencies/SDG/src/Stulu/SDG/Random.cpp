#include "st_pch.h"
#include "Random.h"

#include <random>

namespace SDG {

    int Random::getInt(int min, int max) {
        srand(std::random_device()());

        return min + rand() % (max + 1 - min);
    }
    float Random::getFloat(float min, float max) {
        srand(std::random_device()());

        float random = ((float)(rand()) / (float)(RAND_MAX));
        float distance = max - min;
        return min + distance * random;
    }
    glm::vec2 Random::getVector2(glm::vec2 min, glm::vec2 max) {
        return glm::vec2(getFloat(min.x,max.x), getFloat(min.y, max.y));
    }
    glm::vec3 Random::getVector3(glm::vec3 min, glm::vec3 max) {
        return glm::vec3(getFloat(min.x, max.x), getFloat(min.y, max.y), getFloat(min.z, max.z));
    }
    glm::vec4 Random::getVector4(glm::vec4 min, glm::vec4 max) {
        return glm::vec4(getFloat(min.x, max.x), getFloat(min.y, max.y), getFloat(min.z, max.z), getFloat(min.w, max.w));
    }
}

