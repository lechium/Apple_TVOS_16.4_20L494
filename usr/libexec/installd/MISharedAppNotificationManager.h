//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MISharedAppNotificationManager : NSObject
{
}

+ (id)instanceForCurrentUser;	// IMP=0x0040000000028119
- (_Bool)clearPendingUpdates:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000282a9
- (id)updatedAppsWithError:(id *)arg1;	// IMP=0x001000000002823f
- (_Bool)markAppAsUpdatedForOtherUsers:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000281d5
- (id)init;	// IMP=0x00100000000281a6

@end

