//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionActivity, CMMotionActivityManager, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ADMotionManager : NSObject
{
    CMMotionActivityManager *_motionActivityManager;	// 8 = 0x8
    CMMotionActivity *_motionActivity;	// 16 = 0x10
    NSOperationQueue *_opQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000026fae0
- (void);	// IMP=0x001000000026fad1
@property(copy, nonatomic, setter=_setMotionActivity:) CMMotionActivity *_motionActivity; // @synthesize _motionActivity;
- (long long)deviceMotion;	// IMP=0x001000000026f95c
- (_Bool)isDriving;	// IMP=0x001000000026f85b
- (id)motionConfidence;	// IMP=0x001000000026f6e2
- (id)motionActivity;	// IMP=0x001000000026f498
- (void)stopUpdatingMotionActivityForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000026f372
- (void)startUpdatingMotionActivityForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000026f027
- (id)init;	// IMP=0x001000000026edfd

@end
