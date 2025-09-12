# Distributed under the MIT License (See accompanying file /LICENSE)

set(SRC
    # Synthesis
    ${CMAKE_CURRENT_SOURCE_DIR}/Synthesis/xag/xag_synth.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Synthesis/transform_synth.cpp
    # Utils
    ${CMAKE_CURRENT_SOURCE_DIR}/Utils/Visualization/string_utf8.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Utils/Classical/xag_optimize.cpp
)

target_sources(tweedledum PRIVATE ${SRC})
