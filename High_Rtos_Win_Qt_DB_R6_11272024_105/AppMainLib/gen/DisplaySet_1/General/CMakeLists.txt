add_library(
    Gen_DisplaySet_1_General
    )

target_include_directories(
    Gen_DisplaySet_1_General
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_1_General
    PUBLIC
    AppFxLib
    Data
    GenModel
    )

