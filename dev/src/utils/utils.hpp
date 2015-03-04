/**
 * @date 03/03/2015
 */
#pragma once

#include <glm/vec3.hpp>
#include <glm/vec4.hpp>

double const DEFAULT_FLOAT_EPSILON = 1e-7;
double const DEFAULT_DOUBLE_EPSILON = 1e-4;

/**
 * @brief operator << display @see glm::vec3 on output stream
 * @param out output stream
 * @param vec vector to display
 * @return the output stream
 */
std::ostream &operator<< (std::ostream &out, const glm::vec3 &vec);

/**
 * @brief operator << display @see glm::vec4 on output stream
 * @param out output stream
 * @param vec vector to display
 * @return the output stream
 */
std::ostream &operator<< (std::ostream &out, const glm::vec4 &vec);

/**
 * @brief operator == vec3 comparison function
 * @param vecA vector to compare
 * @param vecB vector to compare to
 * @param epsilon epsilon value used for comparison
 * @return \em TRUE if all vector components absolute difference is less than epsilon
 */
bool compare(const glm::vec3 &vecA, const glm::vec3 &vecB, float const epsilon = DEFAULT_FLOAT_EPSILON);

/**
 * @brief operator == vec4 comparison function
 * @param vecA vector to compare
 * @param vecB vector to compare to
 * @param epsilon epsilon value used for comparison
 * @return \em TRUE if all vector components absolute difference is less than epsilon
 */
bool compare(const glm::vec4 &vecA, const glm::vec4 &vecB, float const epsilon = DEFAULT_FLOAT_EPSILON);

/**
 * @brief operator == dvec3 comparison function
 * @param vecA vector to compare
 * @param vecB vector to compare to
 * @param epsilon epsilon value used for comparison
 * @return \em TRUE if all vector components absolute difference is less than epsilon
 */
bool compare(const glm::dvec3 &vecA, const glm::dvec3 &vecB, double const epsilon = DEFAULT_DOUBLE_EPSILON);

/**
 * @brief operator == dvec4 comparison function
 * @param vecA vector to compare
 * @param vecB vector to compare to
 * @param epsilon epsilon value used for comparison
 * @return \em TRUE if all vector components absolute difference is less than epsilon
 */
bool compare(const glm::dvec4 &vecA, const glm::dvec4 &vecB, double const epsilon = DEFAULT_DOUBLE_EPSILON);
