//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDZoneGatekeeperImplementation;

@interface CKDZoneGatekeeper : NSObject
{
    CKDZoneGatekeeperImplementation *_foreground;	// 8 = 0x8
    CKDZoneGatekeeperImplementation *_background;	// 16 = 0x10
}

+ (id)gatekeeperForContainerID:(id)arg1 accountID:(id)arg2;	// IMP=0x006000000007143d
- (void).cxx_destruct;	// IMP=0x0000000000071a66
@property(retain, nonatomic) CKDZoneGatekeeperImplementation *background; // @synthesize background=_background;
@property(retain, nonatomic) CKDZoneGatekeeperImplementation *foreground; // @synthesize foreground=_foreground;
- (id)CKStatusReportArray;	// IMP=0x0000000000071831
- (_Bool)hasStatusToReport;	// IMP=0x00000000000717a8
- (void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(_Bool)arg2;	// IMP=0x00000000000716fc
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 expectDelayBeforeRequestBegins:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000071627
- (id)_init;	// IMP=0x00000000000715b2

@end
