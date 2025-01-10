add_library(
    Gen_DisplaySet_4_General
    )

target_include_directories(
    Gen_DisplaySet_4_General
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_4_General
    PUBLIC
    AppFxLib
    Data
    GenModel
    HmiApp
    )

