//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface DCXPCListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0020000000001648
- (void).cxx_destruct;	// IMP=0x0020000000001923
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000169d
- (void)start;	// IMP=0x00100000000015d1
- (id)init;	// IMP=0x001000000000154b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
