//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCHIDDeviceInput, NSDictionary, NSMutableArray, NSString;

@interface GenericGamepadHIDServicePlugin
{
    GCHIDDeviceInput *_deviceInput;	// 8 = 0x8
    NSDictionary *_trackedInputElementsByIdentifier;	// 16 = 0x10
    NSMutableArray *_elementObservers;	// 24 = 0x18
    NSDictionary *_trackedOutputElementsByIdentifier;	// 32 = 0x20
    CDUnknownBlockType _hapticEventGenerator;	// 40 = 0x28
    CDStruct_cd435f0f _eventState;	// 48 = 0x30
    float _lastButtonHome;	// 240 = 0xf0
    float _lastButtonMenu;	// 244 = 0xf4
    float _lastButtonOptions;	// 248 = 0xf8
    float _lastButtonShare;	// 252 = 0xfc
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x001000000000626b
- (void).cxx_destruct;	// IMP=0x000000000000d994
- (_Bool)_onqueue_configureWithModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006cc1
- (void)applyConfiguration:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006887
- (void)fetchDeviceSnapshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006730
- (void)connectToGenericDeviceDriverConfigurationServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000671d
- (void)dispatchHapticEvent;	// IMP=0x0000000000006703
- (void)cancel;	// IMP=0x00000000000066b7
- (void)activate;	// IMP=0x000000000000666b
- (void)setDispatchQueue:(id)arg1;	// IMP=0x00000000000065f9
- (void)setupRawReportHandling;	// IMP=0x00000000000065f3
- (id)createHIDDeviceForService:(unsigned int)arg1;	// IMP=0x00000000000065a1
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x00000000000064e2
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x0000000000006415
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000006317

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

