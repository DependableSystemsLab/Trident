; ModuleID = 'profile_cmp_value.c'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct.FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct.FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct.FILE*, i32 }

@initFlag = unnamed_addr global i32 0
@icmpValue1List = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@icmpValue2List = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@fcmpValue1List = common unnamed_addr global [100000 x double] zeroinitializer, align 32
@fcmpValue2List = common unnamed_addr global [100000 x double] zeroinitializer, align 32
@icmpCountList = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@fcmpCountList = common unnamed_addr global [100000 x i64] zeroinitializer, align 32
@.str = private unnamed_addr constant [29 x i8] c"profile_cmp_value_result.txt\00", align 1
@.str1 = private unnamed_addr constant [2 x i8] c"w\00", align 1
@.str2 = private unnamed_addr constant [25 x i8] c"icmp %lld: %ld %ld %lld\0A\00", align 1
@.str3 = private unnamed_addr constant [23 x i8] c"fcmp %lld: %f %f %lld\0A\00", align 1

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
  %3 = getelementptr inbounds [100000 x i64]* @icmpValue1List, i64 0, i64 %2
  store i64 0, i64* %3, align 8
  %4 = load i64* %i, align 8
  %5 = getelementptr inbounds [100000 x i64]* @icmpValue2List, i64 0, i64 %4
  store i64 0, i64* %5, align 8
  %6 = load i64* %i, align 8
  %7 = getelementptr inbounds [100000 x double]* @fcmpValue1List, i64 0, i64 %6
  store double 0.000000e+00, double* %7, align 8
  %8 = load i64* %i, align 8
  %9 = getelementptr inbounds [100000 x double]* @fcmpValue2List, i64 0, i64 %8
  store double 0.000000e+00, double* %9, align 8
  %10 = load i64* %i, align 8
  %11 = getelementptr inbounds [100000 x i64]* @icmpCountList, i64 0, i64 %10
  store i64 0, i64* %11, align 8
  %12 = load i64* %i, align 8
  %13 = getelementptr inbounds [100000 x i64]* @fcmpCountList, i64 0, i64 %12
  store i64 0, i64* %13, align 8
  %14 = load i64* %i, align 8
  %15 = add nsw i64 %14, 1
  store i64 %15, i64* %i, align 8
  br label %bb2

bb2:                                              ; preds = %bb1, %bb
  %16 = load i64* %i, align 8
  %17 = icmp sle i64 %16, 99999
  br i1 %17, label %bb1, label %bb3

bb3:                                              ; preds = %bb2
  store i32 1, i32* @initFlag, align 4
  br label %bb4

bb4:                                              ; preds = %bb3, %entry
  br label %return

return:                                           ; preds = %bb4
  ret void
}

define void @profileICmpValues(i64 %cmpValue1, i64 %cmpValue2, i64 %llfiIndex) nounwind {
entry:
  %cmpValue1_addr = alloca i64, align 8
  %cmpValue2_addr = alloca i64, align 8
  %llfiIndex_addr = alloca i64, align 8
  %cmpCountV = alloca i64
  %orgV1 = alloca i64
  %orgV2 = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store i64 %cmpValue1, i64* %cmpValue1_addr
  store i64 %cmpValue2, i64* %cmpValue2_addr
  store i64 %llfiIndex, i64* %llfiIndex_addr
  call void @initLists() nounwind
  %0 = load i64* %llfiIndex_addr, align 8
  %1 = load i64* %llfiIndex_addr, align 8
  %2 = getelementptr inbounds [100000 x i64]* @icmpCountList, i64 0, i64 %1
  %3 = load i64* %2, align 8
  %4 = add nsw i64 %3, 1
  %5 = getelementptr inbounds [100000 x i64]* @icmpCountList, i64 0, i64 %0
  store i64 %4, i64* %5, align 8
  %6 = load i64* %llfiIndex_addr, align 8
  %7 = getelementptr inbounds [100000 x i64]* @icmpCountList, i64 0, i64 %6
  %8 = load i64* %7, align 8
  store i64 %8, i64* %cmpCountV, align 8
  %9 = load i64* %llfiIndex_addr, align 8
  %10 = getelementptr inbounds [100000 x i64]* @icmpValue1List, i64 0, i64 %9
  %11 = load i64* %10, align 8
  store i64 %11, i64* %orgV1, align 8
  %12 = load i64* %llfiIndex_addr, align 8
  %13 = getelementptr inbounds [100000 x i64]* @icmpValue2List, i64 0, i64 %12
  %14 = load i64* %13, align 8
  store i64 %14, i64* %orgV2, align 8
  %15 = load i64* %llfiIndex_addr, align 8
  %16 = load i64* %orgV1, align 8
  %17 = load i64* %cmpCountV, align 8
  %18 = mul nsw i64 %16, %17
  %19 = load i64* %cmpValue1_addr, align 8
  %20 = add nsw i64 %18, %19
  %21 = load i64* %cmpCountV, align 8
  %22 = sdiv i64 %20, %21
  %23 = getelementptr inbounds [100000 x i64]* @icmpValue1List, i64 0, i64 %15
  store i64 %22, i64* %23, align 8
  %24 = load i64* %llfiIndex_addr, align 8
  %25 = load i64* %orgV2, align 8
  %26 = load i64* %cmpCountV, align 8
  %27 = mul nsw i64 %25, %26
  %28 = load i64* %cmpValue2_addr, align 8
  %29 = add nsw i64 %27, %28
  %30 = load i64* %cmpCountV, align 8
  %31 = sdiv i64 %29, %30
  %32 = getelementptr inbounds [100000 x i64]* @icmpValue2List, i64 0, i64 %24
  store i64 %31, i64* %32, align 8
  br label %return

return:                                           ; preds = %entry
  ret void
}

define void @profileFCmpValues(double %cmpValue1, double %cmpValue2, i64 %llfiIndex) nounwind {
entry:
  %cmpValue1_addr = alloca double, align 8
  %cmpValue2_addr = alloca double, align 8
  %llfiIndex_addr = alloca i64, align 8
  %cmpCountV = alloca i64
  %orgV1 = alloca double
  %orgV2 = alloca double
  %"alloca point" = bitcast i32 0 to i32
  store double %cmpValue1, double* %cmpValue1_addr
  store double %cmpValue2, double* %cmpValue2_addr
  store i64 %llfiIndex, i64* %llfiIndex_addr
  call void @initLists() nounwind
  %0 = load i64* %llfiIndex_addr, align 8
  %1 = load i64* %llfiIndex_addr, align 8
  %2 = getelementptr inbounds [100000 x i64]* @fcmpCountList, i64 0, i64 %1
  %3 = load i64* %2, align 8
  %4 = add nsw i64 %3, 1
  %5 = getelementptr inbounds [100000 x i64]* @fcmpCountList, i64 0, i64 %0
  store i64 %4, i64* %5, align 8
  %6 = load i64* %llfiIndex_addr, align 8
  %7 = getelementptr inbounds [100000 x i64]* @fcmpCountList, i64 0, i64 %6
  %8 = load i64* %7, align 8
  store i64 %8, i64* %cmpCountV, align 8
  %9 = load i64* %llfiIndex_addr, align 8
  %10 = getelementptr inbounds [100000 x double]* @fcmpValue1List, i64 0, i64 %9
  %11 = load double* %10, align 8
  store double %11, double* %orgV1, align 8
  %12 = load i64* %llfiIndex_addr, align 8
  %13 = getelementptr inbounds [100000 x double]* @fcmpValue2List, i64 0, i64 %12
  %14 = load double* %13, align 8
  store double %14, double* %orgV2, align 8
  %15 = load i64* %llfiIndex_addr, align 8
  %16 = load i64* %cmpCountV, align 8
  %17 = sitofp i64 %16 to double
  %18 = load double* %orgV1, align 8
  %19 = fmul double %17, %18
  %20 = load double* %cmpValue1_addr, align 8
  %21 = fadd double %19, %20
  %22 = load i64* %cmpCountV, align 8
  %23 = sitofp i64 %22 to double
  %24 = fdiv double %21, %23
  %25 = getelementptr inbounds [100000 x double]* @fcmpValue1List, i64 0, i64 %15
  store double %24, double* %25, align 8
  %26 = load i64* %llfiIndex_addr, align 8
  %27 = load i64* %cmpCountV, align 8
  %28 = sitofp i64 %27 to double
  %29 = load double* %orgV2, align 8
  %30 = fmul double %28, %29
  %31 = load double* %cmpValue2_addr, align 8
  %32 = fadd double %30, %31
  %33 = load i64* %cmpCountV, align 8
  %34 = sitofp i64 %33 to double
  %35 = fdiv double %32, %34
  %36 = getelementptr inbounds [100000 x double]* @fcmpValue2List, i64 0, i64 %26
  store double %35, double* %36, align 8
  br label %return

return:                                           ; preds = %entry
  ret void
}

define void @dumpResult() nounwind {
entry:
  %f = alloca %struct.FILE*
  %i = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  %0 = call %struct.FILE* @fopen(i8* noalias getelementptr inbounds ([29 x i8]* @.str, i64 0, i64 0), i8* noalias getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind
  store %struct.FILE* %0, %struct.FILE** %f, align 8
  store i64 0, i64* %i, align 8
  store i64 0, i64* %i, align 8
  br label %bb5

bb:                                               ; preds = %bb5
  %1 = load i64* %i, align 8
  %2 = getelementptr inbounds [100000 x i64]* @icmpCountList, i64 0, i64 %1
  %3 = load i64* %2, align 8
  %4 = icmp ne i64 %3, 0
  br i1 %4, label %bb1, label %bb2

bb1:                                              ; preds = %bb
  %5 = load i64* %i, align 8
  %6 = getelementptr inbounds [100000 x i64]* @icmpCountList, i64 0, i64 %5
  %7 = load i64* %6, align 8
  %8 = load i64* %i, align 8
  %9 = getelementptr inbounds [100000 x i64]* @icmpValue2List, i64 0, i64 %8
  %10 = load i64* %9, align 8
  %11 = load i64* %i, align 8
  %12 = getelementptr inbounds [100000 x i64]* @icmpValue1List, i64 0, i64 %11
  %13 = load i64* %12, align 8
  %14 = load %struct.FILE** %f, align 8
  %15 = load i64* %i, align 8
  %16 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %14, i8* noalias getelementptr inbounds ([25 x i8]* @.str2, i64 0, i64 0), i64 %15, i64 %13, i64 %10, i64 %7) nounwind
  br label %bb4

bb2:                                              ; preds = %bb
  %17 = load i64* %i, align 8
  %18 = getelementptr inbounds [100000 x i64]* @fcmpCountList, i64 0, i64 %17
  %19 = load i64* %18, align 8
  %20 = icmp ne i64 %19, 0
  br i1 %20, label %bb3, label %bb4

bb3:                                              ; preds = %bb2
  %21 = load i64* %i, align 8
  %22 = getelementptr inbounds [100000 x i64]* @fcmpCountList, i64 0, i64 %21
  %23 = load i64* %22, align 8
  %24 = load i64* %i, align 8
  %25 = getelementptr inbounds [100000 x double]* @fcmpValue2List, i64 0, i64 %24
  %26 = load double* %25, align 8
  %27 = load i64* %i, align 8
  %28 = getelementptr inbounds [100000 x double]* @fcmpValue1List, i64 0, i64 %27
  %29 = load double* %28, align 8
  %30 = load %struct.FILE** %f, align 8
  %31 = load i64* %i, align 8
  %32 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %30, i8* noalias getelementptr inbounds ([23 x i8]* @.str3, i64 0, i64 0), i64 %31, double %29, double %26, i64 %23) nounwind
  br label %bb4

bb4:                                              ; preds = %bb3, %bb2, %bb1
  %33 = load i64* %i, align 8
  %34 = add nsw i64 %33, 1
  store i64 %34, i64* %i, align 8
  br label %bb5

bb5:                                              ; preds = %bb4, %entry
  %35 = load i64* %i, align 8
  %36 = icmp sle i64 %35, 99999
  br i1 %36, label %bb, label %bb6

bb6:                                              ; preds = %bb5
  %37 = load %struct.FILE** %f, align 8
  %38 = call i32 @fclose(%struct.FILE* %37) nounwind
  br label %return

return:                                           ; preds = %bb6
  ret void
}

declare %struct.FILE* @fopen(i8* noalias, i8* noalias)

declare i32 @fprintf(%struct.FILE* noalias, i8* noalias, ...) nounwind

declare i32 @fclose(%struct.FILE*)
