# Distributed under the MIT License (See accompanying file /LICENSE)

set(SRC
    # Parser
    ${CMAKE_CURRENT_SOURCE_DIR}/Parser/QASM/Lexer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Parser/QASM/Parser.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Parser/qasm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Parser/tfc.cpp
    # Synthesis
    ${CMAKE_CURRENT_SOURCE_DIR}/Synthesis/xag/xag_synth.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Synthesis/transform_synth.cpp
    # Target
    ${CMAKE_CURRENT_SOURCE_DIR}/Target/Device.cpp
    # Utils
    ${CMAKE_CURRENT_SOURCE_DIR}/Utils/Visualization/string_utf8.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Utils/Classical/xag_optimize.cpp
)

target_sources(tweedledum PRIVATE ${SRC})
if(TWEEDLEDUM_PYBINDS)
    target_sources(_tweedledum PRIVATE ${SRC})
endif()
