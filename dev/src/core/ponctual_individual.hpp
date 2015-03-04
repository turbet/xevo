/**
 * @author JeT
 * @date 03/03/2015
 */
#pragma once
#include "xevo.hpp"
#include "glm/glm.hpp"

namespace xevo {
    template<typename T> class PonctualIndividual;

    /**
     * @brief The PonctualIndividual class is an @see xevo::Individual with a 3D location
     */
    template <typename PositionType>
    class PonctualIndividual {
    public: PonctualIndividual();
    private : PositionType position; /**< position in Space */
        /** get the individual position */
    public: PositionType const& getPosition() const;
        /** set the individual position */
    public: PositionType const& setPosition(PositionType const&);
    };

    typedef PonctualIndividual<glm::vec3> PonctualIndividual3f;
    typedef PonctualIndividual<glm::vec4> PonctualIndividual4f;
    typedef PonctualIndividual<glm::dvec3> PonctualIndividual3d;
    typedef PonctualIndividual<glm::dvec4> PonctualIndividual4d;
}

/*****************************************************************//*
 * Implementation
 */
template <typename PositionType>
xevo::PonctualIndividual<PositionType>::PonctualIndividual() {
}

template <typename PositionType>
PositionType const& xevo::PonctualIndividual<PositionType>::getPosition() const {
    return this->position;
}

template <typename PositionType>
PositionType const& xevo::PonctualIndividual<PositionType>::setPosition(PositionType const& pos) {
    this->position = pos;
    return this->position;
}
