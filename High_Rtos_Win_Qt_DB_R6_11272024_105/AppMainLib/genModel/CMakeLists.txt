add_library(GenModel)

target_include_directories(
    GenModel
    PUBLIC
    .
    )

target_link_libraries(
    GenModel
    PUBLIC
    ScreenBinding
    )

target_sources(
    GenModel
    PUBLIC
    DataPool.h
    ModelEvents.h
    )

target_sources(
    GenModel
    PRIVATE
    DataPool.cpp
    )
