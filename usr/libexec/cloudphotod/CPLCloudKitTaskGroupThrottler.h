//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CPLCloudKitTaskGroupThrottler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_throttlers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bfd52
- (id)statusWithIndent:(id)arg1;	// IMP=0x00100000000bf941
- (void)operationWithGroupName:(id)arg1 didFinishNow:(id)arg2 withError:(id)arg3;	// IMP=0x00100000000bf7fc
- (void)operation:(id)arg1 forTask:(id)arg2 didFinishWithError:(id)arg3;	// IMP=0x00100000000bf73a
- (_Bool)shouldRunOperationsNow:(id)arg1 forGroupName:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bf4b5
- (_Bool)shouldRunOperationsForTask:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000bf3fe
- (id)init;	// IMP=0x00100000000bf36c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
