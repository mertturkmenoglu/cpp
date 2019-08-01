cmake_minimum_required(VERSION 3.14)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

### Language Examples ###
### Advanced Examples ###
add_executable(E001_Exception src/examples/advanced/E001_Exception/main.cpp)
add_executable(E002_ImplicitConversion src/examples/advanced/E002_ImplicitConversion/main.cpp)
add_executable(E003_LambdaFunctions src/examples/advanced/E003_LambdaFunctions/main.cpp)
add_executable(E004_Threads src/examples/advanced/E004_Threads/main.cpp)
add_executable(E005_Time src/examples/advanced/E005_Time/main.cpp)
add_executable(E006_Sorting src/examples/advanced/E006_Sorting/main.cpp)



### File IO Examples ###
add_executable(E001_FileIO src/examples/fileIO/E001_FileIO/main.cpp)
add_executable(E002_FileIO src/examples/fileIO/E002_FileIO/main.cpp)



### OOP examples ###
add_executable(E001_OOP src/examples/oop/E001_OOP/main.cpp)
add_executable(E002_FriendFunction src/examples/oop/E002_FriendFunction/main.cpp)
add_executable(E003_Inheritance src/examples/oop/E003_Inheritance/main.cpp)
add_executable(E004_Inheritance src/examples/oop/E004_Inheritance/main.cpp)
add_executable(E005_Inheritance src/examples/oop/E005_Inheritance/main.cpp)
add_executable(E006_Inheritance src/examples/oop/E006_Inheritance/main.cpp)
add_executable(E007_Aggregation src/examples/oop/E007_Aggregation/main.cpp)
add_executable(E008_Polymorphism src/examples/oop/E008_Polymorphism/main.cpp)
add_executable(E009_Overloading src/examples/oop/E009_Overloading/main.cpp)
add_executable(E010_Overloading src/examples/oop/E010_Overloading/main.cpp)
add_executable(E011_FriendFunction src/examples/oop/E011_FriendFunction/main.cpp)
add_executable(E012_Template src/examples/oop/E012_Template/main.cpp)
add_executable(E013_Template src/examples/oop/E013_Template/main.cpp)
add_executable(E014_Namespace src/examples/oop/E014_Namespace/main.cpp)
add_executable(E015_AbstractClass src/examples/oop/E015_AbstractClass/main.cpp)
add_executable(E016_VirtualFunction src/examples/oop/E016_VirtualFunction/main.cpp)
add_executable(E017_ObjectCreating src/examples/oop/E017_ObjectCreating/main.cpp)
add_executable(E018_OperatorOverloading src/examples/oop/E018_OperatorOverloading/main.cpp)
add_executable(E019_OperatorOverloading src/examples/oop/E019_OperatorOverloading/main.cpp)
add_executable(E020_OperatorOverloading src/examples/oop/E020_OperatorOverloading/main.cpp)
add_executable(E021_OperatorOverloading src/examples/oop/E021_OperatorOverloading/main.cpp)
add_executable(E022_OperatorOverloading src/examples/oop/E022_OperatorOverloading/main.cpp)
add_executable(E023_OperatorOverloading src/examples/oop/E023_OperatorOverloading/main.cpp)
add_executable(E024_OperatorOverloading src/examples/oop/E024_OperatorOverloading/main.cpp)
add_executable(E025_Templates src/examples/oop/E025_Templates/main.cpp)



### Other Examples ###
add_executable(E001_Swap src/examples/other/E001_Swap/main.cpp)
add_executable(E002_String src/examples/other/E002_String/stringConcat.cpp)
add_executable(E002_String_2 src/examples/other/E002_String/stringSort.cpp)
add_executable(E003_Vector src/examples/other/E003_Vector/main.cpp)
add_executable(E004_String src/examples/other/E004_String/main.cpp)
add_executable(E005_Const src/examples/other/E005_Const/main.cpp)



### Pointer & Reference Examples ###
add_executable(E001_Reference src/examples/pointers/E001_Reference/main.cpp)
add_executable(E033_Reference src/examples/pointers/E002_Reference/main.cpp)
add_executable(E003_SmartPointers src/examples/pointers/E003_SmartPointers/main.cpp)
add_executable(E004_FunctionPointers src/examples/pointers/E004_FunctionPointers/main.cpp)
add_executable(E005_SmartPointers src/examples/pointers/E005_SmartPointers/main.cpp)
add_executable(E006_UniquePointer src/examples/pointers/E006_UniquePointer/main.cpp)



### Coding practices
add_executable(P001_MinMax src/practice/P001_MinMax/main.cpp)
add_executable(P002_MergeSort src/practice/P002_MergeSort/main.cpp)
add_executable(P003_Stack src/practice/P003_Stack/main.cpp)
add_executable(P004_QuickSort src/practice/P004_QuickSort/main.cpp)
add_executable(P005_Matrix src/practice/P005_Matrix/main.cpp)
add_executable(P006_MemoryAllocation src/practice/P006_MemoryAllocation/main.cpp)
add_executable(P007_ArraySize src/practice/P007_ArraySize/main.cpp)
add_executable(P008_StringTokenizing src/practice/P008_StringTokenizing/main.cpp)
add_executable(P009_ReverseWords src/practice/P009_ReverseWords/main.cpp)
add_executable(P010_Practice src/practice/P010_Practice/main.cpp)



### STL Examples ###
### Non-Modifying Algorithm Examples ###
add_executable(E001_AllOf src/stl/algorithm/NonModifying/E001_AllOf/main.cpp)
add_executable(E002_AdjacentFind src/stl/algorithm/NonModifying/E002_AdjacentFind/main.cpp)
add_executable(E003_AnyOf src/stl/algorithm/NonModifying/E003_AnyOf/main.cpp)
add_executable(E004_NoneOf src/stl/algorithm/NonModifying/E004_NoneOf/main.cpp)
add_executable(E005_ForEach src/stl/algorithm/NonModifying/E005_ForEach/main.cpp)
add_executable(E006_Find src/stl/algorithm/NonModifying/E006_Find/main.cpp)
add_executable(E007_FindIf src/stl/algorithm/NonModifying/E007_FindIf/main.cpp)
add_executable(E008_FindIfNot src/stl/algorithm/NonModifying/E008_FindIfNot/main.cpp)
add_executable(E009_FindEnd src/stl/algorithm/NonModifying/E009_FindEnd/main.cpp)
add_executable(E010_FindFirstOf src/stl/algorithm/NonModifying/E010_FindFirstOf/main.cpp)
add_executable(E011_Count src/stl/algorithm/NonModifying/E011_Count/main.cpp)
add_executable(E012_CountIf src/stl/algorithm/NonModifying/E012_CountIf/main.cpp)
add_executable(E013_Mismatch src/stl/algorithm/NonModifying/E013_Mismatch/main.cpp)
add_executable(E014_Equal src/stl/algorithm/NonModifying/E014_Equal/main.cpp)
add_executable(E015_IsPermutation src/stl/algorithm/NonModifying/E015_IsPermutation/main.cpp)
add_executable(E016_Search src/stl/algorithm/NonModifying/E016_Search/main.cpp)
add_executable(E017_SearchN src/stl/algorithm/NonModifying/E017_SearchN/main.cpp)



### Modifying Algorithm Examples ###
add_executable(E001_Copy src/stl/algorithm/Modifying/E001_Copy/main.cpp)
add_executable(E002_CopyN src/stl/algorithm/Modifying/E002_CopyN/main.cpp)
add_executable(E003_CopyIf src/stl/algorithm/Modifying/E003_CopyIf/main.cpp)
add_executable(E004_CopyBackWard src/stl/algorithm/Modifying/E004_CopyBackward/main.cpp)
add_executable(E005_Move src/stl/algorithm/Modifying/E005_Move/main.cpp)
add_executable(E006_MoveBackward src/stl/algorithm/Modifying/E006_MoveBackward/main.cpp)
add_executable(E007_Swap src/stl/algorithm/Modifying/E007_Swap/main.cpp)
add_executable(E008_SwapRanges src/stl/algorithm/Modifying/E008_SwapRanges/main.cpp)
add_executable(E009_IterSwap src/stl/algorithm/Modifying/E009_IterSwap/main.cpp)
add_executable(E010_Transform src/stl/algorithm/Modifying/E010_Transform/main.cpp)
add_executable(E011_Replace src/stl/algorithm/Modifying/E011_Replace/main.cpp)
add_executable(E012_ReplaceIf src/stl/algorithm/Modifying/E012_ReplaceIf/main.cpp)
add_executable(E013_ReplaceCopy src/stl/algorithm/Modifying/E013_ReplaceCopy/main.cpp)
add_executable(E014_ReplaceCopyIf src/stl/algorithm/Modifying/E014_ReplaceCopyIf/main.cpp)
add_executable(E015_Fill src/stl/algorithm/Modifying/E015_Fill/main.cpp)
add_executable(E016_FillN src/stl/algorithm/Modifying/E016_FillN/main.cpp)
add_executable(E017_Generate src/stl/algorithm/Modifying/E017_Generate/main.cpp)
add_executable(E018_GenerateN src/stl/algorithm/Modifying/E018_GenerateN/main.cpp)
add_executable(E019_Remove src/stl/algorithm/Modifying/E019_Remove/main.cpp)