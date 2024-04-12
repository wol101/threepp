#ifndef THREEPP_clipping_planes_vertex_HPP
#define THREEPP_clipping_planes_vertex_HPP

namespace threepp::shaders::shaderchunk {

const char* clipping_planes_vertex=R"(
#if NUM_CLIPPING_PLANES > 0

	vClipPosition = - mvPosition.xyz;

#endif

)";

}


#endif
