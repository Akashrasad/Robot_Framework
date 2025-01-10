add_library(
    Gen_DisplaySet_7_General
    )

target_include_directories(
    Gen_DisplaySet_7_General
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_7_General
    PUBLIC
    AppFxLib
    Data
    GenModel
    )

