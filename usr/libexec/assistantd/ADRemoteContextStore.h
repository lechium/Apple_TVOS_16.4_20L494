//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFPeerMap;
@protocol OS_dispatch_queue;

@interface ADRemoteContextStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    AFPeerMap *_deviceContextMap;	// 24 = 0x18
    _Bool _contextCollectionAllowed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000011f703
- (void)_dumpStateForReason:(id)arg1;	// IMP=0x001000000011f61b
- (void)getSerializedDeviceContextSnapshotIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011f16c
- (void)setDeviceContext:(id)arg1 includedKeys:(id)arg2 excludedKeys:(id)arg3 forDeviceWithPeerInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000011ed7d
- (void)setDeviceContext:(id)arg1 withIncludedKeys:(id)arg2 excludedKeys:(id)arg3 forDeviceWithIDSDeviceUniqueIdentifier:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000011ec90
- (void)_fetchContextFromCollectorAndForceFetchingFromDevicesWithPeerInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011eb84
- (void)_fetchContextFromDeviceWithPeerInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011eb13
- (void)fetchContextSnapshotFromAllDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000011ea9c
- (void)fetchContextSnapshotFromDevicesWithPeerInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011e9f9
- (void)getContextSnapshotIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011e4ee
- (void)_enumerateDeviceContextsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011e3d0
- (void)_setContextCollectionAllowed:(_Bool)arg1;	// IMP=0x001000000011e37a
- (void)stopCollectingContext;	// IMP=0x001000000011e290
- (void)startCollectingContext;	// IMP=0x001000000011e1a3
- (id)_initWithRapportLink:(id)arg1 queue:(id)arg2 deviceCircleManager:(id)arg3;	// IMP=0x001000000011e094
- (id)initWithRapportLink:(id)arg1 queue:(id)arg2;	// IMP=0x001000000011dffd

@end

