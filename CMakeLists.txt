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
add_executable(E003_VectorContainer src/examples/other/E003_VectorContainer/main.cpp)
add_executable(E004_String src/examples/other/E004_String/main.cpp)
add_executable(E005_Const src/examples/other/E005_Const/main.cpp)
add_executable(E006_DynamicCast src/examples/other/E006_DynamicCast/main.cpp)



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
add_executable(E018_LexicographicalCompare src/stl/algorithm/NonModifying/E018_LexicographicalCompare/main.cpp)



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
add_executable(E020_RemoveIf src/stl/algorithm/Modifying/E020_RemoveIf/main.cpp)
add_executable(E021_RemoveCopy src/stl/algorithm/Modifying/E021_RemoveCopy/main.cpp)
add_executable(E022_RemoveCopyIf src/stl/algorithm/Modifying/E022_RemoveCopyIf/main.cpp)
add_executable(E023_Unique src/stl/algorithm/Modifying/E023_Unique/main.cpp)
add_executable(E024_UniqueCopy src/stl/algorithm/Modifying/E024_UniqueCopy/main.cpp)
add_executable(E025_Reverse src/stl/algorithm/Modifying/E025_Reverse/main.cpp)
add_executable(E026_ReverseCopy src/stl/algorithm/Modifying/E026_ReverseCopy/main.cpp)
add_executable(E027_Rotate src/stl/algorithm/Modifying/E027_Rotate/main.cpp)
add_executable(E028_RotateCopy src/stl/algorithm/Modifying/E028_RotateCopy/main.cpp)
add_executable(E029_Shuffle src/stl/algorithm/Modifying/E029_Shuffle/main.cpp)



### Partition Algorithm Examples ###
add_executable(E001_IsPartitioned src/stl/algorithm/Partition/E001_IsPartitioned/main.cpp)
add_executable(E002_Partition src/stl/algorithm/Partition/E002_Partition/main.cpp)
add_executable(E003_StablePartition src/stl/algorithm/Partition/E003_StablePartition/main.cpp)
add_executable(E004_PartitionCopy src/stl/algorithm/Partition/E004_PartitionCopy/main.cpp)
add_executable(E005_PartitionPoint src/stl/algorithm/Partition/E005_PartitionPoint/main.cpp)



### Sorting Algorithm Examples ###
add_executable(E001_Sort src/stl/algorithm/Sorting/E001_Sort/main.cpp)
add_executable(E002_StableSort src/stl/algorithm/Sorting/E002_StableSort/main.cpp)
add_executable(E003_PartialSort src/stl/algorithm/Sorting/E003_PartialSort/main.cpp)
add_executable(E004_PartialSortCopy src/stl/algorithm/Sorting/E004_PartialSortCopy/main.cpp)
add_executable(E006_IsSortedUntil src/stl/algorithm/Sorting/E006_IsSortedUntil/main.cpp)
add_executable(E007_NthElement src/stl/algorithm/Sorting/E007_NthElement/main.cpp)



### Binary Search Algorithm Examples ###
add_executable(E001_LowerBound src/stl/algorithm/BinarySearch/E001_LowerBound/main.cpp)
add_executable(E002_UpperBound src/stl/algorithm/BinarySearch/E002_UpperBound/main.cpp)
add_executable(E003_EqualRange src/stl/algorithm/BinarySearch/E003_EqualRange/main.cpp)
add_executable(E004_BinarySearch src/stl/algorithm/BinarySearch/E004_BinarySearch/main.cpp)



### Merge Algorithm Examples ###
add_executable(E001_Merge src/stl/algorithm/Merge/E001_Merge/main.cpp)
add_executable(E002_InplaceMerge src/stl/algorithm/Merge/E002_InplaceMerge/main.cpp)
add_executable(E003_Includes src/stl/algorithm/Merge/E003_Includes/main.cpp)
add_executable(E004_SetUnion src/stl/algorithm/Merge/E004_SetUnion/main.cpp)
add_executable(E005_SetIntersection src/stl/algorithm/Merge/E005_SetIntersection/main.cpp)
add_executable(E006_SetDifference src/stl/algorithm/Merge/E006_SetDifference/main.cpp)
add_executable(E007_SetSymmetricDifference src/stl/algorithm/Merge/E007_SetSymmetricDifference/main.cpp)



### Heap Algorithm Examples ###
add_executable(E001_MakeHeap src/stl/algorithm/Heap/E001_MakeHeap/main.cpp)
add_executable(E002_PushHeap src/stl/algorithm/Heap/E002_PushHeap/main.cpp)
add_executable(E003_PopHeap src/stl/algorithm/Heap/E003_PopHeap/main.cpp)
add_executable(E004_SortHeap src/stl/algorithm/Heap/E004_SortHeap/main.cpp)
add_executable(E005_IsHeap src/stl/algorithm/Heap/E005_IsHeap/main.cpp)
add_executable(E006_IsHeapUntil src/stl/algorithm/Heap/E006_IsHeapUntil/main.cpp)



### MinMax Algorithm Examples ###
add_executable(E001_Max src/stl/algorithm/MinMax/E001_Max/main.cpp)
add_executable(E002_MaxElement src/stl/algorithm/MinMax/E002_MaxElement/main.cpp)
add_executable(E003_Min src/stl/algorithm/MinMax/E003_Min/main.cpp)
add_executable(E004_MinElement src/stl/algorithm/MinMax/E004_MinElement/main.cpp)
add_executable(E005_Minmax src/stl/algorithm/MinMax/E005_Minmax/main.cpp)
add_executable(E006_MinmaxElement src/stl/algorithm/MinMax/E006_MinmaxElement/main.cpp)



### Permutatiıns Algorithm Examples ###
add_executable(E001_IsPermutation src/stl/algorithm/Permutations/E001_IsPermutation/main.cpp)
add_executable(E002_NextPermutation src/stl/algorithm/Permutations/E002_NextPermutation/main.cpp)
add_executable(E003_PrevPermutation src/stl/algorithm/Permutations/E003_PrevPermutation/main.cpp)



### Containers Examples ###
### Array Examples ###
add_executable(E001_Array src/stl/containers/sequence/array/E001_Array/main.cpp)
add_executable(E002_Array src/stl/containers/sequence/array/E002_Array/main.cpp)
add_executable(E003_Array src/stl/containers/sequence/array/E003_Array/main.cpp)



### Vector Examples ###
add_executable(E001_Vector src/stl/containers/sequence/vector/E001_Vector/main.cpp)
add_executable(E002_Vector src/stl/containers/sequence/vector/E002_Vector/main.cpp)
add_executable(E003_Vector src/stl/containers/sequence/vector/E003_Vector/main.cpp)