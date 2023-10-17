//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSDeviceUserSynchronizer : NSObject
{
}

- (id)_retrieveUDID;	// IMP=0x002000000002e150
- (id)updatedUserSetForRealm:(long long)arg1 currentUsers:(id)arg2;	// IMP=0x001000000002de10
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x001000000002dce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

