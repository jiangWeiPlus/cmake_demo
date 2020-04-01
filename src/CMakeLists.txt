project(main)

add_subdirectory(module1) 
add_subdirectory(dynamic_module)

include_directories(dynamic_module) 
include_directories(./module1)

link_directories(dynamic_module) 

aux_source_directory(. cur_src)

add_executable(a.out ${cur_src})

target_link_libraries(a.out module1 dy)

