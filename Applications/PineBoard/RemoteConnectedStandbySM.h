//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RemoteConnectedStandbySM
{
    int _remoteConnectedStandbyAvailabilityDidChangeNotificationToken;	// 40 = 0x28
}

- (void)_notifyRemoteConnectedStandbyAvailabilityDidChange:(_Bool)arg1;	// IMP=0x002000000000ca68
- (void)_initializeRemoteConnectedStandbyAvailability;	// IMP=0x001000000000c869
- (void)_enterOffStateAutomatically;	// IMP=0x001000000000c854
- (void)_enterOnStateAutomatically;	// IMP=0x001000000000c83c
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x001000000000c68d
- (void)automaticDisable;	// IMP=0x001000000000c687
- (id)init;	// IMP=0x001000000000c619

@end

