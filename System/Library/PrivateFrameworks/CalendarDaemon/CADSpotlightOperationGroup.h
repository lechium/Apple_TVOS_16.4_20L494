//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADSpotlightOperationGroup : CADOperationGroup
{
}

+ (id)whitelistedBundles;	// IMP=0x008000000003b726
+ (_Bool)requiresEventAccess;	// IMP=0x008000000003b71e
- (void)CADWaitForSpotlightUpdatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bb4c
- (id)_gatherAllCalendarItemUUIDsInDatbase:(struct CalDatabase *)arg1;	// IMP=0x000000000003bad9
- (void)CADPushItemsToSpotlight:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b7ee
- (_Bool)accessGranted;	// IMP=0x000000000003b733

@end
