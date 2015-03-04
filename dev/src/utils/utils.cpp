/**
 * @author JeT
 * @date 03/03/2015
 */

#include <iostream>
#include <cmath>
#include "utils.hpp"

/**
 * display vec3
 */
std::ostream &operator<< (std::ostream & out, glm::vec3 const& vec) {
    out << "("
        << vec.x << " " << vec.y << " " << vec.z
        << ")";

    return out;
}

/**
 * display vec4
 */
std::ostream &operator<< (std::ostream &out, glm::vec4 const& vec) {
    out << "("
        << vec.x << "," << vec.y << "," << vec.z << "," << vec.w
        << ")";

    return out;
}

/**
 * vec3 equal function
 */
bool compare(const glm::vec3 &vecA, const glm::vec3 &vecB, float const epsilon) {
   return    (fabs(vecA[0] -vecB[0]) < epsilon) && (fabs(vecA[1] -vecB[1]) < epsilon) && (fabs(vecA[2] -vecB[2]) < epsilon);
}

/**
 * vec4 equal function
 */
bool compare(const glm::vec4 &vecA, const glm::vec4 &vecB, float const epsilon) {
   return    (fabs(vecA[0] -vecB[0]) < epsilon) && (fabs(vecA[1] -vecB[1]) < epsilon) && (fabs(vecA[2] -vecB[2]) < epsilon) && (fabs(vecA[3] -vecB[3]) < epsilon);
}

/**
 * dvec3 equal function
 */
bool compare(const glm::dvec3 &vecA, const glm::dvec3 &vecB, double const epsilon) {
   return    (fabs(vecA[0] -vecB[0]) < epsilon) && (fabs(vecA[1] -vecB[1]) < epsilon) && (fabs(vecA[2] -vecB[2]) < epsilon);
}

/**
 * dvec4 equal function
 */
bool compare(const glm::dvec4 &vecA, const glm::dvec4 &vecB, double const epsilon) {
   return    (fabs(vecA[0] -vecB[0]) < epsilon) && (fabs(vecA[1] -vecB[1]) < epsilon) && (fabs(vecA[2] -vecB[2]) < epsilon) && (fabs(vecA[3] -vecB[3]) < epsilon);
}
