cmake_minimum_required(VERSION 3.14.7)

include(Qt)

find_package(
    Qt5
    COMPONENTS REQUIRED Core Gui Widgets Qml QuickWidgets
)

function(ramp_add_prism_external_widget TARGET PREFIX)
    add_library(${TARGET} SHARED)

    if(CMAKE_SYSTEM_NAME STREQUAL QNX)
        add_definitions(-DPRISM_PLATFORM_QNX)
    endif()
    
    target_include_directories(
        ${TARGET}
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}../../PrismWidget/inc
        )

    target_link_libraries(
        ${TARGET}
        PRIVATE
        CoreWidgetLib
        PrismWidget
        Qt5::Widgets
        )

    target_sources(
        ${TARGET}
        PRIVATE
        src/${TARGET}.h
        src/${TARGET}.cpp
        )

if(CMAKE_SYSTEM_NAME STREQUAL Windows)
    install(
        TARGETS ${TARGET}
        RUNTIME DESTINATION ${RAMP_CMAKE_DATA_DRAWABLE}/${PREFIX}
    )
else()
    install(
        TARGETS ${TARGET}
        DESTINATION ${RAMP_CMAKE_DATA_DRAWABLE}/${PREFIX}
    )
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    file(GLOB LIB_FILES
        ${CMAKE_SOURCE_DIR}/AppFx/PrismTool/lib/${CMAKE_BUILD_TYPE}/*.dll
    )
else()
    file(GLOB LIB_FILES
        ${CMAKE_SOURCE_DIR}/AppFx/PrismTool/lib/${CMAKE_BUILD_TYPE}/*.so*
    )
endif()

install(
    FILES ${LIB_FILES}
    DESTINATION ${CMAKE_BINARY_DIR}/AppMainLib/
)

endfunction()
