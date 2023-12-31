//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMIndoorOutdoorManager;
@protocol CMIndoorOutdoorDelegate, OS_dispatch_queue;

@interface CMIndoorOutdoorManagerInternal : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    id <CMIndoorOutdoorDelegate> _delegate;	// 16 = 0x10
    CMIndoorOutdoorManager *_sender;	// 24 = 0x18
    void *_connection;	// 32 = 0x20
    _Bool _startedUpdates;	// 40 = 0x28
}

- (void)_lastKnownIndoorOutdoorStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001609b0
- (void)_stopIndoorOutdoorUpdates;	// IMP=0x0000000000160733
- (void)_startIndoorOutdoorUpdates;	// IMP=0x0000000000160245
- (void)_teardown;	// IMP=0x00000000001601bc
- (void)dealloc;	// IMP=0x000000000016017a
- (id)init;	// IMP=0x000000000015fd98

@end

