add_library(
    Gen_DisplaySet_2_General
    )

target_include_directories(
    Gen_DisplaySet_2_General
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_2_General
    PUBLIC
    AppFxLib
    Data
    GenModel
    )

