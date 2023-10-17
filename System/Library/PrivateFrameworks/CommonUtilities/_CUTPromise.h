//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUTPromise.h"

@class CUTResult, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _CUTPromise : CUTPromise
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    _Bool _done;	// 24 = 0x18
    CUTResult *_result;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000927c
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool done; // @synthesize done=_done;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000090d9
- (void)_fulfillWithResult:(id)arg1;	// IMP=0x0000000000008fac
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000008f10

@end

