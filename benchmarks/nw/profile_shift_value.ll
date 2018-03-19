; ModuleID = 'profile_shift_value.c'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct.FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct.FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct.FILE*, i32 }

@initFlag = unnamed_addr global i32 0
@shiftValueList = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@shiftCountList = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@.str = private unnamed_addr constant [31 x i8] c"profile_shift_value_result.txt\00", align 8
@.str1 = private unnamed_addr constant [2 x i8] c"w\00", align 1
@.str2 = private unnamed_addr constant [15 x i8] c"%lld: %ld %ld\0A\00", align 1

define void @initLists() nounwind {
entry:
  %i = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  %0 = load i32* @initFlag, align 4
  %1 = icmp eq i32 %0, 0
  br i1 %1, label %bb, label %bb4

bb:                                               ; preds = %entry
  store i64 0, i64* %i, align 8
  store i64 0, i64* %i, align 8
  br label %bb2

bb1:                                              ; preds = %bb2
  %2 = load i64* %i, align 8
  %3 = getelementptr inbounds [100000 x i64]* @shiftValueList, i64 0, i64 %2
  store i64 0, i64* %3, align 8
  %4 = load i64* %i, align 8
  %5 = getelementptr inbounds [100000 x i64]* @shiftCountList, i64 0, i64 %4
  store i64 0, i64* %5, align 8
  %6 = load i64* %i, align 8
  %7 = add nsw i64 %6, 1
  store i64 %7, i64* %i, align 8
  br label %bb2

bb2:                                              ; preds = %bb1, %bb
  %8 = load i64* %i, align 8
  %9 = icmp sle i64 %8, 99999
  br i1 %9, label %bb1, label %bb3

bb3:                                              ; preds = %bb2
  store i32 1, i32* @initFlag, align 4
  br label %bb4

bb4:                                              ; preds = %bb3, %entry
  br label %return

return:                                           ; preds = %bb4
  ret void
}

define void @profileShiftValues(i64 %shiftValue, i64 %llfiIndex) nounwind {
entry:
  %shiftValue_addr = alloca i64, align 8
  %llfiIndex_addr = alloca i64, align 8
  %shiftCountV = alloca i64
  %orgV = alloca i64
  %totalV = alloca i64
  %aV = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store i64 %shiftValue, i64* %shiftValue_addr
  store i64 %llfiIndex, i64* %llfiIndex_addr
  call void @initLists() nounwind
  %0 = load i64* %llfiIndex_addr, align 8
  %1 = getelementptr inbounds [100000 x i64]* @shiftCountList, i64 0, i64 %0
  %2 = load i64* %1, align 8
  store i64 %2, i64* %shiftCountV, align 8
  %3 = load i64* %llfiIndex_addr, align 8
  %4 = getelementptr inbounds [100000 x i64]* @shiftValueList, i64 0, i64 %3
  %5 = load i64* %4, align 8
  store i64 %5, i64* %orgV, align 8
  %6 = load i64* %orgV, align 8
  %7 = load i64* %shiftCountV, align 8
  %8 = mul nsw i64 %6, %7
  %9 = load i64* %shiftValue_addr, align 8
  %10 = add nsw i64 %8, %9
  store i64 %10, i64* %totalV, align 8
  %11 = load i64* %llfiIndex_addr, align 8
  %12 = load i64* %llfiIndex_addr, align 8
  %13 = getelementptr inbounds [100000 x i64]* @shiftCountList, i64 0, i64 %12
  %14 = load i64* %13, align 8
  %15 = add nsw i64 %14, 1
  %16 = getelementptr inbounds [100000 x i64]* @shiftCountList, i64 0, i64 %11
  store i64 %15, i64* %16, align 8
  %17 = load i64* %shiftCountV, align 8
  %18 = add nsw i64 %17, 1
  %19 = load i64* %totalV, align 8
  %20 = sdiv i64 %19, %18
  store i64 %20, i64* %aV, align 8
  %21 = load i64* %llfiIndex_addr, align 8
  %22 = getelementptr inbounds [100000 x i64]* @shiftValueList, i64 0, i64 %21
  %23 = load i64* %aV, align 8
  store i64 %23, i64* %22, align 8
  br label %return

return:                                           ; preds = %entry
  ret void
}

define void @dumpResult() nounwind {
entry:
  %f = alloca %struct.FILE*
  %i = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  %0 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([31 x i8]* @.str, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind
  store %struct.FILE* %0, %struct.FILE** %f, align 8
  store i64 0, i64* %i, align 8
  store i64 0, i64* %i, align 8
  br label %bb3

bb:                                               ; preds = %bb3
  %1 = load i64* %i, align 8
  %2 = getelementptr inbounds [100000 x i64]* @shiftCountList, i64 0, i64 %1
  %3 = load i64* %2, align 8
  %4 = icmp ne i64 %3, 0
  br i1 %4, label %bb1, label %bb2

bb1:                                              ; preds = %bb
  %5 = load i64* %i, align 8
  %6 = getelementptr inbounds [100000 x i64]* @shiftCountList, i64 0, i64 %5
  %7 = load i64* %6, align 8
  %8 = load i64* %i, align 8
  %9 = getelementptr inbounds [100000 x i64]* @shiftValueList, i64 0, i64 %8
  %10 = load i64* %9, align 8
  %11 = load %struct.FILE** %f, align 8
  %12 = load i64* %i, align 8
  %13 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %11, i8* noalias getelementptr inbounds ([15 x i8]* @.str2, i64 0, i64 0), i64 %12, i64 %10, i64 %7) nounwind
  br label %bb2

bb2:                                              ; preds = %bb1, %bb
  %14 = load i64* %i, align 8
  %15 = add nsw i64 %14, 1
  store i64 %15, i64* %i, align 8
  br label %bb3

bb3:                                              ; preds = %bb2, %entry
  %16 = load i64* %i, align 8
  %17 = icmp sle i64 %16, 99999
  br i1 %17, label %bb, label %bb4

bb4:                                              ; preds = %bb3
  %18 = load %struct.FILE** %f, align 8
  %19 = call i32 @fclose(%struct.FILE* %18) nounwind
  br label %return

return:                                           ; preds = %bb4
  ret void
}

declare %struct.FILE* @fopen(i8* noalias, i8* noalias)

declare i32 @fprintf(%struct.FILE* noalias, i8* noalias, ...) nounwind

declare i32 @fclose(%struct.FILE*)
