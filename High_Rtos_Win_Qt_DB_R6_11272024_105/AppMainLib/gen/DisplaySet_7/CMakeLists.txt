add_library(
    Gen_DisplaySet_7
    )

target_include_directories(
    Gen_DisplaySet_7
    PUBLIC
    .
    )

target_link_libraries(
    Gen_DisplaySet_7
    PUBLIC
    AppFxLib
    Data
    GenModel
    Gen_CommonGenCode
    )

target_sources(
    Gen_DisplaySet_7
    PRIVATE
    ScreenEnumerations.h
    ScreenExperssions.h
    ScreenIntegers.h
    Screen_6026.h
    Screen_6026.cpp
    Screen_6005.h
    Screen_6005.cpp
    Screen_6059.h
    Screen_6059.cpp
    Screen_6033.h
    Screen_6033.cpp
    Screen_6024.h
    Screen_6024.cpp
    Screen_6004.h
    Screen_6004.cpp
    Screen_6008.h
    Screen_6008.cpp
    Screen_7015.h
    Screen_7015.cpp
    Screen_6029.h
    Screen_6029.cpp
    Screen_6041.h
    Screen_6041.cpp
    Screen_6042.h
    Screen_6042.cpp
    Screen_6006.h
    Screen_6006.cpp
    Screen_7008.h
    Screen_7008.cpp
    Screen_6022.h
    Screen_6022.cpp
    Screen_6013.h
    Screen_6013.cpp
    Screen_6009.h
    Screen_6009.cpp
    Screen_6021.h
    Screen_6021.cpp
    Screen_6032.h
    Screen_6032.cpp
    Screen_6017.h
    Screen_6017.cpp
    Screen_7030.h
    Screen_7030.cpp
    Screen_7007.h
    Screen_7007.cpp
    Screen_7009.h
    Screen_7009.cpp
    Screen_6027.h
    Screen_6027.cpp
    Screen_6012.h
    Screen_6012.cpp
    Screen_6030.h
    Screen_6030.cpp
    Screen_7028.h
    Screen_7028.cpp
    Screen_6019.h
    Screen_6019.cpp
    Screen_6025.h
    Screen_6025.cpp
    Screen_6020.h
    Screen_6020.cpp
    Screen_6015.h
    Screen_6015.cpp
    Screen_8004.h
    Screen_8004.cpp
    Screen_6007.h
    Screen_6007.cpp
    Screen_7027.h
    Screen_7027.cpp
    Screen_7024.h
    Screen_7024.cpp
    Screen_7001.h
    Screen_7001.cpp
    Screen_6035.h
    Screen_6035.cpp
    Screen_6500.h
    Screen_6500.cpp
    Screen_7010.h
    Screen_7010.cpp
    Screen_6034.h
    Screen_6034.cpp
    Screen_7026.h
    Screen_7026.cpp
    Screen_6023.h
    Screen_6023.cpp
    Screen_6028.h
    Screen_6028.cpp
    Screen_6014.h
    Screen_6014.cpp
    Screen_7002.h
    Screen_7002.cpp
    Screen_6031.h
    Screen_6031.cpp
    Screen_7029.h
    Screen_7029.cpp
    Screen_7031.h
    Screen_7031.cpp
    Screen_6001.h
    Screen_6001.cpp
    GeneratedCode.h
    GeneratedCode.cpp
    WidgetData.h
    WidgetData.cpp
    )

