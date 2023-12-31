//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMDispatchTimer;
@protocol IDSDeviceCertificationRepairDelegate;

@interface IDSDeviceCertificationRepair : NSObject
{
    id <IDSDeviceCertificationRepairDelegate> _delegate;	// 8 = 0x8
    IMDispatchTimer *_repairTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000072e4f0
@property(retain, nonatomic) IMDispatchTimer *repairTimer; // @synthesize repairTimer=_repairTimer;
@property(nonatomic) __weak id <IDSDeviceCertificationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_missingDeviceIdentity:(_Bool *)arg1;	// IMP=0x001000000072e410
- (void)recertifyDeviceIfNeeded;	// IMP=0x001000000072e400
- (void)_repairTimerHit:(id)arg1;	// IMP=0x001000000072e3b0
- (id)init;	// IMP=0x001000000072e210

@end

