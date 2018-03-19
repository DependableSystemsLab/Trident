; ModuleID = 'sampling.c'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct.FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct.FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct.FILE*, i32 }

@init_flag = unnamed_addr global i32 0
@instCountList = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@.str = private unnamed_addr constant [20 x i8] c"instCountResult.txt\00", align 1
@.str1 = private unnamed_addr constant [2 x i8] c"w\00", align 1
@.str2 = private unnamed_addr constant [12 x i8] c"%lld: %lld\0A\00", align 1

define void @profileCount(i64 %llfiIndex) nounwind {
entry:
  %llfiIndex_addr = alloca i64, align 8
  %curCount = alloca i64
  %i = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i64 %llfiIndex, i64* %llfiIndex_addr
  %0 = load i32* @init_flag, align 4
  %1 = icmp eq i32 %0, 0
  br i1 %1, label %bb, label %bb4

bb:                                               ; preds = %entry
  store i32 0, i32* %i, align 4
  store i32 0, i32* %i, align 4
  br label %bb2

bb1:                                              ; preds = %bb2
  %2 = load i32* %i, align 4
  %3 = sext i32 %2 to i64
  %4 = getelementptr inbounds [100000 x i64]* @instCountList, i64 0, i64 %3
  store i64 0, i64* %4, align 8
  %5 = load i32* %i, align 4
  %6 = add nsw i32 %5, 1
  store i32 %6, i32* %i, align 4
  br label %bb2

bb2:                                              ; preds = %bb1, %bb
  %7 = load i32* %i, align 4
  %8 = icmp sle i32 %7, 99999
  br i1 %8, label %bb1, label %bb3

bb3:                                              ; preds = %bb2
  store i32 1, i32* @init_flag, align 4
  br label %bb4

bb4:                                              ; preds = %bb3, %entry
  %9 = load i64* %llfiIndex_addr, align 8
  %10 = getelementptr inbounds [100000 x i64]* @instCountList, i64 0, i64 %9
  %11 = load i64* %10, align 8
  store i64 %11, i64* %curCount, align 8
  %12 = load i64* %llfiIndex_addr, align 8
  %13 = load i64* %curCount, align 8
  %14 = add nsw i64 %13, 1
  %15 = getelementptr inbounds [100000 x i64]* @instCountList, i64 0, i64 %12
  store i64 %14, i64* %15, align 8
  br label %return

return:                                           ; preds = %bb4
  ret void
}

define void @dumpResult() nounwind {
entry:
  %f = alloca %struct.FILE*
  %i = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  %0 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([20 x i8]* @.str, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind
  store %struct.FILE* %0, %struct.FILE** %f, align 8
  store i64 0, i64* %i, align 8
  store i64 0, i64* %i, align 8
  br label %bb3

bb:                                               ; preds = %bb3
  %1 = load i64* %i, align 8
  %2 = getelementptr inbounds [100000 x i64]* @instCountList, i64 0, i64 %1
  %3 = load i64* %2, align 8
  %4 = icmp ne i64 %3, 0
  br i1 %4, label %bb1, label %bb2

bb1:                                              ; preds = %bb
  %5 = load i64* %i, align 8
  %6 = getelementptr inbounds [100000 x i64]* @instCountList, i64 0, i64 %5
  %7 = load i64* %6, align 8
  %8 = load %struct.FILE** %f, align 8
  %9 = load i64* %i, align 8
  %10 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %8, i8* noalias getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0), i64 %9, i64 %7) nounwind
  br label %bb2

bb2:                                              ; preds = %bb1, %bb
  %11 = load i64* %i, align 8
  %12 = add nsw i64 %11, 1
  store i64 %12, i64* %i, align 8
  br label %bb3

bb3:                                              ; preds = %bb2, %entry
  %13 = load i64* %i, align 8
  %14 = icmp sle i64 %13, 99999
  br i1 %14, label %bb, label %bb4

bb4:                                              ; preds = %bb3
  %15 = load %struct.FILE** %f, align 8
  %16 = call i32 @fclose(%struct.FILE* %15) nounwind
  br label %return

return:                                           ; preds = %bb4
  ret void
}

declare %struct.FILE* @fopen(i8* noalias, i8* noalias)

declare i32 @fprintf(%struct.FILE* noalias, i8* noalias, ...) nounwind

declare i32 @fclose(%struct.FILE*)
