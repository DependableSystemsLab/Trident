; ModuleID = 'profile_vmsize.c'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct.FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct.FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct.FILE*, i32 }

@initFlag = unnamed_addr global i32 0
@.str = private unnamed_addr constant [15 x i8] c"vmsize_log.txt\00", align 1
@instList = common unnamed_addr global [10000 x i32] zeroinitializer, align 32
@.str1 = private unnamed_addr constant [18 x i8] c"/proc/self/status\00", align 1
@.str2 = private unnamed_addr constant [2 x i8] c"r\00", align 1
@.str3 = private unnamed_addr constant [2 x i8] c"a\00", align 1
@.str4 = private unnamed_addr constant [8 x i8] c"%ld= %s\00", align 1

define void @getVmLog(i64 %llfiIndex) nounwind {
entry:
  %llfiIndex_addr = alloca i64, align 8
  %file = alloca %struct.FILE*
  %lineNumber = alloca i32
  %count = alloca i32
  %i = alloca i64
  %line = alloca [1024 x i8]
  %wf = alloca %struct.FILE*
  %"alloca point" = bitcast i32 0 to i32
  store i64 %llfiIndex, i64* %llfiIndex_addr
  %0 = load i32* @initFlag, align 4
  %1 = icmp eq i32 %0, 0
  br i1 %1, label %bb, label %bb3

bb:                                               ; preds = %entry
  %2 = call i32 @remove(i8* getelementptr inbounds ([15 x i8]* @.str, i64 0, i64 0)) nounwind
  store i32 1, i32* @initFlag, align 4
  store i64 0, i64* %i, align 8
  store i64 0, i64* %i, align 8
  br label %bb2

bb1:                                              ; preds = %bb2
  %3 = load i64* %i, align 8
  %4 = getelementptr inbounds [10000 x i32]* @instList, i64 0, i64 %3
  store i32 0, i32* %4, align 4
  %5 = load i64* %i, align 8
  %6 = add nsw i64 %5, 1
  store i64 %6, i64* %i, align 8
  br label %bb2

bb2:                                              ; preds = %bb1, %bb
  %7 = load i64* %i, align 8
  %8 = icmp sle i64 %7, 9999
  br i1 %8, label %bb1, label %bb3

bb3:                                              ; preds = %bb2, %entry
  %9 = load i64* %llfiIndex_addr, align 8
  %10 = getelementptr inbounds [10000 x i32]* @instList, i64 0, i64 %9
  %11 = load i32* %10, align 4
  %12 = icmp eq i32 %11, 1
  br i1 %12, label %bb13, label %bb4

bb4:                                              ; preds = %bb3
  %13 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([18 x i8]* @.str1, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str2, i64 0, i64 0)) nounwind
  store %struct.FILE* %13, %struct.FILE** %file, align 8
  store i32 11, i32* %lineNumber, align 4
  store i32 0, i32* %count, align 4
  %14 = load %struct.FILE** %file, align 8
  %15 = icmp ne %struct.FILE* %14, null
  br i1 %15, label %bb5, label %bb13

bb5:                                              ; preds = %bb4
  br label %bb10

bb6:                                              ; preds = %bb10
  %16 = load i32* %count, align 4
  %17 = load i32* %lineNumber, align 4
  %18 = icmp eq i32 %16, %17
  br i1 %18, label %bb7, label %bb9

bb7:                                              ; preds = %bb6
  %19 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([15 x i8]* @.str, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str3, i64 0, i64 0)) nounwind
  store %struct.FILE* %19, %struct.FILE** %wf, align 8
  %20 = load %struct.FILE** %wf, align 8
  %21 = load i64* %llfiIndex_addr, align 8
  %line8 = bitcast [1024 x i8]* %line to i8*
  %22 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %20, i8* noalias getelementptr inbounds ([8 x i8]* @.str4, i64 0, i64 0), i64 %21, i8* %line8) nounwind
  %23 = load %struct.FILE** %wf, align 8
  %24 = call i32 @fclose(%struct.FILE* %23) nounwind
  %25 = load i64* %llfiIndex_addr, align 8
  %26 = getelementptr inbounds [10000 x i32]* @instList, i64 0, i64 %25
  store i32 1, i32* %26, align 4
  br label %bb12

bb9:                                              ; preds = %bb6
  %27 = load i32* %count, align 4
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %count, align 4
  br label %bb10

bb10:                                             ; preds = %bb9, %bb5
  %line11 = bitcast [1024 x i8]* %line to i8*
  %29 = load %struct.FILE** %file, align 8
  %30 = call i8* @fgets(i8* noalias %line11, i32 1024, %struct.FILE* noalias %29) nounwind
  %31 = icmp ne i8* %30, null
  br i1 %31, label %bb6, label %bb12

bb12:                                             ; preds = %bb10, %bb7
  %32 = load %struct.FILE** %file, align 8
  %33 = call i32 @fclose(%struct.FILE* %32) nounwind
  br label %bb13

bb13:                                             ; preds = %bb12, %bb4, %bb3
  br label %return

return:                                           ; preds = %bb13
  ret void
}

declare i32 @remove(i8*) nounwind

declare %struct.FILE* @fopen(i8* noalias, i8* noalias)

declare i32 @fprintf(%struct.FILE* noalias, i8* noalias, ...) nounwind

declare i32 @fclose(%struct.FILE*)

declare i8* @fgets(i8* noalias, i32, %struct.FILE* noalias)
