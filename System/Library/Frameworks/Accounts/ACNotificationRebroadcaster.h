//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ACNotificationRebroadcaster : NSObject
{
}

+ (id)sharedRebroadcaster;	// IMP=0x004000000004b0c1
- (void)_endObservingAccountStoreDidChangeNotifications;	// IMP=0x000000000004b2de
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x000000000004b226
- (void)_beginObservingAccountStoreDidChangeNotifications;	// IMP=0x000000000004b1a0
- (void)dealloc;	// IMP=0x000000000004b162
- (id)init;	// IMP=0x000000000004b116

@end

