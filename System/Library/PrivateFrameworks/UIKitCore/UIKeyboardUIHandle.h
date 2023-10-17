//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, UIKeyboardUIService;
@protocol BSServiceConnectionHost;

__attribute__((visibility("hidden")))
@interface UIKeyboardUIHandle : NSObject
{
    BSServiceConnection<BSServiceConnectionHost> *_connection;	// 8 = 0x8
    UIKeyboardUIService *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e471f7
- (void)setKeyboardAlpha:(id)arg1;	// IMP=0x0000000000e47135
- (id)snapshotForOptions:(id)arg1;	// IMP=0x0000000000e46e52
- (id)snapshotForView:(id)arg1;	// IMP=0x0000000000e46833
- (id)initWithService:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000e467a1

@end
