#include <iostream>

#include "core/ponctual_individual.hpp"
#include "utils/utils.hpp"
using namespace std;
using namespace xevo;
using namespace glm;

int const ERROR = 1;
int const OK = 0;

int testConstPosition3f() {
    PonctualIndividual3f p;
    vec3 const &pos_ref= p.getPosition();
    vec3 pos = p.getPosition();
    p.setPosition( vec3(1.,1.,1.) );
    if ( !compare(pos_ref, p.getPosition()) ) return ERROR;
    if ( compare(pos, p.getPosition()) ) return ERROR;
    return OK;
}

int testConstPosition4f() {
    PonctualIndividual4f p;
    vec4 const &pos_ref= p.getPosition();
    vec4 pos = p.getPosition();
    p.setPosition( vec4(1.,1.,1.,1.) );
    if ( !compare(pos_ref, p.getPosition()) ) return ERROR;
    if ( compare(pos, p.getPosition()) ) return ERROR;
    return OK;
}

int testConstPosition3d() {
    PonctualIndividual3d p;
    dvec3 const &pos_ref= p.getPosition();
    dvec3 pos = p.getPosition();
    p.setPosition( dvec3(1.,1.,1.) );
    if ( !compare(pos_ref, p.getPosition()) ) return ERROR;
    if ( compare(pos, p.getPosition()) ) return ERROR;
    return OK;
}

int testConstPosition4d() {
    PonctualIndividual4d p;
    dvec4 const &pos_ref= p.getPosition();
    dvec4 pos = p.getPosition();
    p.setPosition( dvec4(1.,1.,1.,1.) );
    if ( !compare(pos_ref, p.getPosition()) ) return ERROR;
    if ( compare(pos, p.getPosition()) ) return ERROR;
    return OK;
}

int main (int , char *[]) {
    if ( testConstPosition3f() == ERROR ) return ERROR;
    if ( testConstPosition4f() == ERROR ) return ERROR;
    if ( testConstPosition3d() == ERROR ) return ERROR;
    if ( testConstPosition4d() == ERROR ) return ERROR;
    return OK;
}
