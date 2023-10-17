//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODaemon, NSString;

@interface GEOMobileAssetResourceDiskSpaceProvider : NSObject
{
    GEODaemon *_daemon;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001bbb6
@property(retain, nonatomic) GEODaemon *daemon; // @synthesize daemon=_daemon;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x001000000001bb2d
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x001000000001bac4
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
