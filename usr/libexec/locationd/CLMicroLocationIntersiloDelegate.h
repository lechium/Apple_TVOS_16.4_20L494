//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMicroLocationIntersiloDelegate : NSObject
{
    void *_microLocationNotifier;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)duetMonitor:(id)arg1 nowPlayingDidChange:(id)arg2;	// IMP=0x001000000072a4db
- (void)duetMonitor:(id)arg1 homekitAccessoryDidChange:(id)arg2;	// IMP=0x001000000072a017
- (void)duetMonitor:(id)arg1 homekitSceneDidChange:(id)arg2;	// IMP=0x0010000000729c2f
- (void)duetMonitor:(id)arg1 foregroundAppDidLaunch:(id)arg2;	// IMP=0x0010000000729bbf
- (void)duetMonitorDeviceFirstWakeOfDay:(id)arg1;	// IMP=0x0010000000729ac0
- (void)onLowConfidenceVisit:(id)arg1;	// IMP=0x0010000000729ab4
- (void)onVisit:(id)arg1;	// IMP=0x0010000000729aa7
- (void)clATVAirplayMonitorService:(id)arg1 didFindDevices:(id)arg2;	// IMP=0x00100000007296a5
- (id)initWithMicroLocationNotifier:(void *)arg1;	// IMP=0x001000000072965b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

