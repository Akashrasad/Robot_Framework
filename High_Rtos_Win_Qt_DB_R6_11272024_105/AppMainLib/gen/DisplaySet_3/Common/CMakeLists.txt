add_library(
    Gen_DisplaySet_3_Common
    )

target_include_directories(
    Gen_DisplaySet_3_Common
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_3_Common
    PUBLIC
    AppFxLib
    Data
    GenModel
    HmiApp
    )

