//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ADArbitrationFeedbackManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    NSString *_assistantIdentifier;	// 24 = 0x18
    NSString *_speechIdentifier;	// 32 = 0x20
    NSString *_requestId;	// 40 = 0x28
    NSString *_utteranceText;	// 48 = 0x30
    NSArray *_localDeviceContexts;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x0020000000138513
- (void).cxx_destruct;	// IMP=0x0020000000139b0f
@property(retain, nonatomic) NSArray *localDeviceContexts; // @synthesize localDeviceContexts=_localDeviceContexts;
@property(copy, nonatomic) NSString *utteranceText; // @synthesize utteranceText=_utteranceText;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void);	// IMP=0x0010000000139ab3
@property(copy, nonatomic) NSString *speechIdentifier; // @synthesize speechIdentifier=_speechIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(retain, nonatomic) ADDeviceCircleManager *deviceCircleManager; // @synthesize deviceCircleManager=_deviceCircleManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0010000000139900
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000001398fa
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000001398c1
- (void)_forwardToContextCollectorMessage:(id)arg1 From:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013963f
- (void)_forwardToDevice:(id)arg1 message:(id)arg2 From:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000139461
- (void)_handleArbitrationParticipationPush:(id)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000139449
- (void)_fetchCurrentRequestInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000138f55
- (id)_findContextCollectorIn:(id)arg1 withIDSIdentifier:(id)arg2;	// IMP=0x0010000000138e5b
- (id)_findPairedPhoneIn:(id)arg1;	// IMP=0x0010000000138dee
- (void)_findTargetDeviceInDeviceCircleLocalPeer:(id)arg1 remotePeers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001388f7
- (id)_nearByDevicesFrom:(id)arg1;	// IMP=0x00100000001388ea
- (_Bool)_shouldRouteThroughPairedPhone;	// IMP=0x00100000001388e0
- (_Bool)_localDeviceIsSameAsLocationSharingDevice:(id)arg1;	// IMP=0x001000000013882d
- (void)handle:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001386b2
- (id)_init;	// IMP=0x00100000001385a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
