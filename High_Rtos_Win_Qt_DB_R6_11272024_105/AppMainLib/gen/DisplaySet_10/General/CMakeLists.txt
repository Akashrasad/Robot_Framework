add_library(
    Gen_DisplaySet_10_General
    )

target_include_directories(
    Gen_DisplaySet_10_General
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_10_General
    PUBLIC
    AppFxLib
    Data
    GenModel
    )

