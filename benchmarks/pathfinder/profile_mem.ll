; ModuleID = 'profile_mem.c'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct.FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct.FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct.FILE*, i32 }

@.str = private unnamed_addr constant [23 x i8] c"profile_mem_result.txt\00", align 1
@.str1 = private unnamed_addr constant [2 x i8] c"a\00", align 1
@.str2 = private unnamed_addr constant [11 x i8] c"L %lld %p\0A\00", align 1
@.str3 = private unnamed_addr constant [11 x i8] c"S %lld %p\0A\00", align 1

define void @profileLoad(i64* %adrs, i64 %llfiIndex) nounwind {
entry:
  %adrs_addr = alloca i64*, align 8
  %llfiIndex_addr = alloca i64, align 8
  %f = alloca %struct.FILE*
  %"alloca point" = bitcast i32 0 to i32
  store i64* %adrs, i64** %adrs_addr
  store i64 %llfiIndex, i64* %llfiIndex_addr
  %0 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([23 x i8]* @.str, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind
  store %struct.FILE* %0, %struct.FILE** %f, align 8
  %1 = load %struct.FILE** %f, align 8
  %2 = load i64* %llfiIndex_addr, align 8
  %3 = load i64** %adrs_addr, align 8
  %4 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %1, i8* noalias getelementptr inbounds ([11 x i8]* @.str2, i64 0, i64 0), i64 %2, i64* %3) nounwind
  %5 = load %struct.FILE** %f, align 8
  %6 = call i32 @fclose(%struct.FILE* %5) nounwind
  br label %return

return:                                           ; preds = %entry
  ret void
}

declare %struct.FILE* @fopen(i8* noalias, i8* noalias)

declare i32 @fprintf(%struct.FILE* noalias, i8* noalias, ...) nounwind

declare i32 @fclose(%struct.FILE*)

define void @profileStore(i64* %adrs, i64 %llfiIndex) nounwind {
entry:
  %adrs_addr = alloca i64*, align 8
  %llfiIndex_addr = alloca i64, align 8
  %f = alloca %struct.FILE*
  %"alloca point" = bitcast i32 0 to i32
  store i64* %adrs, i64** %adrs_addr
  store i64 %llfiIndex, i64* %llfiIndex_addr
  %0 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([23 x i8]* @.str, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind
  store %struct.FILE* %0, %struct.FILE** %f, align 8
  %1 = load %struct.FILE** %f, align 8
  %2 = load i64* %llfiIndex_addr, align 8
  %3 = load i64** %adrs_addr, align 8
  %4 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %1, i8* noalias getelementptr inbounds ([11 x i8]* @.str3, i64 0, i64 0), i64 %2, i64* %3) nounwind
  %5 = load %struct.FILE** %f, align 8
  %6 = call i32 @fclose(%struct.FILE* %5) nounwind
  br label %return

return:                                           ; preds = %entry
  ret void
}

define void @dumpResult() nounwind {
entry:
  br label %return

return:                                           ; preds = %entry
  ret void
}
