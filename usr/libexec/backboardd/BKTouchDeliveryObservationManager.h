//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKHIDDomainServiceServer, BSMutableIntegerMap, MISSING_TYPE, NSMutableIndexSet, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryObservationManager : NSObject
{
    BKHIDDomainServiceServer *_server;	// 8 = 0x8
    MISSING_TYPE *_touchIdentifierToPIDs;	// 16 = 0x10
    BSMutableIntegerMap *_touchIdentifierToUpdate;	// 24 = 0x18
    NSMutableIndexSet *_globalTouchObserverPIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0020000000013e7f
- (void).cxx_destruct;	// IMP=0x00200000000138a3
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x0010000000013808
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)_queue_postUpdate:(id)arg1 toProcessPID:(int)arg2;	// IMP=0x0010000000013695
- (void)_queue_postUpdate:(id)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x00100000000133b0
- (void)_queue_postPendingUpdates;	// IMP=0x0010000000013337
- (void)_queue_pendUpdate:(id)arg1;	// IMP=0x0010000000013255
- (void)_queue_setProcessPID:(int)arg1 observesGlobalTouches:(_Bool)arg2;	// IMP=0x001000000001320a
- (void)_queue_setProcessPID:(int)arg1 observesTouch:(_Bool)arg2 withIdentifier:(unsigned int)arg3;	// IMP=0x0010000000013140
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x001000000001313a
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x0010000000013134
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x001000000001312e
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x00100000000130e3
- (void)touchDidTransfer:(unsigned int)arg1 destination:(id)arg2;	// IMP=0x00100000000130dd
- (void)touchDidDetach:(unsigned int)arg1 destinations:(id)arg2;	// IMP=0x001000000001301c
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 upAtPoint:(struct CGPoint)arg3 detached:(_Bool)arg4;	// IMP=0x0010000000012fca
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeOutAtPoint:(struct CGPoint)arg3;	// IMP=0x0010000000012fc4
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeInAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x0010000000012fbe
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 downAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x0010000000012fb8
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0010000000012fb2
- (void)touch:(unsigned int)arg1 didHitTestToDestination:(id)arg2 hostingChainIndex:(long long)arg3;	// IMP=0x0010000000012fac
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x0010000000012fa6
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x0010000000012fa0
- (oneway void)setObservesTouch:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000012db9
- (oneway void)setObservesAllTouches:(id)arg1;	// IMP=0x0010000000012bc6
- (void)connectionDidTerminate:(id)arg1 process:(id)arg2;	// IMP=0x0010000000012a88
- (void)noteTouchUpOccurred:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 clientPort:(unsigned int)arg4;	// IMP=0x0010000000012a2f
- (id)init;	// IMP=0x0010000000012886

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

