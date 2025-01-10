add_library(
    Gen_DisplaySet_9_General
    )

target_include_directories(
    Gen_DisplaySet_9_General
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_9_General
    PUBLIC
    AppFxLib
    Data
    GenModel
    )

